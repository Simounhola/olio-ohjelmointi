#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    timer(new QTimer(this)),
    player1Time(0),
    player2Time(0),
    gameTime(0),
    gameStarted(false),
    gameOver(false),
    currentPlayer(Player1)
{
    ui->setupUi(this);

    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::setGameTime);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::setGameTime);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::switchPlayer);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::switchPlayer);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::stopGame);

    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);
    ui->label->setText("Select playtime and press Start Game");

    timer->setInterval(1000);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setGameTime()
{
    if (!gameStarted && !gameOver) {
        QPushButton *button = qobject_cast<QPushButton*>(sender());
        if (button == ui->pushButton_3) {
            gameTime = 120;
            player1Time = gameTime;
            player2Time = gameTime;
        } else if (button == ui->pushButton_4) {
            gameTime = 300;
            player1Time = gameTime;
            player2Time = gameTime;
        }

        ui->progressBar->setValue(100);
        ui->progressBar_2->setValue(100);
        ui->label->setText("Ready to play");
    }
}

void MainWindow::startGame()
{
    if (!gameStarted && !gameOver) {
        gameStarted = true;
        timer->start();
        ui->label->setText("Game ongoing");
    }
}

void MainWindow::stopGame()
{
    if (gameStarted && !gameOver) {
        gameStarted = false;
        timer->stop();
        ui->label->setText("Game stopped");
    }
}

void MainWindow::switchPlayer()
{
    if (!gameOver && gameStarted) {
        if (currentPlayer == Player1) {
            currentPlayer = Player2;
            ui->label->setText("Player 2's turn");
        } else {
            currentPlayer = Player1;
            ui->label->setText("Player 1's turn");
        }
    }
}

void MainWindow::updateTime()
{
    if (gameStarted && !gameOver) {
        if (currentPlayer == Player1) {
            if (player1Time > 0) {
                player1Time--;
            } else {
                endGame(Player2);
                return;
            }
        } else {
            if (player2Time > 0) {
                player2Time--;
            } else {
                endGame(Player1);
                return;
            }
        }
        updateProgressBar();
    }
}

void MainWindow::endGame(Player player)
{
    gameOver = true;
    timer->stop();
    if (player == Player1) {
        ui->label->setText("Player 1 wins!");
    } else {
        ui->label->setText("Player 2 wins!");
    }
}

void MainWindow::updateProgressBar() {
    // Update progress bar for Player 1
    ui->progressBar->setValue(static_cast<int>((static_cast<double>(player1Time) / gameTime) * 100));

    // Update progress bar for Player 2
    ui->progressBar_2->setValue(static_cast<int>((static_cast<double>(player2Time) / gameTime) * 100));
}

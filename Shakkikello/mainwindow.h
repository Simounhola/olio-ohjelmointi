// mainwindow.h

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QProgressBar>
#include <QTimer>
#include <QLabel>

enum Player {
    Player1,
    Player2
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setGameInfoText(const QString &text, short fontSize);

private slots:
    void setGameTime();
    void startGame();
    void stopGame();
    void switchPlayer();
    void updateTime();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    short player1Time;
    short player2Time;
    short gameTime;
    bool gameStarted;
    bool gameOver;
    Player currentPlayer;

    void endGame(Player player);
    void updateProgressBar();
};

#endif // MAINWINDOW_H

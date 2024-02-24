#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    state(1),
    operand(0)
{
    ui->setupUi(this);


    num1 = ui->lineEdit;
    num2 = ui->lineEdit_2;
    result = ui->lineEdit_3;


    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::numberClickHandler); // 0
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::numberClickHandler); // 1
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::numberClickHandler); // 2
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::numberClickHandler); // 3
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::numberClickHandler); // 4
    connect(ui->pushButton_10, &QPushButton::clicked, this, &MainWindow::numberClickHandler); // 5
    connect(ui->pushButton_11, &QPushButton::clicked, this, &MainWindow::numberClickHandler); // 6
    connect(ui->pushButton_8, &QPushButton::clicked, this, &MainWindow::numberClickHandler); // 7
    connect(ui->pushButton_13, &QPushButton::clicked, this, &MainWindow::numberClickHandler); // 8
    connect(ui->pushButton_14, &QPushButton::clicked, this, &MainWindow::numberClickHandler); // 9

    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindow::operatorClickHandler); // +
    connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWindow::operatorClickHandler); // -
    connect(ui->pushButton_15, &QPushButton::clicked, this, &MainWindow::operatorClickHandler); // *
    connect(ui->pushButton_16, &QPushButton::clicked, this, &MainWindow::operatorClickHandler); // /

    connect(ui->pushButton_18, &QPushButton::clicked, this, &MainWindow::clearClickHandler); // clear
    connect(ui->pushButton_17, &QPushButton::clicked, this, &MainWindow::enterClickHandler); // enter
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString buttonText = button->text();

    if (state == 1) {
        num1->setText(num1->text() + buttonText);
    } else if (state == 2) {
        num2->setText(num2->text() + buttonText);
    }
}

void MainWindow::operatorClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());

    if (button == ui->pushButton_7) {
        operand = 0;
    } else if (button == ui->pushButton_9) {
        operand = 1;
    } else if (button == ui->pushButton_15) {
        operand = 2;
    } else if (button == ui->pushButton_16) {
        operand = 3;
    }

    state = 2;
}

void MainWindow::clearClickHandler()
{
    state = 1;
    num1->clear();
    num2->clear();
    result->clear();
}

void MainWindow::enterClickHandler()
{
    calculateResult();
}

void MainWindow::calculateResult()
{
    float number1Value = num1->text().toFloat();
    float number2Value = num2->text().toFloat();

    float resultValue;

    switch (operand) {
    case 0: // +
        resultValue = number1Value + number2Value;
        break;
    case 1: // -
        resultValue = number1Value - number2Value;
        break;
    case 2: // *
        resultValue = number1Value * number2Value;
        break;
    case 3: // /
        if (number2Value != 0) {
            resultValue = number1Value / number2Value;
        } else {
            result->setText("Error: Division by zero");
            return;
        }
        break;
    default:
        result->setText("Error: Invalid operand");
        return;
    }

    result->setText(QString::number(resultValue));
}

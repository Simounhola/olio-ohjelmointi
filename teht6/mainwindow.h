#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void numberClickHandler();
    void operatorClickHandler();
    void clearClickHandler();
    void enterClickHandler();

private:
    Ui::MainWindow *ui;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    int state;
    int operand;

    void calculateResult();
};

#endif

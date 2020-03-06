#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cmath"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    double Delta = funcDelta();
    double x1 = funcx1(Delta);
    double x2 = funcx2(Delta);
    ui->Delta->setNum(Delta);
    ui->x1->setNum(x1);
    ui->x2->setNum(x2);
}

double MainWindow::funcDelta()
{
    double a = ui->temA->text().toDouble();
    double b = ui->temB->text().toDouble();
    double c = ui->temC->text().toDouble();
    return ((pow(b,2))+(-4*a*c));


}

double MainWindow::funcx1(double Delta)
{
    double a = ui->temA->text().toDouble();
    double b = ui->temB->text().toDouble();
    return (((-b)+sqrt(Delta))/(2*a));
}

double MainWindow::funcx2(double Delta)
{
    double a = ui->temA->text().toDouble();
    double b = ui->temB->text().toDouble();
    return (((-b)-sqrt(Delta))/(2*a));
}

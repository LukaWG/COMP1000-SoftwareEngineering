#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>

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
    QString name = ui->name->text();
    if (name.isEmpty()) {
        name = "World";
    }
    QString message = "Hello " + name + "!";
    ui->labelMessage->setText(message);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->labelMessage->setText("May the force be with you!");
}


#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    QString val = std::to_string(position).c_str(); // convert position (type int) to string and then to QString

    ui->labelNumericValue->setText(val);
}


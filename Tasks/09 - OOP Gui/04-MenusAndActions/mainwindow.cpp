#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QClipboard>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::doButtonClick);
    connect(ui->actionWise_Saying, &QAction::triggered, this, &MainWindow::doWiseSayingMenuClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doButtonClick(bool b)
{
    ui->labelMessage->setText("Hello World");
}

void MainWindow::doWiseSayingMenuClicked()
{
    ui->labelMessage->setText("Live Long and Prosper");
}

void MainWindow::on_actionPaste_triggered()
{
    QString str = QApplication::clipboard()->text();
    if (!str.isEmpty())
    {
        ui->labelMessage->setText(str);
    }
}


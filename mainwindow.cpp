#include "mainwindow.h"
#include "mainpage.h"
#include "panwidget.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QString sessionUsername, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->sessionUsername = sessionUsername;
}

MainWindow::~MainWindow()
{
    delete ui;
}

//TODO: Сделать нажимаемый элемент отдельным классом для корректной инкапсуляции
void MainWindow::on_pb_Administraion_clicked()
{
    panWidget *panMain = new panWidget(sessionUsername, "WIP");
    panMain->setGif(":/root/resources/WIP.gif");
    panMain->setWindowModality(Qt::ApplicationModal);
    panMain->show();
}


void MainWindow::on_pb_PE_clicked()
{
    panWidget *panMain = new panWidget(sessionUsername, "WIP");
    panMain->setGif(":/root/resources/WIP.gif");
    panMain->setWindowModality(Qt::ApplicationModal);
    panMain->show();
}


void MainWindow::on_pb_Stadium_clicked()
{
    panWidget *panMain = new panWidget(sessionUsername, "WIP");
    panMain->setGif(":/root/resources/WIP.gif");
    panMain->setWindowModality(Qt::ApplicationModal);
    panMain->show();
}


void MainWindow::on_pb_dorm1_clicked()
{
    panWidget *panMain = new panWidget(sessionUsername, "WIP");
    panMain->setGif(":/root/resources/WIP.gif");
    panMain->setWindowModality(Qt::ApplicationModal);
    panMain->show();
}


void MainWindow::on_pb_dorm2_clicked()
{
    panWidget *panMain = new panWidget(sessionUsername, "WIP");
    panMain->setGif(":/root/resources/WIP.gif");
    panMain->setWindowModality(Qt::ApplicationModal);
    panMain->show();
}


void MainWindow::on_pb_dorm3_clicked()
{
    panWidget *panMain = new panWidget(sessionUsername, "WIP");
    panMain->setGif(":/root/resources/WIP.gif");
    panMain->setWindowModality(Qt::ApplicationModal);
    panMain->show();
}


void MainWindow::on_pb_dorm4_clicked()
{
    panWidget *panMain = new panWidget(sessionUsername, "WIP");
    panMain->setGif(":/root/resources/WIP.gif");
    panMain->show();
}


void MainWindow::on_pb_leftWing_clicked()
{
    panWidget *panMain = new panWidget(sessionUsername, "WIP");
    panMain->setGif(":/root/resources/WIP.gif");
    panMain->setWindowModality(Qt::ApplicationModal);
    panMain->show();
}


void MainWindow::on_pb_main_clicked()
{
      panWidget *panMain = new panWidget(sessionUsername, "Main Building Pan View");
      panMain->setGif(":/root/resources/panorama-indoor.gif");
      panMain->setWindowModality(Qt::ApplicationModal);
      panMain->show();
}


void MainWindow::on_pb_parkZone_clicked()
{
    panWidget *panMain = new panWidget(sessionUsername, "Park Pan View");
    panMain->setGif(":/root/resources/panorama.gif");
    panMain->setWindowModality(Qt::ApplicationModal);
    panMain->show();
}


void MainWindow::on_pb_rightWing_clicked()
{
    panWidget *panMain = new panWidget(sessionUsername,"WIP");
    panMain->setGif(":/root/resources/WIP.gif");
    panMain->setWindowModality(Qt::ApplicationModal);
    panMain->show();
}

void MainWindow::on_pushButton_clicked()
{
    mainPage *mp = new mainPage(sessionUsername);
    mp->show();
    close();
}


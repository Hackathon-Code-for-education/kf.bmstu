#include "mainpage.h"
#include "mainwindow.h"
#include "ui_mainpage.h"

mainPage::mainPage(QString sessionUsername, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainPage)
{
    ui->setupUi(this);
    this->sessionUsername = sessionUsername;
    setWindowTitle("EduRanker - WIP");

    dbController = new DatabaseController("host", "dbName", "userName", "pwd123"); // temp
    dbController->getSessionUsername(sessionUsername);
    //temp
    QString tempUsername = "Test Testovich";
    ui->lb_username->setText(tempUsername);
}

mainPage::~mainPage()
{
    delete ui;
}

//temp DEMO
void mainPage::on_pushButton_clicked()
{
    MainWindow *w = new MainWindow(sessionUsername);
    w->show();
    close();
}


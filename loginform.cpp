#include "loginform.h"
#include "mainpage.h"
#include "ui_loginform.h"
#include "qmessagebox.h"

LogInForm::LogInForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LogInForm)
{
    ui->setupUi(this);

    dbController = new DatabaseController("host", "dbName", "userName", "pwd123"); // temp
    //temp
    ui->le_login->setText("studentUser");
    ui->le_pwd->setText("somepwd");
}

LogInForm::~LogInForm()
{
    delete ui;
}

void LogInForm::on_pushButton_clicked()
{
    if(tryLogIn(ui->le_login->text(), ui->le_pwd->text())) {
        mainPage *mP = new mainPage(ui->le_login->text());
        mP->show();
        close();
    } else {
        QMessageBox::critical(nullptr, "Error", "Incorrect input data!");
    }
}

//TODO: авторизация, сервер в процессе
bool LogInForm::tryLogIn(QString login, QString pwd)
{
    if(dbController->tryAuthorize(login, pwd)) {
        return true;
    }
    return false;
}


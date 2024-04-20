#ifndef LOGINFORM_H
#define LOGINFORM_H

#include "databasecontroller.h"
#include <QWidget>


namespace Ui {
class LogInForm;
}

class LogInForm : public QWidget
{
    Q_OBJECT

public:
    explicit LogInForm(QWidget *parent = nullptr);
    ~LogInForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LogInForm *ui;
    DatabaseController *dbController;

    bool tryLogIn(QString login, QString pwd);
};

#endif // LOGINFORM_H

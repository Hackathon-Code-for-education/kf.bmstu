#ifndef MAINPAGE_H
#define MAINPAGE_H

#include "databasecontroller.h"
#include <QWidget>

namespace Ui {
class mainPage;
}

class mainPage : public QWidget
{
    Q_OBJECT

public:
    explicit mainPage(QString sessionUsername, QWidget *parent = nullptr);
    ~mainPage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mainPage *ui;
    DatabaseController *dbController;
    QString sessionUsername;
};

#endif // MAINPAGE_H

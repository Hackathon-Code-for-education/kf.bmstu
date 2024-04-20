#ifndef PANWIDGET_H
#define PANWIDGET_H

#include "databasecontroller.h"
#include <QWidget>

namespace Ui {
class panWidget;
}

class panWidget : public QWidget
{
    Q_OBJECT

public:
    explicit panWidget(QString sessionUsername, QString name, QWidget *parent = nullptr);
    ~panWidget();
    void setGif(QString gifPath);
    void fillCommentaryList();


private slots:
    void on_pb_submitCommentary_clicked();

private:
    Ui::panWidget *ui;
    DatabaseController *dbController;
    QString sessionUsername;
};

#endif // PANWIDGET_H

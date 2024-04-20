#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "gifviewer.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QString sessionUsername, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_Administraion_clicked();

    void on_pb_PE_clicked();

    void on_pb_Stadium_clicked();

    void on_pb_dorm1_clicked();

    void on_pb_dorm2_clicked();

    void on_pb_dorm3_clicked();

    void on_pb_dorm4_clicked();

    void on_pb_leftWing_clicked();

    void on_pb_main_clicked();

    void on_pb_parkZone_clicked();

    void on_pb_rightWing_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    GIFViewer *gifViewer;
    QString sessionUsername;
};
#endif // MAINWINDOW_H

#include "loginform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogInForm loginForm;
    loginForm.setWindowTitle("HackathonCodeForEducation");
    loginForm.show();
    return a.exec();
}

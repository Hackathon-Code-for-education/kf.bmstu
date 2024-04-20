#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H
#include <QtSql>


class DatabaseController
{
public:
    DatabaseController(QString hostname, QString databaseName, QString username, QString pwd);
    ~DatabaseController();

    bool tryAuthorize(QString username, QString pwd);
    QString getSessionUsername(QString username);
    bool sentCommentary(QString username, QString commentary);
private:
    QSqlDatabase db;

    QSqlQuery executeQuery(const QString &queryStr);
    QSqlQuery selectQuery(const QString &selectStr);
    bool execNonQuery(const QString &queryStr);
};

#endif // DATABASECONTROLLER_H

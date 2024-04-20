#include "databasecontroller.h"

DatabaseController::DatabaseController(QString hostname, QString databaseName, QString username, QString pwd)
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(hostname);
    db.setDatabaseName(databaseName);
    db.setUserName(username);
    db.setPassword(pwd);

    if (!db.open()) {
        qDebug() << "Ошибка подключения к базе данных:" << db.lastError().text();
    } else {
        qDebug() << "Успешное подключение к базе данных!";
    }
}

DatabaseController::~DatabaseController() {
    db.close();
}

bool DatabaseController::tryAuthorize(QString username, QString pwd)
{
    //TODO:
    return true;
}

QString DatabaseController::getSessionUsername(QString username)
{
    //TODO:
    return QString();
}

bool DatabaseController::sentCommentary(QString username, QString commentary)
{
    //TODO:
    return true;
}

QSqlQuery DatabaseController::executeQuery(const QString &queryStr) {
    QSqlQuery query;
    if (!query.exec(queryStr)) {
        qDebug() << "Ошибка выполнения запроса:" << query.lastError().text();
    }
    return query;
}

QSqlQuery DatabaseController::selectQuery(const QString &selectStr) {
    return executeQuery(selectStr);
}

bool DatabaseController::execNonQuery(const QString &queryStr) {
    QSqlQuery query = executeQuery(queryStr);
    return query.isActive();
}

#ifndef COMMENTROW_H
#define COMMENTROW_H

#include <QWidget>

namespace Ui {
class commentRow;
}

class commentRow : public QWidget
{
    Q_OBJECT

public:
    explicit commentRow(QString username, bool bIsVerified, QString commentary, QString publishDate, QWidget *parent = nullptr);
    ~commentRow();

private:
    Ui::commentRow *ui;
    void configureRow(QString username, bool bIsVerified, QString commentary, QString publishDate);
};

#endif // COMMENTROW_H

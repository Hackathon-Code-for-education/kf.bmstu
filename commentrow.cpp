#include "commentrow.h"
#include "ui_commentrow.h"

commentRow::commentRow(QString username, bool bIsVerified, QString commentary, QString publishDate, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::commentRow)
{
    ui->setupUi(this);
    configureRow(username, bIsVerified, commentary, publishDate);
}

commentRow::~commentRow()
{
    delete ui;
}

void commentRow::configureRow(QString username, bool bIsVerified, QString commentary, QString publishDate)
{
    ui->lb_username->setText(username);
    if(bIsVerified) {
        QPixmap image(":/root/resources/verifiedMark.png");
        ui->lb_verificationMark->setPixmap(image);
    }
    ui->te_comment->setPlainText(commentary);
    ui->lb_publicationDate->setText(publishDate);
}

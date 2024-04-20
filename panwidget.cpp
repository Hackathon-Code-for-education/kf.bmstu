#include "panwidget.h"
#include "commentrow.h"
#include "gifviewer.h"
#include "qmessagebox.h"
#include "ui_panwidget.h"

panWidget::panWidget(QString sessionUsername, QString name, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::panWidget)
{
    ui->setupUi(this);
    setWindowTitle(name);
    ui->lb_name->setText(name);
    dbController = new DatabaseController("host", "dbName", "userName", "pwd123"); // temp
}

panWidget::~panWidget()
{
    delete ui;
}

void panWidget::setGif(QString gifPath)
{
    GIFViewer *gifViewer = new GIFViewer(this);
    ui->horizontalLayout->insertWidget(0, gifViewer);
    gifViewer->setGif(gifPath);
    adjustSize();
    fillCommentaryList();
    adjustSize();
}

void panWidget::fillCommentaryList()
{
    QWidget *containerWidget = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(containerWidget);

    //тест фичи
    commentRow *commentRow1 = new commentRow("Pablo Blanco", true, "Great place! I love how modelling is taught here, 10 out of 10!", "18.04.2024");
    layout->addWidget(commentRow1);

    commentRow *commentRow2 = new commentRow("Eugene Mauser", false, "Hello, was curious to enroll here, Is that really good?", "19.04.2024");
    layout->addWidget(commentRow2);

    commentRow *commentRow3 = new commentRow("Artyom Levi's", true, "Awesome place! Everyone should try to get here", "20.04.2024");
    layout->addWidget(commentRow3);

    ui->scrollArea->setWidget(containerWidget);
}

void panWidget::on_pb_submitCommentary_clicked()
{
    if(!ui->pte_Commentary->toPlainText().isEmpty()) {
        dbController->sentCommentary(sessionUsername, ui->pte_Commentary->toPlainText());
        QMessageBox::information(nullptr, "Notification!", "Thank you, your commentary was sent for a moderation!");
    } else {
        QMessageBox::critical(nullptr, "Notification!", "The commentary box is empty!");
    }
}


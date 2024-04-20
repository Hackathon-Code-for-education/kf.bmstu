#ifndef GIFVIEWER_H
#define GIFVIEWER_H

#include <QLabel>
#include <QMovie>
#include <QMouseEvent>

class GIFViewer : public QLabel {
    Q_OBJECT

public:
    explicit GIFViewer(QWidget *parent = nullptr);
    void setGif(const QString &filePath);

protected:
    void mousePressEvent(QMouseEvent *event) override;

private slots:
    void togglePause();

private:
    QMovie *movie;
    bool pausedByUser;
    int pausedFrame = 0;
    bool gifLoaded;
};

#endif // GIFVIEWER_H

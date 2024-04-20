#include "gifviewer.h"

GIFViewer::GIFViewer(QWidget *parent) : QLabel(parent), pausedByUser(false), pausedFrame(0), gifLoaded(false) {
    movie = new QMovie(this);
    movie->setCacheMode(QMovie::CacheAll);
    setMovie(movie);
    setMouseTracking(true);
    movie->stop();
}

void GIFViewer::setGif(const QString &filePath) {
    movie->stop();
    movie->setFileName(filePath);

    if (gifLoaded) {
        movie->jumpToFrame(pausedFrame);
    } else {
        gifLoaded = true;
    }
    if (!pausedByUser)
        movie->start();
    setScaledContents(true);
}

void GIFViewer::togglePause() {
    if (movie->state() == QMovie::Running) {
        movie->stop();
        pausedByUser = true;
        pausedFrame = movie->currentFrameNumber();
    } else {
        movie->start();
        movie->jumpToFrame(pausedFrame);
        pausedByUser = false;
    }
}

void GIFViewer::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        togglePause();
    }
    QLabel::mousePressEvent(event);
}

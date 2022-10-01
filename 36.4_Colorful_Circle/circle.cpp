#include "include\circle.h"
#include <QPainter>

Circle::Circle(QWidget *parent) {
    setParent(parent);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mCircleRed = QPixmap("C:\\Users\\serge\\CLionProjects\\36.4_Colorful_Circle\\circle\\red.png");
    mCircleGreen = QPixmap("C:\\Users\\serge\\CLionProjects\\36.4_Colorful_Circle\\circle\\green.png");
    mCircleYellow = QPixmap("C:\\Users\\serge\\CLionProjects\\36.4_Colorful_Circle\\circle\\yellow.png");
    mCurrentColor = mCircleGreen;
    setGeometry(mCurrentColor.rect());
}

void Circle::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentColor);
}

QSize Circle::minimumSizeHint() const {
    return QSize(250, 250);
}

void Circle::setRed() {
    mCurrentColor = mCircleRed;
    update();
}

void Circle::setGreen() {
    mCurrentColor = mCircleGreen;
    update();
}

void Circle::setYellow() {
    mCurrentColor = mCircleYellow;
    update();
}
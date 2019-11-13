#include <QImage>
#include <QtWidgets>
#include "scribblearea.h"
#include <iostream>

ScribbleArea::ScribbleArea(QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_StaticContents);

    scribbling = false;
    myPenColor = Qt::black;
    myPenWidth = 2;
    myFont = QFont("times", 15, QFont::Bold);
    myText = "Hello";
    myTextColor = Qt::black;
    isEraser = false;

    resetImage();
    update();
}

void ScribbleArea::mousePressEvent(QMouseEvent *event)
{
    if(event ->button() == Qt::LeftButton){
        lastPoint = event->pos();
        scribbling = true;
    }

    if(event->button() == Qt::RightButton) {
        drawText(event->pos());
    }
}

void ScribbleArea::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton && scribbling){
        drawLineto(event->pos());
        scribbling = false;
    }
}

void ScribbleArea::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton && scribbling){
        drawLineto(event->pos());
    }
}

void ScribbleArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect dirtyRect = event->rect();
    painter.drawImage(dirtyRect, image, dirtyRect);
}

void ScribbleArea::resizeEvent(QResizeEvent *event)
{
    resetImage();
    update();

    QWidget::resizeEvent(event);
}

void ScribbleArea::newImage()
{
    resetImage();
    update();
}

void ScribbleArea::resetImage()
{
    QSize widgetSize = QSize(width(), height());

    QImage newImage(widgetSize, QImage::Format_RGB32);

    newImage.fill(qRgb(255,255,255));
    image = newImage;
}

void ScribbleArea::drawLineto(const QPoint &endPoint)
{
    QPainter painter(&image);
    painter.setPen(QPen(myPenColor, myPenWidth,
                        Qt::SolidLine,
                        Qt::RoundCap,
                        Qt::RoundJoin));
    painter.drawLine(lastPoint, endPoint);

    update();

    lastPoint = endPoint;
}

void ScribbleArea::drawText(const QPoint &at)
{
    QPainter painter(&image);
    QFont newFont = myFont;
    painter.setFont(newFont);
    painter.setPen(myTextColor);
    painter.drawText(at, myText);
    update();
}

bool ScribbleArea::getIsEraser() const
{
    return isEraser;
}

void ScribbleArea::setIsEraser(bool value)
{
    isEraser = value;
}

QColor ScribbleArea::getMyTextColor() const
{
    return myTextColor;
}

void ScribbleArea::setMyTextColor(const QColor &value)
{
    myTextColor = value;
}

QString ScribbleArea::getMyText() const
{
    return myText;
}

void ScribbleArea::setMyText(const QString &value)
{
    myText = value;
}

QFont ScribbleArea::getMyFont() const
{
    return myFont;
}

void ScribbleArea::setMyFont(const QFont &value)
{
    myFont = value;
}

QColor ScribbleArea::getMyPenColor() const
{
    return myPenColor;
}

void ScribbleArea::setMyPenColor(const QColor &value)
{
    myPenColor = value;
}

int ScribbleArea::getMyPenWidth() const
{
    return myPenWidth;
}

void ScribbleArea::setMyPenWidth(int value)
{
    myPenWidth = value;
}

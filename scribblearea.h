#ifndef SCRIBBLEAREA_H
#define SCRIBBLEAREA_H

#include <QWidget>

class ScribbleArea : public QWidget
{
    Q_OBJECT
public:
    explicit ScribbleArea(QWidget *parent = nullptr);

    int getMyPenWidth() const;
    void setMyPenWidth(int value);

    QColor getMyPenColor() const;
    void setMyPenColor(const QColor &value);

    QFont getMyFont() const;
    void setMyFont(const QFont &value);

    QString getMyText() const;
    void setMyText(const QString &value);

    QColor getMyTextColor() const;
    void setMyTextColor(const QColor &value);

    bool getIsEraser() const;
    void setIsEraser(bool value);

signals:

public slots:

    // QWidget interface
    void newImage();
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);

private:
    void resetImage();
    void drawLineto(const QPoint &endPoint);
    void drawText(const QPoint &at);

    QImage image;

    bool scribbling;
    bool isEraser;

    int myPenWidth;

    QColor myPenColor;
    QFont myFont;
    QString myText;
    QColor myTextColor;

    QPoint lastPoint;

};

#endif // SCRIBBLEAREA_H

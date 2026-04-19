#ifndef BIRD_H
#define BIRD_H

#include <QGraphicsPixmapItem>
#include <QPixmap>

class Bird : public QGraphicsPixmapItem {
public:
    Bird();
    void flap();
    void updatePosition();
    void reset();
    void setSkin(const QPixmap& pix);
    void useDefaultSkin();

private:
    qreal velocity;
    qreal gravity;
    qreal lift;
    QPixmap skinUp;
    QPixmap skinMid;
    QPixmap skinDown;
    bool customSkin;
    QPixmap defaultUp;
    QPixmap defaultMid;
    QPixmap defaultDown;
};

#endif // BIRD_H

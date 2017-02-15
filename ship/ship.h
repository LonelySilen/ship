#ifndef SHIP_H
#define SHIP_H

#include "global.h"

class Ship : public QGraphicsItem
{

public:
    Ship();

    QRectF boundingRect() const;
    QPainterPath shape() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget);
protected:
    void advance(int step);

private:
    qreal angle;
    qreal speed;
    qreal shipDirection;
    QColor color;
};

#endif

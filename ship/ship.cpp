#include "ship.h"

static const double Pi = 3.14159265358979323846264338327950288419717;
static double TwoPi = 2.0 * Pi;

static qreal normalizeAngle(qreal angle)
{
    while (angle < 0)
        angle += TwoPi;
    while (angle > TwoPi)
        angle -= TwoPi;
    return angle;
}

Ship::Ship()
	 : angle(0), speed(0), shipDirection(0), 
		color(qrand() % 256, qrand() % 256, qrand() % 256)
{
    setRotation(qrand() % (360 * 16));
}

QRectF Ship::boundingRect() const
{
    qreal adjust = 0.5;
    return QRectF(-18 - adjust, -22 - adjust,
			 36 + adjust, 60 + adjust);
}

QPainterPath Ship::shape() const
{
    QPainterPath path;
    path.addRect(-10, -20, 20, 40);
    return path;
}

void Ship::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{

    // Body
    static const QPoint triangle[3] = {QPoint(-4,16), QPoint(4,16), QPoint(0,-16)};
    painter->setBrush(scene()->collidingItems(this).isEmpty() ? Qt::darkYellow : Qt::red);
    painter->drawPolygon(triangle, 3);

}

void Ship::advance(int step)
{
    if (!step)
	return;
    // Don't move too far away
    QLineF lineToCenter(QPointF(0, 0), mapFromScene(0, 0));
    if (lineToCenter.length() > 150) {
        qreal angleToCenter = ::acos(lineToCenter.dx() / lineToCenter.length());
        if (lineToCenter.dy() < 0)
            angleToCenter = TwoPi - angleToCenter;
        angleToCenter = normalizeAngle((Pi - angleToCenter) + Pi / 2);

        if (angleToCenter < Pi && angleToCenter > Pi / 4) {
            // Rotate left
            angle += (angle < -Pi / 2) ? 0.25 : -0.25;
        } else if (angleToCenter >= Pi && angleToCenter < (Pi + Pi / 2 + Pi / 4)) {
            // Rotate right
            angle += (angle < Pi / 2) ? 0.25 : -0.25;
        }
    } else if (::sin(angle) < 0) {
        angle += 0.25;
    } else if (::sin(angle) > 0) {
        angle -= 0.25;
    }

    // Try not to crash with any other ships
    QList<QGraphicsItem *> dangerShips = scene()->items(QPolygonF()
                                                       << mapToScene(0, 0)
                                                       << mapToScene(-30, -50)
                                                       << mapToScene(30, -50));
    foreach (QGraphicsItem *item, dangerShips) {
        if (item == this)
            continue;

        QLineF lineToShip(QPointF(0, 0), mapFromItem(item, 0, 0));
        qreal angleToShip = ::acos(lineToShip.dx() / lineToShip.length());
        if (lineToShip.dy() < 0)
            angleToShip = TwoPi - angleToShip;
        angleToShip = normalizeAngle((Pi - angleToShip) + Pi / 2);

        if (angleToShip >= 0 && angleToShip < Pi / 2) {
           // Rotate right
           angle += 0.5;
       } else if (angleToShip <= TwoPi && angleToShip > (TwoPi - Pi / 2)) {
           // Rotate left
           angle -= 0.5;
       }
    }
    // Add some random movement
    if (dangerShips.size() > 1 && (qrand() % 10) == 0) {
        if (qrand() % 1)
            angle += (qrand() % 100) / 500.0;
        else
            angle -= (qrand() % 100) / 500.0;
    }

    speed += (-50 + qrand() % 100) / 100.0;

    qreal dx = ::sin(angle) * 10;
    shipDirection = (qAbs(dx / 5) < 1) ? 0 : dx / 5;

    setRotation(rotation() + dx);
    setPos(mapToParent(0, -(3 + sin(speed) * 3)));

}


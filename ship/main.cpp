#include <QApplication>
#include "ship.h"
#include "scale.h"
static const int ShipCount = 7;

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));

    /*QGraphicsScene scene;
    scene.setSceneRect(0, -80, 600, 600);
    scene.setItemIndexMethod(QGraphicsScene::NoIndex);
    Scale scale;
    scale.setMinValue(600);
    scene.addWidget(&scale);

    for (int i = 0; i < ShipCount; ++i) {
        Ship *ship = new Ship;
        //ship->setPos(::sin((i * 6.28) / ShipCount) * 200,
                      //::cos((i * 6.28) / ShipCount) * 200);
        ship->setPos(200, 200);
        scene.addItem(ship);
    }

    QGraphicsView view(&scene);
    view.setRenderHint(QPainter::Antialiasing);
    view.setBackgroundBrush(Qt::white);
    view.setCacheMode(QGraphicsView::CacheBackground);
    view.setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    view.setDragMode(QGraphicsView::ScrollHandDrag);
    view.setWindowTitle(QT_TRANSLATE_NOOP(QGraphicsView, "Ship"));
    view.resize(600,600);
    view.show();

    QTimer timer;
    QObject::connect (&timer, SIGNAL(timeout()), &scene, SLOT(advance()));
    timer.start(1000 / 33);*/
    QGraphicsScene scene;
    scene.setSceneRect(0, -80, 600, 600);
    scene.setItemIndexMethod(QGraphicsScene::NoIndex);
    Scale scale;
    scale.setMinValue(600);
    scene.addWidget(&scale);

    for (int i = 0; i < ShipCount; ++i) {
        Ship *ship = new Ship;
        ship->setPos(::sin((i * 6.28) / ShipCount) * 200,
                      ::cos((i * 6.28) / ShipCount) * 200);
        ship->setPos(200, 200);
        scene.addItem(ship);
    }

    QSplitter *splitterMain = new QSplitter(Qt::Horizontal, 0);
    QGraphicsView *view = new QGraphicsView(splitterMain);
    view->setAlignment(Qt::AlignCenter);
    view->setScene(&scene);
    view->setRenderHint(QPainter::Antialiasing);
    view->setBackgroundBrush(Qt::white);
    view->setCacheMode(QGraphicsView::CacheBackground);
    view->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    view->setDragMode(QGraphicsView::ScrollHandDrag);
    view->setWindowTitle(QT_TRANSLATE_NOOP(QGraphicsView, "Ship"));
    view->resize(600,600);
    //right window
    QSplitter *splitterRight = new QSplitter(Qt::Vertical, splitterMain);
     splitterRight->setOpaqueResize(false);
    QTableWidget *table = new QTableWidget(8,2,splitterRight);
    table->setColumnWidth(0, 110);
     table->setColumnWidth(1,110);
     for(int i = 0;i < 8; i++)
     {
         table->setRowHeight(i,60);
     }
    splitterMain->setStretchFactor(1, 1);
    splitterMain->show();

    QTimer timer;
    QObject::connect (&timer, SIGNAL(timeout()), &scene, SLOT(advance()));
    timer.start(1000 / 33);
    return app.exec();
}

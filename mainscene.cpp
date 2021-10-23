#include "mainscene.h"
#include "map.h"



MainScene::MainScene()
{

    QPointF p = QPointF(10, 10);
    QGraphicsScene *scene = new QGraphicsScene();

    setScene(scene);


}


/*
 * 00000000000001000000000001
 * 00001100000101000000000011
 * 00111111011111110000001111
 * 11111111111111111111111111
 * 11111111111111111111111111
 */

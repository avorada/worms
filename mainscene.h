#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <qgraphicsview.h>

class MainScene : public QGraphicsView
{
    Q_OBJECT
public:
    MainScene();
    int widthWindow;
    int heightWindow;
};

#endif // MAINSCENE_H

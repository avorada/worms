#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <qgraphicsitem.h>



class GameObject : public QObject, public QGraphicsItem
{
public:
    GameObject();
    void setImage(QString);

private:
    QPixmap sprite;


public:
    int widthSprite;
    int heightSprite;
};


#endif // GAMEOBJECT_H

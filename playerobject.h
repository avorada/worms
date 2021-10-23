#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <qgraphicsitem.h>



class PlayerObject : public QObject, public QGraphicsItem
{
public:
    PlayerObject();
    void setImage(QString);
    void playerInfo(QString, QColor);

    int widthSprite;
    int heightSprite;


private:
    QPixmap sprite;
    QString namePlayer;
    QColor colorTeam;



};


#endif // GAMEOBJECT_H

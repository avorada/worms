#include "playerobject.h"

PlayerObject::PlayerObject()
{

}

void PlayerObject::playerInfo(QString name, QColor color) {
    namePlayer = name;
    colorTeam = color;
}

void PlayerObject::setImage(QString path) {
    sprite.load(path);

    widthSprite  = sprite.width();
    heightSprite = sprite.height();
}

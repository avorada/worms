#include "gameobject.h"

GameObject::GameObject()
{

}

void GameObject::setImage(QString path) {
    sprite.load(path);

    widthSprite  = sprite.width();
    heightSprite = sprite.height();
}

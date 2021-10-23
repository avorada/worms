#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QApplication>
#include <QGraphicsScene>
#include <button.h>


Button::Button()
{

}

void Button::enterEvent(QEnterEvent *) {
    this->setIcon(hoverIcon);
}

void Button::leaveEvent(QEvent *)
{
    this->setIcon(icon);
}

void Button::getIcons(QString firstPath, QString secondPath)
{
    QPixmap icoPixmap = QPixmap(firstPath);
    QPixmap icoHoverPixmap = QPixmap(secondPath);

    icon.addPixmap(icoPixmap);
    hoverIcon.addPixmap(icoHoverPixmap);

    this->setIcon(icoPixmap);
    this->setIconSize(icoPixmap.rect().size());

    width = icoPixmap.rect().size().width();
    height = icoPixmap.rect().size().height();
    this->setGeometry(posX, posY, width, height);

}

void Button::setPos(int x, int y)
{
    posX = x;
    posY = y;
    this->setGeometry(posX, posY, width, height);
}

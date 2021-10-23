#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QApplication>
#include <QGraphicsScene>
#include <button.h>


button::button()
{
  setAcceptedMouseButtons(Qt::LeftButton);
  setAcceptHoverEvents(true);
}
//------------------------------------------------------------------------------

QRectF button::boundingRect() const
{
  return QRectF(0, 0, mWidth, mHeigth);
}

//------------------------------------------------------------------------------
void button::enableMouseMoving()
{
  mIsMovable = true;
}
//------------------------------------------------------------------------------
void button::disableMouseMoving()
{
  mIsMovable = false;
}
//------------------------------------------------------------------------------
void button::setImage(QString aPath, QString aPathHover)
{
  mPixMap.load(aPath);
  mPixMapHover.load(aPathHover);

  mWidth  = mPixMap.width();
  mHeigth = mPixMap.height();
}
//------------------------------------------------------------------------------
void button::setGeometry(int aWidth, int aHeight)
{
  mWidth  = aWidth;
  mHeigth = aHeight;
}
//------------------------------------------------------------------------------
void button::paint(QPainter *painter,
                   const QStyleOptionGraphicsItem */*option*/,
                   QWidget */*widget*/)
{
  if(mHover)
    painter->drawPixmap(0,0, mWidth, mHeigth, mPixMapHover);
  else
    painter->drawPixmap(0,0, mWidth, mHeigth, mPixMap);
}
//------------------------------------------------------------------------------
void button::hoverEnterEvent(QGraphicsSceneHoverEvent*)
{
  //qWarning() << "Enter";
  mHover = true;
  QGraphicsItem::update();
}
//------------------------------------------------------------------------------
void button::hoverLeaveEvent(QGraphicsSceneHoverEvent*)
{
  //qWarning() << "Leave";
  mHover = false;
  QGraphicsItem::update();
}
//------------------------------------------------------------------------------
void button::mousePressEvent(QGraphicsSceneMouseEvent *aEvent)
{
  mStartMovePos = aEvent->pos();
  mIsMoving = false;
}
//------------------------------------------------------------------------------

void button::mouseReleaseEvent(QGraphicsSceneMouseEvent *apEvent)
{
  if(!mIsMoving)
    emit btnMouseReleaseEvent(apEvent->button());
}


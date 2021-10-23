#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <QObject>
#include <QGraphicsItem>
#include <QPointF>
#include <QPixmap>

class button : public QObject, public QGraphicsItem
{
  Q_OBJECT
  Q_INTERFACES(QGraphicsItem)
public:
  button();

  QRectF boundingRect() const override;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

  void mousePressEvent(QGraphicsSceneMouseEvent *)  override;

  void mouseReleaseEvent(QGraphicsSceneMouseEvent *)override;

  void hoverEnterEvent(QGraphicsSceneHoverEvent*)   override;
  void hoverLeaveEvent(QGraphicsSceneHoverEvent*)   override;

  void enableMouseMoving();
  void disableMouseMoving();

  void setGeometry(int, int);
  void setImage(QString, QString);

signals:
  void btnMouseReleaseEvent(Qt::MouseButton);

private:
  int mWidth{0};
  int mHeigth{0};

  bool mIsMovable{false};
  bool mIsMoving{false};
  bool mHover{false};

  QPixmap mPixMap;
  QPixmap mPixMapHover;

  QPointF mStartMovePos;
};

#endif // BUTTON_HPP

#ifndef BUTTON_HPP
#define BUTTON_HPP


#include <QPushButton>

class Button : public QPushButton
{
  Q_OBJECT
public:
  Button();
  void getIcons(QString firstPath, QString secondPath);
  void setPos(int, int);
  int posX;
  int posY;
  int width;
  int height;
  // QWidget interface
protected:
  void enterEvent(QEnterEvent *event);
  void leaveEvent(QEvent *event);

  QIcon icon;
  QIcon hoverIcon;
signals:
  //void clicked();






};

#endif // BUTTON_HPP

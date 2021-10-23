#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <qgridlayout.h>

class Settings : public QWidget
{
    Q_OBJECT
public:
    explicit Settings(QWidget *parent = nullptr);
private:
    QGridLayout *grid;
signals:

};

#endif // SETTINGS_H

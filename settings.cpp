#include "settings.h"

#include <qpushbutton.h>

Settings::Settings(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(500, 400);

    grid = new QGridLayout(this);
    QPushButton *btn = new QPushButton("123");

    grid->addWidget(btn);

    setLayout(grid);
}

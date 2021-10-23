#include "gamewindow.h"
#include "menuwindow.h"
#include "settings.h"
#include <mainscene.h>
#include <QGraphicsPixmapItem>
#include <QApplication>
#include <QApplication>
#include <QLayout>
#include <QLabel>


MenuWindow::MenuWindow()
{

    QPixmap background("D:\\Projects\\Qt Projects\\worms\\res\\backgroundmenu.png");
    QLabel *bck = new QLabel();
    bck->setGeometry(0, 0, 1600, 900);
    bck->setPixmap(background);

    startGameBtn.getIcons("D:\\Projects\\Qt Projects\\worms\\res\\start.png", "D:\\Projects\\Qt Projects\\worms\\res\\start_hover.png");
    startGameBtn.setPos(100, 500);
    connect(&startGameBtn, SIGNAL(clicked()), this, SLOT(startGameBtn()));

    settingsGameBtn.getIcons("D:\\Projects\\Qt Projects\\worms\\res\\settings.png", "D:\\Projects\\Qt Projects\\worms\\res\\settings_hover.png");
    settingsGameBtn.setPos(100, 600);
    connect(&settingsGameBtn, SIGNAL(clicked()), this, SLOT(settingsGameBtn()));

    closeGameBtn.getIcons("D:\\Projects\\Qt Projects\\worms\\res\\quit.png", "D:\\Projects\\Qt Projects\\worms\\res\\quit_hover.png");
    closeGameBtn.setPos(100, 700);
    connect(&closeGameBtn, SIGNAL(clicked()), this, SLOT(closeGame()));

    setCentralWidget(bck);
    layout()->addWidget(&startGameBtn);
    layout()->addWidget(&settingsGameBtn);
    layout()->addWidget(&closeGameBtn);

}

void MenuWindow::startGame() {
    GameWindow game;

    game.showFullScreen();

    this->close();
}


void MenuWindow::settingsGame() {
    Settings setting;

    setting.show();

}


void MenuWindow::closeGame() {
    this->close();
}

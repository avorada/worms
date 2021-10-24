#include "button.h"
#include "gamewindow.h"
#include "menuwindow.h"
#include "settings.h"
#include <mainscene.h>
#include <QGraphicsPixmapItem>
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
    connect(&startGameBtn, &Button::clicked, this, &MenuWindow::startGame);

    settingsGameBtn.getIcons("D:\\Projects\\Qt Projects\\worms\\res\\settings.png", "D:\\Projects\\Qt Projects\\worms\\res\\settings_hover.png");
    settingsGameBtn.setPos(100, 600);
    connect(&settingsGameBtn, &Button::clicked, this, &MenuWindow::settingsGame);

    closeGameBtn.getIcons("D:\\Projects\\Qt Projects\\worms\\res\\quit.png", "D:\\Projects\\Qt Projects\\worms\\res\\quit_hover.png");
    closeGameBtn.setPos(100, 700);
    connect(&closeGameBtn, &Button::clicked, this, &MenuWindow::closeGame);

    setCentralWidget(bck);
    centralWidget()->layout()->addWidget(&startGameBtn);
    layout()->addWidget(&settingsGameBtn);
    layout()->addWidget(&closeGameBtn);

}

void MenuWindow::startGame() {
    GameWindow *game = new GameWindow();

    game->showFullScreen();

    this->close();
}


void MenuWindow::settingsGame() {
    Settings *setting = new Settings;

    setting->show();

}


void MenuWindow::closeGame() {
    this->close();
}

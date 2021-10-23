#include "mainmenu.h"
#include "settings.h"
#include <mainscene.h>
#include <QGraphicsPixmapItem>
#include <QApplication>

MainMenu::MainMenu()
{



    QGraphicsPixmapItem *bck = new QGraphicsPixmapItem();
    bck->setPixmap(QPixmap("D:/Projects/Qt Projects/worms/res/backgroundmenu.png"));


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    menu.addItem(bck);
    startGameBtn.setPos(150, 400);

    startGameBtn.setImage("D:/Projects/Qt Projects/worms/res/start.png",
                          "D:/Projects/Qt Projects/worms/res/start_hover.png");
    connect(&startGameBtn, &button::btnMouseReleaseEvent,
            this, &MainMenu::startGame);
    menu.addItem(&startGameBtn);

    settingsGameBtn.setImage("D:/Projects/Qt Projects/worms/res/settings.png",
                             "D:/Projects/Qt Projects/worms/res/settings_hover.png");
    settingsGameBtn.setPos(150, 500);
    connect(&settingsGameBtn, &button::btnMouseReleaseEvent,
            this, &MainMenu::settingsGame);
    menu.addItem(&settingsGameBtn);

    closeGameBtn.setImage("D:/Projects/Qt Projects/worms/res/quit.png",
                          "D:/Projects/Qt Projects/worms/res/quit_hover.png");
    closeGameBtn.setPos(150, 600);
    connect(&closeGameBtn, &button::btnMouseReleaseEvent,
            this, &MainMenu::closeGame);
    menu.addItem(&closeGameBtn);



    setScene(&menu);
}

void MainMenu::startGame(Qt::MouseButton) {
    MainScene *game = new MainScene();

    game->showFullScreen();

    this->close();
}


void MainMenu::settingsGame(Qt::MouseButton) {
    Settings *setting = new Settings();

    setting->show();

}


void MainMenu::closeGame(Qt::MouseButton) {
    this->close();
}

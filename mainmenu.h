#ifndef MAINMENU_H
#define MAINMENU_H

#include <button.h>
#include <qgraphicsview.h>



class MainMenu : public QGraphicsView
{
    Q_INTERFACES(QGraphicsItem)
public:
    MainMenu();
    int widthWindow;
    int heightWindow;

public slots:
    void startGame(Qt::MouseButton aBtn);
    void settingsGame(Qt::MouseButton aBtn);
    void closeGame(Qt::MouseButton aBtn);

private:
    button startGameBtn;
    button settingsGameBtn;
    button closeGameBtn;

    QGraphicsScene menu;
};

#endif // MAINMENU_H

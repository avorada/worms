#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>
#include <button.h>




class MenuWindow : public QMainWindow
{

public:
    MenuWindow();


private slots:
    void startGame();
    void settingsGame();
    void closeGame();

private:
    Button startGameBtn;
    Button settingsGameBtn;
    Button closeGameBtn;

    QPixmap startPixmap;
    QPixmap settingsPixmap;
    QPixmap closePixmap;

    QPixmap startHoverPixmap;
    QPixmap settingsHoverPixmap;
    QPixmap closeHoverPixmap;

    QIcon startIcon;
    QIcon settingsIcon;
    QIcon closeIcon;

    QIcon startHoverIcon;
    QIcon settingsHoverIcon;
    QIcon closeHoverIcon;

};

#endif // MENUWINDOW_H

#include "map.h"

#include <mainmenu.h>
#include <QApplication>
#include <mainscene.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainMenu menu;


    menu.showFullScreen();



    return a.exec();
}

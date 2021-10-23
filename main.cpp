#include "map.h"

#include <menuwindow.h>
#include <QApplication>
#include <mainscene.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MenuWindow menu;

    menu.showFullScreen();





    return a.exec();
}

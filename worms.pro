QT       += core gui
QT       += opengl
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    button.cpp \
    engine.cpp \
    gameobject.cpp \
    gamewindow.cpp \
    logic.cpp \
    main.cpp \
    mainscene.cpp \
    map.cpp \
    menuwindow.cpp \
    playerobject.cpp \
    settings.cpp \
    weaponsmenu.cpp

HEADERS += \
    button.h \
    engine.h \
    gameobject.h \
    gamewindow.h \
    logic.h \
    mainscene.h \
    map.h \
    menuwindow.h \
    playerobject.h \
    settings.h \
    weaponsmenu.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pics.qrc

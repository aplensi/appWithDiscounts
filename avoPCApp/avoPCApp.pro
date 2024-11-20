QT       += core gui
QT += sql
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
CONFIG += staticlib
CONFIG += qzxing_qml

include(qzxing/src/QZXing.pri)

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$PWD/qzxing/src
CONFIG += enable_encoder_qr_code

SOURCES += \
    additemtolist.cpp \
    changer.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h \
    additemtolist.h \
    changer.h


FORMS += \
    additemtolist.ui \
    changer.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

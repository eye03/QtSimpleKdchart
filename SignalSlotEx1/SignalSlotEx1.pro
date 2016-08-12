#-------------------------------------------------
#
# Project created by QtCreator 2016-08-12T14:11:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SignalSlotEx1
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    LayerA.cpp \
    LayerB.cpp \
    ItemA.cpp

HEADERS  += widget.h \
    LayerA.h \
    LayerB.h \
    ItemA.h

FORMS    += widget.ui \
    LayerA.ui \
    LayerB.ui \
    ItemA.ui

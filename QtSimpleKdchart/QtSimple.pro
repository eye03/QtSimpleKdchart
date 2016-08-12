#-------------------------------------------------
#
# Project created by QtCreator 2016-07-25T17:05:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtSimple
TEMPLATE = app

!include(QtSimple.pri ) {error(" Couldn't find the RpkLib.pri file! ")}
#include( $${TOP_SOURCE_DIR}/examples/examples.pri )

win32{
OS=windows
}
unix:!macx{
OS=linux
}
mac:!macx{
OS=ios
}
macx{
OS=osx
}
android{
OS=android
}


DESTDIR = $$PWD/bin/$${OS}
OBJECTS_DIR = $$PWD/obj
MOC_DIR = $$PWD/obj
UI_DIR = $$PWD/obj/ui_header


SOURCES += main.cpp\
        widget.cpp \
    StageStart.cpp \
    Global.cpp \
    StageBase.cpp \
    ChartA.cpp \
    TableModel.cpp

HEADERS  += widget.h \
    StageStart.h \
    Global.h \
    StageBase.h \
    ChartA.h \
    TableModel.h

FORMS    += widget.ui \
    StageStart.ui \
    ChartA.ui

#KDChart

#HEADERS += $$PWD/KDChart-2.6.0/include/KDChart/KDChartChart.h
#HEADERS += $$PWD/KDChart

INCLUDEPATH += $$PWD/KDChart-2.6.0/include/KDChart
LIBS += $$PWD/KDChart-2.6.0/lib/libkdchart.so.2.6.0 \
              $$PWD/KDChart-2.6.0/lib/libtesttools.so.2.6.0
#RESOURCES = LineChart.qrc

RESOURCES += QtSimple.qrc

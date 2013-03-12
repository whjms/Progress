#-------------------------------------------------
#
# Project created by QtCreator 2013-03-09T13:53:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Progress
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    itemgenerator.cpp \
    item.cpp \
    questgenerator.cpp \
    quest.cpp \
    location.cpp \
    locationgenerator.cpp \
    itemquest.cpp \
    killquest.cpp \
    lootitem.cpp \
    equipmentitem.cpp

HEADERS  += mainwindow.h \
    itemgenerator.h \
    item.h \
    questgenerator.h \
    quest.h \
    location.h \
    locationgenerator.h \
    itemquest.h \
    killquest.h \
    lootitem.h \
    equipmentitem.h

FORMS    += mainwindow.ui

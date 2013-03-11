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
    quest.cpp

HEADERS  += mainwindow.h \
    itemgenerator.h \
    item.h \
    questgenerator.h \
    quest.h

FORMS    += mainwindow.ui

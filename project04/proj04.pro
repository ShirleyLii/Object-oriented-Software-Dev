QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = proj04
TEMPLATE = app


SOURCES += main.cpp\
        databaseform.cpp \
    addrecordform.cpp

HEADERS  += databaseform.h \
    addrecordform.h \
    observer.h \
    sort.h \
    builder.h \
    filebuilder.h

FORMS    += databaseform.ui \
    addrecordform.ui

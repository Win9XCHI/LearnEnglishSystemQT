QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

PACKAGECONFIG_append_pn-qtbase = " sql-sqlite"
# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    db.cpp \
    doneform.cpp \
    inputform.cpp \
    main.cpp \
    mainwindow.cpp \
    projectdb.cpp \
    scheduleform.cpp \
    settingform.cpp \
    taskform.cpp \
    user.cpp \
    warningform.cpp

HEADERS += \
    db.h \
    doneform.h \
    inputform.h \
    mainwindow.h \
    projectdb.h \
    scheduleform.h \
    settingform.h \
    taskform.h \
    user.h \
    warningform.h

FORMS += \
    doneform.ui \
    inputform.ui \
    mainwindow.ui \
    scheduleform.ui \
    settingform.ui \
    taskform.ui \
    warningform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

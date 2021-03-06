#-------------------------------------------------
#
# Project created by QtCreator 2021-01-14T11:05:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Test_Image_Creator_RC
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp\
        ../../ProjectsLib/LibMarcin/myimagewidget.cpp \
        ../../ProjectsLib/LibMarcin/NormalizationLib.cpp \
        ../../ProjectsLib/LibMarcin/DispLib.cpp \
        ../../ProjectsLib/LibMarcin/StringFcLib.cpp \
        ../../ProjectsLib/LibMarcin/histograms.cpp \
        ../../ProjectsLib/LibMarcin/RegionU16Lib.cpp \
        ../../ProjectsLib/LibMarcin/gradient.cpp

HEADERS += \
        mainwindow.h\
        ../../ProjectsLib/LibMarcin/myimagewidget.h \
        ../../ProjectsLib/LibMarcin/NormalizationLib.h \
        ../../ProjectsLib/LibMarcin/DispLib.h \
        ../../ProjectsLib/LibMarcin/StringFcLib.h \
        ../../ProjectsLib/LibMarcin/histograms.h \
        ../../ProjectsLib/LibMarcin/RegionU16Lib.h \
        ../../ProjectsLib/LibMarcin/gradient.h

FORMS += \
        mainwindow.ui

#include(../Pri_itk_windows.pri)

win32: INCLUDEPATH += C:\opencv452\include\
win32: INCLUDEPATH += C:\boost1_75\
win32: INCLUDEPATH += ..\..\ProjectsLib\LibMarcin\
win32: INCLUDEPATH += C:\LibTiff\
win32: INCLUDEPATH += ../../ProjectsLibForein/LibPMS/
win32: INCLUDEPATH += ../../ProjectsLibForein/LibPMS/

#INCLUDEPATH += C:/ITK2/include/ITK-5.0/

# this is for debug
win32: LIBS += -LC:/opencv452/x64/vc16/lib/
win32: LIBS += -lopencv_world452d

win32: LIBS += -LC:/boost1_75/stage/x64/lib/
win32:  LIBS += -lboost_filesystem-vc142-mt-gd-x64-1_75
win32:  LIBS += -lboost_regex-vc142-mt-gd-x64-1_75
#win32:  LIBS += -lboost_random-vc142-mt-gd-x64-1_75

# this is for release
#win32: LIBS += -LC:/opencv452/x64/vc16/lib/
#win32: LIBS += -lopencv_world452

#win32: LIBS += -LC:/boost1_75/stage/x64/lib/
#win32: LIBS += -lboost_filesystem-vc142-mt-x64-1_75
#win32: LIBS += -lboost_regex-vc142-mt-x64-1_75

#win32: LIBS += -lboost_random-vc142-mt-x64-1_75



win32: LIBS += -LC:/LibTiff/
win32: LIBS += -llibtiff_i


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

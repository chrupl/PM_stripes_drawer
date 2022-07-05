/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frameFolder;
    QLineEdit *lineEditOutFolder;
    QLineEdit *lineEditImageFolder;
    QPushButton *pushButtonOpenImageFolder;
    QPushButton *pushButtonOpenOutFolder;
    QFrame *frameFiles;
    QLineEdit *lineEditRegexImageFile;
    QListWidget *listWidgetImageFiles;
    QTextEdit *textEditOut;
    QFrame *frameMode;
    QCheckBox *checkBoxShowInput;
    QLabel *labelScaleBase;
    QCheckBox *checkBoxShowTiffInfo;
    QCheckBox *checkBoxShowMatInfo;
    QCheckBox *checkBoxAutocleanOut;
    QCheckBox *checkBoxLoadAnydepth;
    QDoubleSpinBox *doubleSpinBoxImageScale;
    QCheckBox *checkBoxAutoProcessFirstFile;
    QPushButton *pushButtonProcessAllFiles;
    QPushButton *pushButtonCreateImage;
    QSpinBox *spinBox_angle;
    QSpinBox *spinBox_screen_x;
    QSpinBox *spinBox_screen_y;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox_width;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox_draw_every_line;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1067, 767);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frameFolder = new QFrame(centralWidget);
        frameFolder->setObjectName(QString::fromUtf8("frameFolder"));
        frameFolder->setGeometry(QRect(0, 0, 921, 80));
        frameFolder->setFrameShape(QFrame::Panel);
        frameFolder->setFrameShadow(QFrame::Raised);
        lineEditOutFolder = new QLineEdit(frameFolder);
        lineEditOutFolder->setObjectName(QString::fromUtf8("lineEditOutFolder"));
        lineEditOutFolder->setGeometry(QRect(170, 40, 741, 21));
        lineEditImageFolder = new QLineEdit(frameFolder);
        lineEditImageFolder->setObjectName(QString::fromUtf8("lineEditImageFolder"));
        lineEditImageFolder->setGeometry(QRect(170, 10, 741, 21));
        pushButtonOpenImageFolder = new QPushButton(frameFolder);
        pushButtonOpenImageFolder->setObjectName(QString::fromUtf8("pushButtonOpenImageFolder"));
        pushButtonOpenImageFolder->setGeometry(QRect(10, 10, 151, 22));
        pushButtonOpenOutFolder = new QPushButton(frameFolder);
        pushButtonOpenOutFolder->setObjectName(QString::fromUtf8("pushButtonOpenOutFolder"));
        pushButtonOpenOutFolder->setGeometry(QRect(10, 40, 151, 22));
        frameFiles = new QFrame(centralWidget);
        frameFiles->setObjectName(QString::fromUtf8("frameFiles"));
        frameFiles->setGeometry(QRect(0, 80, 591, 331));
        frameFiles->setFrameShape(QFrame::Panel);
        frameFiles->setFrameShadow(QFrame::Raised);
        lineEditRegexImageFile = new QLineEdit(frameFiles);
        lineEditRegexImageFile->setObjectName(QString::fromUtf8("lineEditRegexImageFile"));
        lineEditRegexImageFile->setGeometry(QRect(10, 170, 113, 21));
        listWidgetImageFiles = new QListWidget(frameFiles);
        listWidgetImageFiles->setObjectName(QString::fromUtf8("listWidgetImageFiles"));
        listWidgetImageFiles->setGeometry(QRect(10, 10, 571, 151));
        textEditOut = new QTextEdit(frameFiles);
        textEditOut->setObjectName(QString::fromUtf8("textEditOut"));
        textEditOut->setGeometry(QRect(10, 200, 571, 121));
        frameMode = new QFrame(centralWidget);
        frameMode->setObjectName(QString::fromUtf8("frameMode"));
        frameMode->setGeometry(QRect(610, 80, 161, 441));
        frameMode->setFrameShape(QFrame::Panel);
        frameMode->setFrameShadow(QFrame::Raised);
        checkBoxShowInput = new QCheckBox(frameMode);
        checkBoxShowInput->setObjectName(QString::fromUtf8("checkBoxShowInput"));
        checkBoxShowInput->setGeometry(QRect(10, 0, 141, 25));
        checkBoxShowInput->setChecked(false);
        labelScaleBase = new QLabel(frameMode);
        labelScaleBase->setObjectName(QString::fromUtf8("labelScaleBase"));
        labelScaleBase->setGeometry(QRect(10, 80, 61, 25));
        checkBoxShowTiffInfo = new QCheckBox(frameMode);
        checkBoxShowTiffInfo->setObjectName(QString::fromUtf8("checkBoxShowTiffInfo"));
        checkBoxShowTiffInfo->setGeometry(QRect(10, 20, 141, 25));
        checkBoxShowTiffInfo->setChecked(true);
        checkBoxShowMatInfo = new QCheckBox(frameMode);
        checkBoxShowMatInfo->setObjectName(QString::fromUtf8("checkBoxShowMatInfo"));
        checkBoxShowMatInfo->setGeometry(QRect(10, 40, 141, 25));
        checkBoxAutocleanOut = new QCheckBox(frameMode);
        checkBoxAutocleanOut->setObjectName(QString::fromUtf8("checkBoxAutocleanOut"));
        checkBoxAutocleanOut->setGeometry(QRect(10, 360, 141, 25));
        checkBoxAutocleanOut->setChecked(true);
        checkBoxLoadAnydepth = new QCheckBox(frameMode);
        checkBoxLoadAnydepth->setObjectName(QString::fromUtf8("checkBoxLoadAnydepth"));
        checkBoxLoadAnydepth->setGeometry(QRect(10, 60, 141, 20));
        checkBoxLoadAnydepth->setChecked(false);
        doubleSpinBoxImageScale = new QDoubleSpinBox(frameMode);
        doubleSpinBoxImageScale->setObjectName(QString::fromUtf8("doubleSpinBoxImageScale"));
        doubleSpinBoxImageScale->setGeometry(QRect(50, 80, 61, 22));
        doubleSpinBoxImageScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxImageScale->setDecimals(0);
        doubleSpinBoxImageScale->setMinimum(1.000000000000000);
        doubleSpinBoxImageScale->setMaximum(8.000000000000000);
        doubleSpinBoxImageScale->setValue(2.000000000000000);
        checkBoxAutoProcessFirstFile = new QCheckBox(frameMode);
        checkBoxAutoProcessFirstFile->setObjectName(QString::fromUtf8("checkBoxAutoProcessFirstFile"));
        checkBoxAutoProcessFirstFile->setGeometry(QRect(10, 330, 131, 20));
        pushButtonProcessAllFiles = new QPushButton(frameMode);
        pushButtonProcessAllFiles->setObjectName(QString::fromUtf8("pushButtonProcessAllFiles"));
        pushButtonProcessAllFiles->setGeometry(QRect(10, 400, 131, 22));
        pushButtonCreateImage = new QPushButton(frameMode);
        pushButtonCreateImage->setObjectName(QString::fromUtf8("pushButtonCreateImage"));
        pushButtonCreateImage->setGeometry(QRect(30, 300, 80, 24));
        spinBox_angle = new QSpinBox(frameMode);
        spinBox_angle->setObjectName(QString::fromUtf8("spinBox_angle"));
        spinBox_angle->setGeometry(QRect(90, 190, 42, 25));
        spinBox_angle->setMinimum(-89);
        spinBox_angle->setMaximum(90);
        spinBox_angle->setValue(0);
        spinBox_screen_x = new QSpinBox(frameMode);
        spinBox_screen_x->setObjectName(QString::fromUtf8("spinBox_screen_x"));
        spinBox_screen_x->setGeometry(QRect(90, 110, 42, 25));
        spinBox_screen_x->setMaximum(4096);
        spinBox_screen_x->setValue(500);
        spinBox_screen_y = new QSpinBox(frameMode);
        spinBox_screen_y->setObjectName(QString::fromUtf8("spinBox_screen_y"));
        spinBox_screen_y->setGeometry(QRect(90, 150, 42, 25));
        spinBox_screen_y->setMaximum(4096);
        spinBox_screen_y->setValue(500);
        label = new QLabel(frameMode);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 110, 49, 16));
        label_2 = new QLabel(frameMode);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 150, 49, 16));
        spinBox_width = new QSpinBox(frameMode);
        spinBox_width->setObjectName(QString::fromUtf8("spinBox_width"));
        spinBox_width->setGeometry(QRect(90, 230, 42, 25));
        spinBox_width->setMaximum(48);
        spinBox_width->setSingleStep(1);
        spinBox_width->setValue(5);
        spinBox_width->setDisplayIntegerBase(10);
        label_3 = new QLabel(frameMode);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 190, 41, 16));
        label_4 = new QLabel(frameMode);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 230, 41, 16));
        spinBox_draw_every_line = new QSpinBox(frameMode);
        spinBox_draw_every_line->setObjectName(QString::fromUtf8("spinBox_draw_every_line"));
        spinBox_draw_every_line->setGeometry(QRect(90, 270, 42, 25));
        spinBox_draw_every_line->setMinimum(2);
        spinBox_draw_every_line->setMaximum(1000);
        spinBox_draw_every_line->setSingleStep(1);
        spinBox_draw_every_line->setValue(50);
        spinBox_draw_every_line->setDisplayIntegerBase(10);
        label_5 = new QLabel(frameMode);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 250, 101, 51));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1067, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonOpenImageFolder->setText(QCoreApplication::translate("MainWindow", "Open Image Folder", nullptr));
        pushButtonOpenOutFolder->setText(QCoreApplication::translate("MainWindow", "Open Out Folder", nullptr));
        lineEditRegexImageFile->setText(QCoreApplication::translate("MainWindow", ".+.tif+", nullptr));
        checkBoxShowInput->setText(QCoreApplication::translate("MainWindow", "Show input", nullptr));
        labelScaleBase->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        checkBoxShowTiffInfo->setText(QCoreApplication::translate("MainWindow", "Show Tiff Info", nullptr));
        checkBoxShowMatInfo->setText(QCoreApplication::translate("MainWindow", "Show Mat Info", nullptr));
        checkBoxAutocleanOut->setText(QCoreApplication::translate("MainWindow", "Auto clean output text", nullptr));
        checkBoxLoadAnydepth->setText(QCoreApplication::translate("MainWindow", "Load Anydepth", nullptr));
        doubleSpinBoxImageScale->setPrefix(QCoreApplication::translate("MainWindow", "1 : ", nullptr));
        checkBoxAutoProcessFirstFile->setText(QCoreApplication::translate("MainWindow", "Auto Process First File", nullptr));
        pushButtonProcessAllFiles->setText(QCoreApplication::translate("MainWindow", "Process all files", nullptr));
        pushButtonCreateImage->setText(QCoreApplication::translate("MainWindow", "Tw\303\263rz obraz", nullptr));
#if QT_CONFIG(whatsthis)
        spinBox_screen_x->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>X resoloution</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        spinBox_screen_y->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>screen y resolution</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("MainWindow", "screen X:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "screen Y:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Angle:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Width:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Draw line every :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

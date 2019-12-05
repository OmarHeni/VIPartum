/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_quant;
    QLineEdit *lineEdit_dat;
    QPushButton *pb_ajouter;
    QLabel *label_pic;
    QLabel *label_pic_2;
    QLabel *label_pic_3;
    QPushButton *pb_quitter;
    QLabel *label_8;
    QLineEdit *lineEdit_prix;
    QLabel *label_prix;
    QLabel *label_medicine;
    QWidget *tab_2;
    QTableView *tabfinance;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLabel *label_5;
    QLineEdit *recherche1;
    QPushButton *pb_supprimer;
    QWidget *tab_33;
    QTabWidget *tabWidget_4;
    QWidget *tab_34;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *lineEdit_id_r;
    QLineEdit *lineEdit_dat_r;
    QLineEdit *lineEdit_prix_r;
    QPushButton *pb_ajouter_9;
    QLabel *label_37;
    QLineEdit *lineEdit_nombre_r;
    QPushButton *pb_quitter_2;
    QLabel *label_idm;
    QLabel *label_date;
    QLabel *label_montant;
    QLabel *label_quant;
    QLabel *label_materiel;
    QWidget *tab_35;
    QLineEdit *recherche1_2;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QTableView *tabfinance_r;
    QPushButton *pb_supprimer_9;
    QComboBox *comboBox_2;
    QWidget *tab_5;
    QTabWidget *tabWidget_3;
    QWidget *tab_11;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_id_v;
    QLineEdit *lineEdit_nom_v;
    QLineEdit *lineEdit_prenom;
    QPushButton *pb_ajouter_3;
    QPushButton *pb_quitter_3;
    QLabel *label_13;
    QLineEdit *lineEdit_visi;
    QLabel *label_id_med;
    QLabel *label_nom;
    QLabel *label_prenom;
    QLabel *label_visite;
    QLabel *visite;
    QWidget *tab_12;
    QTableView *tabfinance_3;
    QLineEdit *recherche1_3;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QPushButton *pb_supprimer_3;
    QComboBox *comboBox_3;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(675, 511);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color:#f0f0f0;\n"
"}\n"
"QCheckBox {\n"
"	padding:2px;\n"
"}\n"
"QCheckBox:hover {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	padding-left: 1px;\n"
"	padding-right: 1px;\n"
"	padding-bottom: 1px;\n"
"	padding-top: 1px;\n"
"	border-color: rgb(255,150,60);\n"
"	background-color:qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(190, 90, 50, 50), stop:1 rgba(250, 130, 40, 50));\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(246, 134, 86);\n"
"  	background-color:rgb(246, 134, 86)\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color:rgb(246, 134, 86);\n"
"  	background-color:rgb(255,255,255);\n"
"}\n"
"QColorDialog {\n"
"	background-color:#f0f0f0;\n"
"}\n"
"QComboBox {\n"
"	color:rgb(81,72,65);\n"
"	background: #ffffff;\n"
"}\n"
"QComboBox:editable {\n"
"	background: #"
                        "ffffff;\n"
"	color: rgb(81,72,65);\n"
"	selection-color:rgb(81,72,65);\n"
"	selection-background-color: #ffffff;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"	color:rgb(81,72,65);	\n"
"	background: #ffffff;\n"
"	selection-color: #ffffff;\n"
"	selection-background-color: rgb(246, 134, 86);\n"
"}\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"	color:  #1e1d23;	\n"
"	background: #ffffff;\n"
"}\n"
"QDateTimeEdit {\n"
"	color:rgb(81,72,65);\n"
"	background-color: #ffffff;\n"
"}\n"
"QDateEdit {\n"
"	color:rgb(81,72,65);\n"
"	background-color: #ffffff;\n"
"}\n"
"QDialog {\n"
"	background-color:#f0f0f0;\n"
"}\n"
"QDoubleSpinBox {\n"
"	color:rgb(81,72,65);\n"
"	background-color: #ffffff;\n"
"}\n"
"QFontComboBox {\n"
"	color:rgb(81,72,65);\n"
"	background-color: #ffffff;\n"
"}\n"
"QLabel {\n"
"	color:rgb(17,17,17);\n"
"}\n"
"QLineEdit {\n"
"	background-color:rgb(255,255,255);\n"
"	selection-background-color:rgb(236,116,64);\n"
"	color:rgb(17,17,17);\n"
"}\n"
"QMenuBar {\n"
"	color:rgb(223,219,210);\n"
""
                        "	background-color:rgb(65,64,59);\n"
"}\n"
"QMenuBar::item {\n"
"	padding-top:4px;\n"
"	padding-left:4px;\n"
"	padding-right:4px;\n"
"	color:rgb(223,219,210);\n"
"	background-color:rgb(65,64,59);\n"
"}\n"
"QMenuBar::item:selected {\n"
"	color:rgb(255,255,255);\n"
"	padding-top:2px;\n"
"	padding-left:2px;\n"
"	padding-right:2px;\n"
"	border-top-width:2px;\n"
"	border-left-width:2px;\n"
"	border-right-width:2px;\n"
"	border-top-right-radius:4px;\n"
"	border-top-left-radius:4px;\n"
"	border-style:solid;\n"
"	background-color:rgb(65,64,59);\n"
"	border-top-color: rgb(47,47,44);\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(90, 87, 78, 255), stop:1 rgba(47,47,44, 255));\n"
"	border-left-color:  qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(90, 87, 78, 255), stop:1 rgba(47,47,44, 255));\n"
"}\n"
"QMenu {\n"
"	color:rgb(223,219,210);\n"
"	background-color:rgb(65,64,59);\n"
"}\n"
"QMenu::item {\n"
"	color:rgb(223,219,210);\n"
"	padding-left:20px;\n"
"	padding"
                        "-top:4px;\n"
"	padding-bottom:4px;\n"
"	padding-right:10px;\n"
"}\n"
"QMenu::item:selected {\n"
"	color:rgb(255,255,255);\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(225, 108, 54, 255), stop:1 rgba(246, 134, 86, 255));\n"
"	border-style:solid;\n"
"	border-width:3px;\n"
"	padding-left:17px;\n"
"	padding-top:4px;\n"
"	padding-bottom:4px;\n"
"	padding-right:7px;\n"
"	border-bottom-color:qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(175,85,48,255), stop:1 rgba(236,114,67, 255));\n"
"	border-top-color:qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, 255));\n"
"	border-right-color:qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, 255));\n"
"	border-left-color:qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.5, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, 255));\n"
"}\n"
"QPlainTextEdit {\n"
"	border-width: 1px;\n"
"	bor"
                        "der-style: solid;\n"
"	border-color:transparent;\n"
"	color:rgb(17,17,17);\n"
"	selection-background-color:rgb(236,116,64);\n"
"}\n"
"QProgressBar {\n"
"	text-align: center;\n"
"	color: rgb(0, 0, 0);\n"
"	border-width: 1px; \n"
"	border-radius: 10px;\n"
"	border-style: inset;\n"
"	border-color: rgb(150,150,150);\n"
"	background-color:rgb(221,221,219);\n"
"}\n"
"QProgressBar::chunk:horizontal {\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(225, 108, 54, 255), stop:1 rgba(246, 134, 86, 255));\n"
"	border-style: solid;\n"
"	border-radius:8px;\n"
"	border-width:1px;\n"
"	border-bottom-color:qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(175,85,48,255), stop:1 rgba(236,114,67, 255));\n"
"	border-top-color:qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, 255));\n"
"	border-right-color:qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, "
                        "255));\n"
"	border-left-color:qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.5, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, 255));\n"
"}\n"
"QPushButton{\n"
"	color:rgb(17,17,17);\n"
"	border-width: 1px;\n"
"	border-radius: 6px;\n"
"	border-bottom-color: rgb(150,150,150);\n"
"	border-right-color: rgb(165,165,165);\n"
"	border-left-color: rgb(165,165,165);\n"
"	border-top-color: rgb(180,180,180);\n"
"	border-style: solid;\n"
"	padding: 4px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(220, 220, 220, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"QPushButton:hover{\n"
"	color:rgb(17,17,17);\n"
"	border-width: 1px;\n"
"	border-radius:6px;\n"
"	border-top-color: rgb(255,150,60);\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 255));\n"
"	border-left-color:  qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 255));"
                        "\n"
"	border-bottom-color: rgb(200,70,20);\n"
"	border-style: solid;\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(220, 220, 220, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"QPushButton:default{\n"
"	color:rgb(17,17,17);\n"
"	border-width: 1px;\n"
"	border-radius:6px;\n"
"	border-top-color: rgb(255,150,60);\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 255));\n"
"	border-left-color:  qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 255));\n"
"	border-bottom-color: rgb(200,70,20);\n"
"	border-style: solid;\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(220, 220, 220, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"QPushButton:pressed{\n"
"	color:rgb(17,17,17);\n"
"	border-width: 1px;\n"
"	border-radius: 6px;\n"
"	border-width: 1px;\n"
"	"
                        "border-top-color: rgba(255,150,60,200);\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 200));\n"
"	border-left-color:  qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 200));\n"
"	border-bottom-color: rgba(200,70,20,200);\n"
"	border-style: solid;\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(220, 220, 220, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"QPushButton:disabled{\n"
"	color:rgb(174,167,159);\n"
"	border-width: 1px;\n"
"	border-radius: 6px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(200, 200, 200, 255), stop:1 rgba(230, 230, 230, 255));\n"
"}\n"
"QRadioButton {\n"
"	padding: 1px;\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-col"
                        "or: rgba(246, 134, 86, 255);\n"
"	color: #a9b7c6;\n"
"	background-color:rgba(246, 134, 86, 255);\n"
"}\n"
"QRadioButton::indicator:!checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: rgb(246, 134, 86);\n"
"	color: #a9b7c6;\n"
"	background-color: transparent;\n"
"}\n"
"QScrollArea {\n"
"	color: #FFFFFF;\n"
"	background-color:#f0f0f0;\n"
"}\n"
"QSlider::groove {\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"}\n"
"QSlider::groove:horizontal {\n"
"	height: 5px;\n"
"	background: rgb(246, 134, 86);\n"
"}\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	background: rgb(246, 134, 86);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"	background: rgb(253,253,253);\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"	width: 12px;\n"
"	margin: -5px 0;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
"	background: rgb(253,253,253);\n"
"	bo"
                        "rder-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"	height: 12px;\n"
"	margin: 0 -5px;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
" 	background: white;\n"
"}\n"
"QSlider::add-page:vertical {\n"
"	background: white;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"	background: rgb(246, 134, 86);\n"
"}\n"
"QSlider::sub-page:vertical {\n"
"  	background: rgb(246, 134, 86);\n"
"}\n"
"QStatusBar {\n"
"	color:rgb(81,72,65);\n"
"}\n"
"QSpinBox {\n"
"	color:rgb(81,72,65);\n"
"	background-color: #ffffff;\n"
"}\n"
"QScrollBar:horizontal {\n"
"	max-height: 20px;\n"
"	border: 1px transparent grey;\n"
"	margin: 0px 20px 0px 20px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"	background: rgb(253,253,253);\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"	border-radius: 7px;\n"
"	min-width: 25px;\n"
"}\n"
"QScrollBar::handle:horizontal:hover {\n"
"	background: rgb(253,253,253);\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
""
                        "	border-color: rgb(255,150,60);\n"
"	border-radius: 7px;\n"
"	min-width: 25px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"  	border: 1px solid;\n"
"  	border-color: rgb(207,207,207);\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-right-radius: 7px;\n"
"  	background: rgb(255, 255, 255);\n"
"  	width: 20px;\n"
"  	subcontrol-position: right;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:horizontal:hover {\n"
"  	border: 1px solid;\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-right-radius: 7px;\n"
"  	border-color: rgb(255,150,60);\n"
"  	background: rgb(255, 255, 255);\n"
"  	width: 20px;\n"
"  	subcontrol-position: right;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:horizontal:pressed {\n"
"  	border: 1px solid grey;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-top-right-radius: 7px;\n"
"  	border-bottom-right-radius: 7px;\n"
"  	background: rgb(231,231,231);\n"
"  	w"
                        "idth: 20px;\n"
"  	subcontrol-position: right;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal {\n"
"  	border: 1px solid;\n"
"  	border-color: rgb(207,207,207);\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	background: rgb(255, 255, 255);\n"
"  	width: 20px;\n"
"  	subcontrol-position: left;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal:hover {\n"
"  	border: 1px solid;\n"
"  	border-color: rgb(255,150,60);\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	background: rgb(255, 255, 255);\n"
"  	width: 20px;\n"
"  	subcontrol-position: left;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal:pressed {\n"
"  	border: 1px solid grey;\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	background: rgb(231,231,231);\n"
"  	widt"
                        "h: 20px;\n"
"  	subcontrol-position: left;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::left-arrow:horizontal {\n"
"  	border: 1px transparent grey;\n"
"  	border-top-left-radius: 3px;\n"
"  	border-bottom-left-radius: 3px;\n"
"  	width: 6px;\n"
"  	height: 6px;\n"
"  	background: rgb(230,230,230);\n"
"}\n"
"QScrollBar::right-arrow:horizontal {\n"
"	border: 1px transparent grey;\n"
"	border-top-right-radius: 3px;\n"
"	border-bottom-right-radius: 3px;\n"
"  	width: 6px;\n"
"  	height: 6px;\n"
" 	background: rgb(230,230,230);\n"
"}\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
" 	background: none;\n"
"} \n"
"QScrollBar:vertical {\n"
"	max-width: 20px;\n"
"	border: 1px transparent grey;\n"
"	margin: 20px 0px 20px 0px;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"	border: 1px solid;\n"
"	border-color: rgb(207,207,207);\n"
"	border-bottom-right-radius: 7px;\n"
"	border-bottom-left-radius: 7px;\n"
"	border-top-left-radius: 7px;\n"
"	background: rgb(255, 255, 255);\n"
"  	heigh"
                        "t: 20px;\n"
"  	subcontrol-position: bottom;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:hover {\n"
"  	border: 1px solid;\n"
"  	border-color: rgb(255,150,60);\n"
"  	border-bottom-right-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	background: rgb(255, 255, 255);\n"
"  	height: 20px;\n"
"  	subcontrol-position: bottom;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:pressed {\n"
"  	border: 1px solid grey;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	border-bottom-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	background: rgb(231,231,231);\n"
"  	height: 20px;\n"
"  	subcontrol-position: bottom;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"  	border: 1px solid;\n"
"  	border-color: rgb(207,207,207);\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	background: rgb(255, 255, 255);\n"
"  	"
                        "height: 20px;\n"
"  	subcontrol-position: top;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover {\n"
"  	border: 1px solid;\n"
"  	border-color: rgb(255,150,60);\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"	background: rgb(255, 255, 255);\n"
"  	height: 20px;\n"
"  	subcontrol-position: top;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:pressed {\n"
"  	border: 1px solid grey;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-top-right-radius: 7px;\n"
"  	background: rgb(231,231,231);\n"
" 	height: 20px;\n"
"  	subcontrol-position: top;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"	background: rgb(253,253,253);\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"	border-radius: 7px;\n"
"	min-height: 25px;\n"
"}\n"
"QScrollBar::handle:vertical:hover {\n"
"	background: rgb(253,253,253);\n"
"	border-style: solid;\n"
""
                        "	border-width: 1px;\n"
"	border-color: rgb(255,150,60);\n"
"	border-radius: 7px;\n"
"	min-height: 25px;\n"
"}\n"
"QScrollBar::up-arrow:vertical {\n"
"	border: 1px transparent grey;\n"
"  	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"  	width: 6px;\n"
"  	height: 6px;\n"
"  	background: rgb(230,230,230);\n"
"}\n"
"QScrollBar::down-arrow:vertical {\n"
"  	border: 1px transparent grey;\n"
"  	border-bottom-left-radius: 3px;\n"
"  	border-bottom-right-radius: 3px;\n"
"  	width: 6px;\n"
"  	height: 6px;\n"
"  	background: rgb(230,230,230);\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"  	background: none;\n"
"}\n"
"QTabWidget {\n"
"	color:rgb(0,0,0);\n"
"	background-color:rgb(247,246,246);\n"
"}\n"
"QTabWidget::pane {\n"
"	border-color: rgb(180,180,180);\n"
"	background-color:rgb(247,246,246);\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"  	border-radius: 6px;\n"
"}\n"
"QTabBar::tab {\n"
"	padding-left:4px;\n"
"	padding-right:4px;\n"
"	padding-bottom:2p"
                        "x;\n"
"	padding-top:2px;\n"
"	color:rgb(81,72,65);\n"
"  	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(221,218,217,255), stop:1 rgba(240,239,238,255));\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"  	border-top-right-radius:4px;\n"
"	border-top-left-radius:4px;\n"
"	border-top-color: rgb(180,180,180);\n"
"	border-left-color: rgb(180,180,180);\n"
"	border-right-color: rgb(180,180,180);\n"
"	border-bottom-color: transparent;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
"  	background-color:rgb(247,246,246);\n"
"  	margin-left: 0px;\n"
"  	margin-right: 1px;\n"
"}\n"
"QTabBar::tab:!selected {\n"
"	margin-top: 1px;\n"
"	margin-right: 1px;\n"
"}\n"
"QTextEdit {\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color:transparent;\n"
"	color:rgb(17,17,17);\n"
"	selection-background-color:rgb(236,116,64);\n"
"}\n"
"QTimeEdit {\n"
"	color:rgb(81,72,65);\n"
"	background-color: #ffffff;\n"
"}\n"
"QToolBox {\n"
"	color:rg"
                        "b(81,72,65);\n"
"	background-color: #ffffff;\n"
"}\n"
"QToolBox::tab {\n"
"	color:rgb(81,72,65);\n"
"	background-color: #ffffff;\n"
"}\n"
"QToolBox::tab:selected {\n"
"	color:rgb(81,72,65);\n"
"	background-color: #ffffff;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(50, 20, 581, 401));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget = new QTabWidget(tab_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 561, 351));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 50, 61, 16));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 110, 47, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 170, 51, 20));
        lineEdit_id = new QLineEdit(tab);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(180, 50, 113, 20));
        lineEdit_quant = new QLineEdit(tab);
        lineEdit_quant->setObjectName(QString::fromUtf8("lineEdit_quant"));
        lineEdit_quant->setGeometry(QRect(180, 110, 113, 20));
        lineEdit_dat = new QLineEdit(tab);
        lineEdit_dat->setObjectName(QString::fromUtf8("lineEdit_dat"));
        lineEdit_dat->setGeometry(QRect(180, 170, 113, 20));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QString::fromUtf8("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(350, 270, 75, 23));
        label_pic = new QLabel(tab);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(70, 40, 41, 31));
        label_pic_2 = new QLabel(tab);
        label_pic_2->setObjectName(QString::fromUtf8("label_pic_2"));
        label_pic_2->setGeometry(QRect(70, 100, 41, 31));
        label_pic_3 = new QLabel(tab);
        label_pic_3->setObjectName(QString::fromUtf8("label_pic_3"));
        label_pic_3->setGeometry(QRect(70, 160, 41, 31));
        pb_quitter = new QPushButton(tab);
        pb_quitter->setObjectName(QString::fromUtf8("pb_quitter"));
        pb_quitter->setGeometry(QRect(430, 270, 75, 23));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(100, 230, 51, 20));
        lineEdit_prix = new QLineEdit(tab);
        lineEdit_prix->setObjectName(QString::fromUtf8("lineEdit_prix"));
        lineEdit_prix->setGeometry(QRect(180, 230, 113, 20));
        label_prix = new QLabel(tab);
        label_prix->setObjectName(QString::fromUtf8("label_prix"));
        label_prix->setGeometry(QRect(70, 220, 41, 31));
        label_medicine = new QLabel(tab);
        label_medicine->setObjectName(QString::fromUtf8("label_medicine"));
        label_medicine->setGeometry(QRect(360, 40, 181, 191));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabfinance = new QTableView(tab_2);
        tabfinance->setObjectName(QString::fromUtf8("tabfinance"));
        tabfinance->setGeometry(QRect(10, 50, 531, 281));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 20, 73, 22));
        comboBox = new QComboBox(tab_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(230, 20, 73, 22));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 20, 61, 16));
        recherche1 = new QLineEdit(tab_2);
        recherche1->setObjectName(QString::fromUtf8("recherche1"));
        recherche1->setGeometry(QRect(100, 20, 113, 21));
        pb_supprimer = new QPushButton(tab_2);
        pb_supprimer->setObjectName(QString::fromUtf8("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(410, 20, 73, 22));
        tabWidget->addTab(tab_2, QString());
        tabWidget_2->addTab(tab_4, QString());
        tab_33 = new QWidget();
        tab_33->setObjectName(QString::fromUtf8("tab_33"));
        tabWidget_4 = new QTabWidget(tab_33);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 10, 561, 351));
        tab_34 = new QWidget();
        tab_34->setObjectName(QString::fromUtf8("tab_34"));
        label_33 = new QLabel(tab_34);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(90, 30, 61, 16));
        label_34 = new QLabel(tab_34);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(90, 90, 47, 16));
        label_35 = new QLabel(tab_34);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(90, 150, 51, 20));
        lineEdit_id_r = new QLineEdit(tab_34);
        lineEdit_id_r->setObjectName(QString::fromUtf8("lineEdit_id_r"));
        lineEdit_id_r->setGeometry(QRect(200, 30, 113, 20));
        lineEdit_dat_r = new QLineEdit(tab_34);
        lineEdit_dat_r->setObjectName(QString::fromUtf8("lineEdit_dat_r"));
        lineEdit_dat_r->setGeometry(QRect(200, 90, 113, 20));
        lineEdit_prix_r = new QLineEdit(tab_34);
        lineEdit_prix_r->setObjectName(QString::fromUtf8("lineEdit_prix_r"));
        lineEdit_prix_r->setGeometry(QRect(200, 150, 113, 20));
        pb_ajouter_9 = new QPushButton(tab_34);
        pb_ajouter_9->setObjectName(QString::fromUtf8("pb_ajouter_9"));
        pb_ajouter_9->setGeometry(QRect(320, 260, 75, 23));
        label_37 = new QLabel(tab_34);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(90, 210, 51, 20));
        lineEdit_nombre_r = new QLineEdit(tab_34);
        lineEdit_nombre_r->setObjectName(QString::fromUtf8("lineEdit_nombre_r"));
        lineEdit_nombre_r->setGeometry(QRect(200, 210, 113, 20));
        pb_quitter_2 = new QPushButton(tab_34);
        pb_quitter_2->setObjectName(QString::fromUtf8("pb_quitter_2"));
        pb_quitter_2->setGeometry(QRect(400, 260, 75, 23));
        label_idm = new QLabel(tab_34);
        label_idm->setObjectName(QString::fromUtf8("label_idm"));
        label_idm->setGeometry(QRect(60, 20, 41, 31));
        label_date = new QLabel(tab_34);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(50, 80, 41, 31));
        label_montant = new QLabel(tab_34);
        label_montant->setObjectName(QString::fromUtf8("label_montant"));
        label_montant->setGeometry(QRect(50, 140, 41, 31));
        label_quant = new QLabel(tab_34);
        label_quant->setObjectName(QString::fromUtf8("label_quant"));
        label_quant->setGeometry(QRect(50, 200, 41, 31));
        label_materiel = new QLabel(tab_34);
        label_materiel->setObjectName(QString::fromUtf8("label_materiel"));
        label_materiel->setGeometry(QRect(360, 30, 181, 191));
        tabWidget_4->addTab(tab_34, QString());
        tab_35 = new QWidget();
        tab_35->setObjectName(QString::fromUtf8("tab_35"));
        recherche1_2 = new QLineEdit(tab_35);
        recherche1_2->setObjectName(QString::fromUtf8("recherche1_2"));
        recherche1_2->setGeometry(QRect(100, 20, 113, 21));
        label_6 = new QLabel(tab_35);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 20, 61, 16));
        pushButton_3 = new QPushButton(tab_35);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 20, 73, 22));
        tabfinance_r = new QTableView(tab_35);
        tabfinance_r->setObjectName(QString::fromUtf8("tabfinance_r"));
        tabfinance_r->setGeometry(QRect(10, 50, 531, 281));
        pb_supprimer_9 = new QPushButton(tab_35);
        pb_supprimer_9->setObjectName(QString::fromUtf8("pb_supprimer_9"));
        pb_supprimer_9->setGeometry(QRect(410, 20, 73, 22));
        comboBox_2 = new QComboBox(tab_35);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(230, 20, 73, 22));
        tabWidget_4->addTab(tab_35, QString());
        tabWidget_2->addTab(tab_33, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget_3 = new QTabWidget(tab_5);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 10, 561, 351));
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        label_9 = new QLabel(tab_11);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 30, 61, 16));
        label_10 = new QLabel(tab_11);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 90, 47, 16));
        label_11 = new QLabel(tab_11);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(60, 150, 51, 20));
        lineEdit_id_v = new QLineEdit(tab_11);
        lineEdit_id_v->setObjectName(QString::fromUtf8("lineEdit_id_v"));
        lineEdit_id_v->setGeometry(QRect(170, 30, 113, 20));
        lineEdit_nom_v = new QLineEdit(tab_11);
        lineEdit_nom_v->setObjectName(QString::fromUtf8("lineEdit_nom_v"));
        lineEdit_nom_v->setGeometry(QRect(170, 90, 113, 20));
        lineEdit_prenom = new QLineEdit(tab_11);
        lineEdit_prenom->setObjectName(QString::fromUtf8("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(170, 150, 113, 20));
        pb_ajouter_3 = new QPushButton(tab_11);
        pb_ajouter_3->setObjectName(QString::fromUtf8("pb_ajouter_3"));
        pb_ajouter_3->setGeometry(QRect(310, 260, 75, 23));
        pb_quitter_3 = new QPushButton(tab_11);
        pb_quitter_3->setObjectName(QString::fromUtf8("pb_quitter_3"));
        pb_quitter_3->setGeometry(QRect(390, 260, 75, 23));
        label_13 = new QLabel(tab_11);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 210, 51, 20));
        lineEdit_visi = new QLineEdit(tab_11);
        lineEdit_visi->setObjectName(QString::fromUtf8("lineEdit_visi"));
        lineEdit_visi->setGeometry(QRect(170, 210, 113, 20));
        label_id_med = new QLabel(tab_11);
        label_id_med->setObjectName(QString::fromUtf8("label_id_med"));
        label_id_med->setGeometry(QRect(30, 15, 51, 41));
        label_nom = new QLabel(tab_11);
        label_nom->setObjectName(QString::fromUtf8("label_nom"));
        label_nom->setGeometry(QRect(30, 70, 51, 41));
        label_prenom = new QLabel(tab_11);
        label_prenom->setObjectName(QString::fromUtf8("label_prenom"));
        label_prenom->setGeometry(QRect(30, 140, 51, 41));
        label_visite = new QLabel(tab_11);
        label_visite->setObjectName(QString::fromUtf8("label_visite"));
        label_visite->setGeometry(QRect(30, 200, 51, 41));
        visite = new QLabel(tab_11);
        visite->setObjectName(QString::fromUtf8("visite"));
        visite->setGeometry(QRect(340, 30, 181, 191));
        tabWidget_3->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        tabfinance_3 = new QTableView(tab_12);
        tabfinance_3->setObjectName(QString::fromUtf8("tabfinance_3"));
        tabfinance_3->setGeometry(QRect(10, 50, 541, 281));
        recherche1_3 = new QLineEdit(tab_12);
        recherche1_3->setObjectName(QString::fromUtf8("recherche1_3"));
        recherche1_3->setGeometry(QRect(100, 20, 113, 21));
        label_7 = new QLabel(tab_12);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 20, 61, 16));
        pushButton_5 = new QPushButton(tab_12);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(320, 20, 73, 22));
        pb_supprimer_3 = new QPushButton(tab_12);
        pb_supprimer_3->setObjectName(QString::fromUtf8("pb_supprimer_3"));
        pb_supprimer_3->setGeometry(QRect(410, 20, 73, 22));
        comboBox_3 = new QComboBox(tab_12);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(230, 20, 73, 22));
        tabWidget_3->addTab(tab_12, QString());
        tabWidget_2->addTab(tab_5, QString());
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(510, 420, 121, 21));
        QFont font;
        font.setPointSize(6);
        pushButton_4->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 675, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des Finances", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Identifiant", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        pb_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_pic->setText(QString());
        label_pic_2->setText(QString());
        label_pic_3->setText(QString());
        pb_quitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "prix", nullptr));
        label_prix->setText(QString());
        label_medicine->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "id", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "quant", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "dat", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "prix", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Identifiant", nullptr));
        pb_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Afficher ", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Gestion des M\303\251dicaments", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Identifiant", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Montant", nullptr));
        pb_ajouter_9->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251", nullptr));
        pb_quitter_2->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        label_idm->setText(QString());
        label_date->setText(QString());
        label_montant->setText(QString());
        label_quant->setText(QString());
        label_materiel->setText(QString());
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_34), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Identifiant", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pb_supprimer_9->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "id", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "dat", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "prix", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "nombre", nullptr));

        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_35), QCoreApplication::translate("MainWindow", "Afficher ", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_33), QCoreApplication::translate("MainWindow", "Gestion des materiels", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Identifiant", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        lineEdit_id_v->setText(QString());
        pb_ajouter_3->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pb_quitter_3->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "n\302\260 visite", nullptr));
        label_id_med->setText(QString());
        label_nom->setText(QString());
        label_prenom->setText(QString());
        label_visite->setText(QString());
        visite->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Identifiant", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        pb_supprimer_3->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "id", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "n\302\260 visite", nullptr));

        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QCoreApplication::translate("MainWindow", "Afficher ", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "visites m\303\251dicales", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "retour au menu principal", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

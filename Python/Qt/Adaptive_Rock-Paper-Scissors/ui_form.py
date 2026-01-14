# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'form.ui'
##
## Created by: Qt User Interface Compiler version 6.10.1
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QBrush, QColor, QConicalGradient, QCursor,
    QFont, QFontDatabase, QGradient, QIcon,
    QImage, QKeySequence, QLinearGradient, QPainter,
    QPalette, QPixmap, QRadialGradient, QTransform)
from PySide6.QtWidgets import (QApplication, QFrame, QHBoxLayout, QLCDNumber,
    QLabel, QMainWindow, QPushButton, QSizePolicy,
    QSpacerItem, QVBoxLayout, QWidget)

class Ui_mainwindow(object):
    def setupUi(self, mainwindow):
        if not mainwindow.objectName():
            mainwindow.setObjectName(u"mainwindow")
        mainwindow.resize(550, 600)
        mainwindow.setMinimumSize(QSize(550, 600))
        mainwindow.setMaximumSize(QSize(550, 600))
        mainwindow.setStyleSheet(u"background-color: rgb(223, 255, 253);\n"
"")
        self.centralwidget = QWidget(mainwindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.verticalLayout = QVBoxLayout(self.centralwidget)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.horizontalLayout_4 = QHBoxLayout()
        self.horizontalLayout_4.setObjectName(u"horizontalLayout_4")
        self.horizontalSpacer_9 = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_4.addItem(self.horizontalSpacer_9)

        self.label_4 = QLabel(self.centralwidget)
        self.label_4.setObjectName(u"label_4")
        self.label_4.setStyleSheet(u"color: BLACK;\n"
"background: transparent;\n"
"font: 900 26pt \"Segoe UI\";")

        self.horizontalLayout_4.addWidget(self.label_4)

        self.horizontalSpacer_12 = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_4.addItem(self.horizontalSpacer_12)


        self.verticalLayout.addLayout(self.horizontalLayout_4)

        self.horizontalLayout_5 = QHBoxLayout()
        self.horizontalLayout_5.setObjectName(u"horizontalLayout_5")
        self.horizontalSpacer_13 = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_5.addItem(self.horizontalSpacer_13)

        self.label_5 = QLabel(self.centralwidget)
        self.label_5.setObjectName(u"label_5")
        self.label_5.setStyleSheet(u"color: BLACK;\n"
"background: transparent;\n"
"font: 900 26pt \"Segoe UI\";")

        self.horizontalLayout_5.addWidget(self.label_5)

        self.horizontalSpacer_14 = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_5.addItem(self.horizontalSpacer_14)


        self.verticalLayout.addLayout(self.horizontalLayout_5)

        self.verticalSpacer = QSpacerItem(20, 124, QSizePolicy.Policy.Minimum, QSizePolicy.Policy.Expanding)

        self.verticalLayout.addItem(self.verticalSpacer)

        self.horizontalLayout_3 = QHBoxLayout()
        self.horizontalLayout_3.setObjectName(u"horizontalLayout_3")
        self.label = QLabel(self.centralwidget)
        self.label.setObjectName(u"label")
        self.label.setMinimumSize(QSize(81, 35))
        self.label.setMaximumSize(QSize(81, 35))
        self.label.setStyleSheet(u"font: 12pt \"Segoe UI\";\n"
"color: black;\n"
"background: transparent")

        self.horizontalLayout_3.addWidget(self.label)

        self.P_Wins_Num = QLCDNumber(self.centralwidget)
        self.P_Wins_Num.setObjectName(u"P_Wins_Num")
        self.P_Wins_Num.setStyleSheet(u"color: RED;")

        self.horizontalLayout_3.addWidget(self.P_Wins_Num)

        self.horizontalSpacer_10 = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_3.addItem(self.horizontalSpacer_10)

        self.label_2 = QLabel(self.centralwidget)
        self.label_2.setObjectName(u"label_2")
        self.label_2.setMinimumSize(QSize(81, 35))
        self.label_2.setMaximumSize(QSize(81, 35))
        self.label_2.setStyleSheet(u"font: 12pt \"Segoe UI\";\n"
"color: black;\n"
"background: transparent")

        self.horizontalLayout_3.addWidget(self.label_2)

        self.C_Wins_Num = QLCDNumber(self.centralwidget)
        self.C_Wins_Num.setObjectName(u"C_Wins_Num")
        self.C_Wins_Num.setStyleSheet(u"color: RED;")

        self.horizontalLayout_3.addWidget(self.C_Wins_Num)

        self.horizontalSpacer_11 = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_3.addItem(self.horizontalSpacer_11)

        self.label_3 = QLabel(self.centralwidget)
        self.label_3.setObjectName(u"label_3")
        self.label_3.setMinimumSize(QSize(51, 35))
        self.label_3.setMaximumSize(QSize(51, 35))
        self.label_3.setStyleSheet(u"font: 12pt \"Segoe UI\";\n"
"color: black;\n"
"background: transparent")

        self.horizontalLayout_3.addWidget(self.label_3)

        self.Dr_Num = QLCDNumber(self.centralwidget)
        self.Dr_Num.setObjectName(u"Dr_Num")
        self.Dr_Num.setStyleSheet(u"color: RED;")

        self.horizontalLayout_3.addWidget(self.Dr_Num)


        self.verticalLayout.addLayout(self.horizontalLayout_3)

        self.cm_Label = QLabel(self.centralwidget)
        self.cm_Label.setObjectName(u"cm_Label")
        self.cm_Label.setMinimumSize(QSize(530, 35))
        self.cm_Label.setMaximumSize(QSize(530, 35))
        self.cm_Label.setStyleSheet(u"font: 12pt \"Segoe UI\";\n"
"color: black;\n"
"background: transparent")

        self.verticalLayout.addWidget(self.cm_Label)

        self.horizontalLayout_2 = QHBoxLayout()
        self.horizontalLayout_2.setObjectName(u"horizontalLayout_2")
        self.horizontalSpacer_5 = QSpacerItem(33, 17, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_2.addItem(self.horizontalSpacer_5)

        self.frame_4 = QFrame(self.centralwidget)
        self.frame_4.setObjectName(u"frame_4")
        self.frame_4.setMinimumSize(QSize(100, 100))
        self.frame_4.setStyleSheet(u"border: none;\n"
"background: transparent;")
        self.frame_4.setFrameShape(QFrame.Shape.StyledPanel)
        self.frame_4.setFrameShadow(QFrame.Shadow.Raised)
        self.rock_Button_2 = QPushButton(self.frame_4)
        self.rock_Button_2.setObjectName(u"rock_Button_2")
        self.rock_Button_2.setGeometry(QRect(0, 0, 100, 100))
        self.rock_Button_2.setMinimumSize(QSize(100, 100))
        self.rock_Button_2.setMaximumSize(QSize(100, 100))
        self.rock_Button_2.setStyleSheet(u"QPushButton\n"
"{\n"
"	border: none;\n"
"    background-color: transparent;\n"
"    qproperty-icon: url(\":/resources/rock.png\");\n"
"    qproperty-iconSize: 100px 100px;\n"
"}\n"
"")

        self.horizontalLayout_2.addWidget(self.frame_4)

        self.horizontalSpacer_6 = QSpacerItem(34, 17, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_2.addItem(self.horizontalSpacer_6)

        self.frame_5 = QFrame(self.centralwidget)
        self.frame_5.setObjectName(u"frame_5")
        self.frame_5.setMinimumSize(QSize(100, 100))
        self.frame_5.setStyleSheet(u"border: none;\n"
"background: transparent;")
        self.frame_5.setFrameShape(QFrame.Shape.StyledPanel)
        self.frame_5.setFrameShadow(QFrame.Shadow.Raised)
        self.paper_Button_2 = QPushButton(self.frame_5)
        self.paper_Button_2.setObjectName(u"paper_Button_2")
        self.paper_Button_2.setGeometry(QRect(0, 0, 100, 100))
        self.paper_Button_2.setMinimumSize(QSize(100, 100))
        self.paper_Button_2.setMaximumSize(QSize(100, 100))
        self.paper_Button_2.setStyleSheet(u"color: none;\n"
"background-color: none;\n"
"border: none;\n"
"background-image: url(\":/resources/paper.png\");\n"
"background-position: center;")

        self.horizontalLayout_2.addWidget(self.frame_5)

        self.horizontalSpacer_7 = QSpacerItem(33, 17, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_2.addItem(self.horizontalSpacer_7)

        self.frame_6 = QFrame(self.centralwidget)
        self.frame_6.setObjectName(u"frame_6")
        self.frame_6.setMinimumSize(QSize(100, 100))
        self.frame_6.setStyleSheet(u"border: none;\n"
"background: transparent;")
        self.frame_6.setFrameShape(QFrame.Shape.StyledPanel)
        self.frame_6.setFrameShadow(QFrame.Shadow.Raised)
        self.scissors_Button_2 = QPushButton(self.frame_6)
        self.scissors_Button_2.setObjectName(u"scissors_Button_2")
        self.scissors_Button_2.setGeometry(QRect(0, 0, 100, 100))
        self.scissors_Button_2.setMinimumSize(QSize(100, 100))
        self.scissors_Button_2.setMaximumSize(QSize(100, 100))
        self.scissors_Button_2.setStyleSheet(u"color: none;\n"
"background-color: none;\n"
"border: none;\n"
"background-image: url(\":/resources/scissors.png\");\n"
"background-position: center;")

        self.horizontalLayout_2.addWidget(self.frame_6)

        self.horizontalSpacer_8 = QSpacerItem(34, 17, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_2.addItem(self.horizontalSpacer_8)


        self.verticalLayout.addLayout(self.horizontalLayout_2)

        self.in_Label = QLabel(self.centralwidget)
        self.in_Label.setObjectName(u"in_Label")
        self.in_Label.setMinimumSize(QSize(530, 35))
        self.in_Label.setMaximumSize(QSize(530, 35))
        self.in_Label.setStyleSheet(u"font: 12pt \"Segoe UI\";\n"
"color: black;\n"
"background: transparent")

        self.verticalLayout.addWidget(self.in_Label)

        self.horizontalLayout = QHBoxLayout()
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.horizontalSpacer = QSpacerItem(33, 17, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout.addItem(self.horizontalSpacer)

        self.frame = QFrame(self.centralwidget)
        self.frame.setObjectName(u"frame")
        self.frame.setMinimumSize(QSize(100, 100))
        self.frame.setStyleSheet(u"border: none;\n"
"background: transparent;")
        self.frame.setFrameShape(QFrame.Shape.StyledPanel)
        self.frame.setFrameShadow(QFrame.Shadow.Raised)
        self.rock_Button = QPushButton(self.frame)
        self.rock_Button.setObjectName(u"rock_Button")
        self.rock_Button.setGeometry(QRect(0, 0, 100, 100))
        self.rock_Button.setMinimumSize(QSize(100, 100))
        self.rock_Button.setMaximumSize(QSize(100, 100))
        self.rock_Button.setStyleSheet(u"QPushButton\n"
"{\n"
"	border: none;\n"
"    background-color: transparent;\n"
"    qproperty-icon: url(\":/resources/rock.png\");\n"
"    qproperty-iconSize: 100px 100px;\n"
"}\n"
"")

        self.horizontalLayout.addWidget(self.frame)

        self.horizontalSpacer_2 = QSpacerItem(34, 17, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout.addItem(self.horizontalSpacer_2)

        self.frame_2 = QFrame(self.centralwidget)
        self.frame_2.setObjectName(u"frame_2")
        self.frame_2.setMinimumSize(QSize(100, 100))
        self.frame_2.setStyleSheet(u"border: none;\n"
"background: transparent;")
        self.frame_2.setFrameShape(QFrame.Shape.StyledPanel)
        self.frame_2.setFrameShadow(QFrame.Shadow.Raised)
        self.paper_Button = QPushButton(self.frame_2)
        self.paper_Button.setObjectName(u"paper_Button")
        self.paper_Button.setGeometry(QRect(0, 0, 100, 100))
        self.paper_Button.setMinimumSize(QSize(100, 100))
        self.paper_Button.setMaximumSize(QSize(100, 100))
        self.paper_Button.setStyleSheet(u"color: none;\n"
"background-color: none;\n"
"border: none;\n"
"background-image: url(\":/resources/paper.png\");\n"
"background-position: center;")

        self.horizontalLayout.addWidget(self.frame_2)

        self.horizontalSpacer_3 = QSpacerItem(33, 17, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout.addItem(self.horizontalSpacer_3)

        self.frame_3 = QFrame(self.centralwidget)
        self.frame_3.setObjectName(u"frame_3")
        self.frame_3.setMinimumSize(QSize(100, 100))
        self.frame_3.setStyleSheet(u"border: none;\n"
"background: transparent;")
        self.frame_3.setFrameShape(QFrame.Shape.StyledPanel)
        self.frame_3.setFrameShadow(QFrame.Shadow.Raised)
        self.scissors_Button = QPushButton(self.frame_3)
        self.scissors_Button.setObjectName(u"scissors_Button")
        self.scissors_Button.setGeometry(QRect(0, 0, 100, 100))
        self.scissors_Button.setMinimumSize(QSize(100, 100))
        self.scissors_Button.setMaximumSize(QSize(100, 100))
        self.scissors_Button.setStyleSheet(u"color: none;\n"
"background-color: none;\n"
"border: none;\n"
"background-image: url(\":/resources/scissors.png\");\n"
"background-position: center;")

        self.horizontalLayout.addWidget(self.frame_3)

        self.horizontalSpacer_4 = QSpacerItem(34, 17, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout.addItem(self.horizontalSpacer_4)


        self.verticalLayout.addLayout(self.horizontalLayout)

        mainwindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(mainwindow)

        QMetaObject.connectSlotsByName(mainwindow)
    # setupUi

    def retranslateUi(self, mainwindow):
        mainwindow.setWindowTitle(QCoreApplication.translate("mainwindow", u"mainwindow", None))
        self.label_4.setText(QCoreApplication.translate("mainwindow", u"Adaptive", None))
        self.label_5.setText(QCoreApplication.translate("mainwindow", u"Rock-Paper-Scissors", None))
        self.label.setText(QCoreApplication.translate("mainwindow", u"User Wins", None))
        self.label_2.setText(QCoreApplication.translate("mainwindow", u"Comp Wins", None))
        self.label_3.setText(QCoreApplication.translate("mainwindow", u"Draws", None))
        self.cm_Label.setText(QCoreApplication.translate("mainwindow", u"Computer Chooses", None))
        self.rock_Button_2.setText("")
        self.paper_Button_2.setText("")
        self.scissors_Button_2.setText("")
        self.in_Label.setText(QCoreApplication.translate("mainwindow", u"Your Option", None))
        self.rock_Button.setText("")
        self.paper_Button.setText("")
        self.scissors_Button.setText("")
    # retranslateUi


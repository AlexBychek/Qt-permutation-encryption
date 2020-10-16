/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *SourceText;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextEdit *EncText;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *KeyLine;
    QLabel *Error_label;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QPushButton *Dec;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(616, 323);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 601, 307));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        SourceText = new QTextEdit(layoutWidget);
        SourceText->setObjectName(QString::fromUtf8("SourceText"));

        verticalLayout->addWidget(SourceText);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        EncText = new QTextEdit(layoutWidget);
        EncText->setObjectName(QString::fromUtf8("EncText"));
        EncText->setReadOnly(true);

        verticalLayout_2->addWidget(EncText);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        KeyLine = new QLineEdit(layoutWidget);
        KeyLine->setObjectName(QString::fromUtf8("KeyLine"));

        verticalLayout_3->addWidget(KeyLine);


        horizontalLayout_2->addLayout(verticalLayout_3);

        Error_label = new QLabel(layoutWidget);
        Error_label->setObjectName(QString::fromUtf8("Error_label"));

        horizontalLayout_2->addWidget(Error_label);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        horizontalLayout_3->addWidget(pushButton);

        Dec = new QPushButton(layoutWidget);
        Dec->setObjectName(QString::fromUtf8("Dec"));
        Dec->setFont(font);

        horizontalLayout_3->addWidget(Dec);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\277\320\265\321\200\320\265\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\276\320\271", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200/\320\224\320\265\321\210\320\270\321\204\321\200 \321\202\320\265\320\272\321\201\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\210\320\270\321\204\321\200/\320\240\320\260\321\201\321\210\320\270\321\204\321\200 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\321\216\321\207", nullptr));
        Error_label->setText(QCoreApplication::translate("MainWindow", "Error Detecter                                                             ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        Dec->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

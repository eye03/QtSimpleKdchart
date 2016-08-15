/********************************************************************************
** Form generated from reading UI file 'StageStart.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGESTART_H
#define UI_STAGESTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StageStart
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *StageStart)
    {
        if (StageStart->objectName().isEmpty())
            StageStart->setObjectName(QStringLiteral("StageStart"));
        StageStart->resize(400, 300);
        gridLayout = new QGridLayout(StageStart);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(StageStart);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(StageStart);

        QMetaObject::connectSlotsByName(StageStart);
    } // setupUi

    void retranslateUi(QWidget *StageStart)
    {
        StageStart->setWindowTitle(QApplication::translate("StageStart", "Form", 0));
        pushButton->setText(QApplication::translate("StageStart", "ex1", 0));
        pushButton_2->setText(QApplication::translate("StageStart", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("StageStart", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class StageStart: public Ui_StageStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGESTART_H

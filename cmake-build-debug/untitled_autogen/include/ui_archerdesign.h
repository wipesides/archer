/********************************************************************************
** Form generated from reading UI file 'archerdesign.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHERDESIGN_H
#define UI_ARCHERDESIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_archerdesign
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *display_button;
    QPushButton *log_in_button;
    QLabel *label;

    void setupUi(QWidget *archerdesign)
    {
        if (archerdesign->objectName().isEmpty())
            archerdesign->setObjectName("archerdesign");
        archerdesign->setEnabled(true);
        archerdesign->resize(951, 675);
        archerdesign->setFocusPolicy(Qt::ClickFocus);
        archerdesign->setAcceptDrops(false);
        archerdesign->setLayoutDirection(Qt::LeftToRight);
        widget = new QWidget(archerdesign);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(240, 150, 431, 351));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        display_button = new QPushButton(widget);
        display_button->setObjectName("display_button");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(display_button->sizePolicy().hasHeightForWidth());
        display_button->setSizePolicy(sizePolicy);

        gridLayout->addWidget(display_button, 4, 0, 1, 1);

        log_in_button = new QPushButton(widget);
        log_in_button->setObjectName("log_in_button");

        gridLayout->addWidget(log_in_button, 2, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);


        retranslateUi(archerdesign);

        QMetaObject::connectSlotsByName(archerdesign);
    } // setupUi

    void retranslateUi(QWidget *archerdesign)
    {
        archerdesign->setWindowTitle(QCoreApplication::translate("archerdesign", "Archer", nullptr));
        display_button->setText(QCoreApplication::translate("archerdesign", "Display Message", nullptr));
        log_in_button->setText(QCoreApplication::translate("archerdesign", "Log in", nullptr));
        label->setText(QCoreApplication::translate("archerdesign", "Welcome!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class archerdesign: public Ui_archerdesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHERDESIGN_H

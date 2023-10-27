/********************************************************************************
** Form generated from reading UI file 'archermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHERMAINWINDOW_H
#define UI_ARCHERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArcherMainWindow
{
public:
    QListWidget *listCurrencies;

    void setupUi(QWidget *ArcherMainWindow)
    {
        if (ArcherMainWindow->objectName().isEmpty())
            ArcherMainWindow->setObjectName("ArcherMainWindow");
        ArcherMainWindow->setWindowModality(Qt::WindowModal);
        ArcherMainWindow->resize(918, 759);
        listCurrencies = new QListWidget(ArcherMainWindow);
        listCurrencies->setObjectName("listCurrencies");
        listCurrencies->setGeometry(QRect(10, 10, 901, 741));

        retranslateUi(ArcherMainWindow);

        QMetaObject::connectSlotsByName(ArcherMainWindow);
    } // setupUi

    void retranslateUi(QWidget *ArcherMainWindow)
    {
        ArcherMainWindow->setWindowTitle(QCoreApplication::translate("ArcherMainWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArcherMainWindow: public Ui_ArcherMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHERMAINWINDOW_H

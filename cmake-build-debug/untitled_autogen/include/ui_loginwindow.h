/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logInWindow
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameInput;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordInput;
    QPushButton *logInButton;

    void setupUi(QDialog *logInWindow)
    {
        if (logInWindow->objectName().isEmpty())
            logInWindow->setObjectName("logInWindow");
        logInWindow->resize(931, 786);
        logInWindow->setMaximumSize(QSize(931, 786));
        label = new QLabel(logInWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(405, 110, 111, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/BrownLogIn.png")));
        label->setScaledContents(true);
        widget = new QWidget(logInWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 210, 561, 531));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8(""));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        title = new QLabel(groupBox);
        title->setObjectName("title");
        QFont font;
        font.setFamilies({QString::fromUtf8("Z003 [UKWN]")});
        font.setPointSize(25);
        font.setBold(true);
        title->setFont(font);
        title->setLayoutDirection(Qt::LeftToRight);
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        usernameLabel = new QLabel(groupBox);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(usernameLabel);

        usernameInput = new QLineEdit(groupBox);
        usernameInput->setObjectName("usernameInput");

        horizontalLayout->addWidget(usernameInput);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        passwordLabel = new QLabel(groupBox);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(passwordLabel);

        passwordInput = new QLineEdit(groupBox);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordInput);


        verticalLayout->addLayout(horizontalLayout_2);

        logInButton = new QPushButton(groupBox);
        logInButton->setObjectName("logInButton");

        verticalLayout->addWidget(logInButton);


        verticalLayout_3->addWidget(groupBox);

#if QT_CONFIG(shortcut)
        usernameLabel->setBuddy(usernameInput);
        passwordLabel->setBuddy(passwordInput);
#endif // QT_CONFIG(shortcut)

        retranslateUi(logInWindow);

        QMetaObject::connectSlotsByName(logInWindow);
    } // setupUi

    void retranslateUi(QDialog *logInWindow)
    {
        logInWindow->setWindowTitle(QCoreApplication::translate("logInWindow", "Sign in", nullptr));
        label->setText(QString());
        groupBox->setTitle(QString());
        title->setText(QCoreApplication::translate("logInWindow", "Sign In", nullptr));
        usernameLabel->setText(QCoreApplication::translate("logInWindow", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("logInWindow", "Password", nullptr));
        logInButton->setText(QCoreApplication::translate("logInWindow", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logInWindow: public Ui_logInWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

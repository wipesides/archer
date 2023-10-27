#include "archermainwindow.h"
#include "ui_archermainwindow.h"
#include <QJsonDocument>
#include <iostream>
#include <QJsonObject>

ArcherMainWindow::ArcherMainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ArcherMainWindow)
{
    ui->setupUi(this);
}
ArcherMainWindow::~ArcherMainWindow()
{
    delete ui;
}

void ArcherMainWindow::addCurrency(std::string string) {
    QString qString = QString::fromStdString(string);
    ui->listCurrencies->addItem(qString);
}

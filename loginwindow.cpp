#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "archermainwindow.h"
#include <QMessageBox>
#include <QJsonDocument>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <QNetworkReply>
#include <QJsonObject>
logInWindow::logInWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logInWindow)
{
    ui->setupUi(this);
}

logInWindow::~logInWindow()
{
    delete ui;
}
void logInWindow::getData(){
    QString url = "https://v6.exchangerate-api.com/v6/43a484f08ccbbce44ed6e450/latest/TRY";
    auto *manager = new QNetworkAccessManager();
    connect(manager,&QNetworkAccessManager::finished,[=](QNetworkReply *reply){
        QString json = reply->readAll();
        QJsonDocument replyJson = QJsonDocument::fromJson(json.toUtf8());
        QJsonObject mainJson = replyJson.object();
        auto rates = mainJson["conversion_rates"].toObject();
        for (auto &x : rates.keys()){
            auto value = 1 / rates.value(x).toDouble();
            auto line = x.toStdString() + "/TRY" + ": " + std::to_string(value);
            mainWindow->addCurrency(line);
        }
    });
    QNetworkRequest request;
    request.setUrl(url);
    manager->get(request);
}
void logInWindow::on_logInButton_clicked()
{
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    if (username == "test" && password == "test"){
        hide();
        mainWindow = new ArcherMainWindow();
        getData();
        mainWindow->show();
    }

    else {
        QMessageBox::warning(this,"Error","Login failed!");
    }
}


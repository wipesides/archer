#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include "archermainwindow.h"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
namespace Ui {
class logInWindow;
}

class logInWindow : public QDialog
{
    Q_OBJECT

public:
    explicit logInWindow(QWidget *parent = nullptr);
    ~logInWindow();
    void getData();

private slots:
    void on_logInButton_clicked();

private:
    Ui::logInWindow *ui;
    ArcherMainWindow *mainWindow;
};

#endif // LOGINWINDOW_H

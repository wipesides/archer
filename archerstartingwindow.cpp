#include "archerstartingwindow.h"
#include "ui_archerdesign.h"
#include <QMessageBox>
#include "loginwindow.h"

ArcherStartingWindow::ArcherStartingWindow(QWidget *parent) :
    QWidget(parent), ui(new Ui::archerdesign)
{
    ui->setupUi(this);
}

ArcherStartingWindow::~ArcherStartingWindow() {
    delete ui;
}

void ArcherStartingWindow::on_log_in_button_clicked()
{
    loginWindow = new logInWindow(this);
    loginWindow->show();
}


void ArcherStartingWindow::on_display_button_clicked()
{
    QMessageBox::information(this,"Info","You are informed!",QMessageBox::Cancel,QMessageBox::Abort);
}


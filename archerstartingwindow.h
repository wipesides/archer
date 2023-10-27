//
// Created by wipesides on 10/8/23.
//

#ifndef UNTITLED_ARCHERDESIGN_H
#define UNTITLED_ARCHERDESIGN_H

#include <QWidget>
#include "loginwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class archerdesign; }
QT_END_NAMESPACE

class ArcherStartingWindow : public QWidget {
Q_OBJECT

public:
    explicit ArcherStartingWindow(QWidget *parent = nullptr);

    ~ArcherStartingWindow() override;

private slots:
    void on_log_in_button_clicked();

    void on_display_button_clicked();

private:
    Ui::archerdesign *ui;
    logInWindow *loginWindow;
};
#endif //UNTITLED_ARCHERDESIGN_H

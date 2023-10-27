#ifndef ARCHERMAINWINDOW_H
#define ARCHERMAINWINDOW_H

#include <QWidget>

namespace Ui {
class ArcherMainWindow;
}

class ArcherMainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ArcherMainWindow(QWidget *parent = nullptr);
    void addCurrency(std::string string);
    ~ArcherMainWindow();
private:
    Ui::ArcherMainWindow *ui;
};

#endif // ARCHERMAINWINDOW_H

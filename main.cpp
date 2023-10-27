#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include "archerstartingwindow.h"
#include <curlpp/cURLpp.hpp>


int main(int argc, char *argv[]) {
    QApplication a (argc,argv);
    ArcherStartingWindow w;
    w.show();
    return a.exec();
}

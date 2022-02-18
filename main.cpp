#include <QApplication>
#include <QPushButton>
#include "Fenetre.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Fenetre *fenetre=new Fenetre();
    fenetre->show();
    return QApplication::exec();
}

//
// Created by eric on 18/02/2022.
//

#ifndef EURTOUSDQT_FENETRE_H
#define EURTOUSDQT_FENETRE_H


#include <QFrame>
#include <QSpinBox>
#include <QPushButton>

class Fenetre: public QFrame {

Q_OBJECT

private:
    QSpinBox *spinbox;
    QPushButton *pushButton;

public:
    Fenetre();

public slots:
    void calculerChange();
};


#endif //EURTOUSDQT_FENETRE_H

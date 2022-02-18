//
// Created by eric on 18/02/2022.
//
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include "Fenetre.h"

Fenetre::Fenetre() {
    setWindowTitle("Convertisseur EUR/USD");
    QGridLayout *layout=new QGridLayout();
    spinbox=new QSpinBox();
    pushButton=new QPushButton("Convertir");
    layout->addWidget(spinbox,0,1);
    layout->addWidget(new QLabel("EUR"),0,0,Qt::AlignRight);
    layout->addWidget(pushButton,1,1,Qt::AlignCenter);
    setLayout(layout);
    QObject::connect(pushButton,&QPushButton::clicked,this,&Fenetre::calculerChange);


}

void Fenetre::calculerChange() {
    float taux=1.13;
    QMessageBox::information(this,"Valeur en USD",QString::number(1.13*spinbox->value()));


}

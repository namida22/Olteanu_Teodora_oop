//
// Created by Teo on 12.03.2020.
//

#ifndef TEODORA_OLTEANU_712_LAB2_COMPLEX_H
#define TEODORA_OLTEANU_712_LAB2_COMPLEX_H
#include <iostream>
#include <string>
class complex{

private:
    double real;
    double imaginar;


public:
    //Constructor
    complex(double real,double imaginar);

    //Getters
    double getReal();
    double getImaginar();

    //retrun ein string der die Zahl in der komplexen Form zeigt
    std::string show_compl();

    //return ein string der die Zahl in der exponentiellen Form zeigt
    std::string show_exp();

    //add - Macht die Addition zweier komplexen Zahlen und gibt den reelen Teil zuruck
    double add(double numar2, double imaginar2);

    //mult - Macht die Multiplikation zweier komplexen Zahlen und gibt den imaginaeren Teil zuruck
    double mult(double numar2, double imaginar2);

    //quot - Macht die Divizion zweier komplexen Zahlen und gibt den realen Teil zuruck
    //zahl1/zahl2 - numar1/numar2 und imaginar1/imaginar2
    double quot(double numar2, double imaginar2);

    //abs - Gibt den MOdul einer komplexen Zahl zuruck
    double abs();

    //Bringt die koplexe Zahl in der polaren Form
    double compute_polar();
};

#endif //TEODORA_OLTEANU_712_LAB2_COMPLEX_H

//
// Created by Teo on 12.03.2020.
//

#include "complex.h"
#include <iostream>
#include <math.h>
#include <string>
complex::complex(double real, double imaginar){
    this->real=real;
    this->imaginar=imaginar;
}


double complex::getReal(){
    return real;
}

double complex::getImaginar(){
    return imaginar;
}

//return ein string der die Zahl in der komplexen Form zeigt
std::string complex::show_compl(){
    return std::to_string(real)+" "+"i"+"*"+std::to_string(imaginar);
}
//return ein string der die Zahl in der exponentiellen Form zeigt
std::string complex::show_exp(){
    return std::to_string(abs())+"*"+"e^(i*"+std::to_string(atan(((imaginar/real)*180.0)/3.1415))+")";
}
//add - Macht die Addition zweier komplexen Zahlen und gibt den reelen Teil zuruck
double complex::add(double numar2, double imaginar2){
    double real_sum, imaginar_sum;
    real_sum = real + numar2;
    imaginar_sum = imaginar + imaginar2;
    imaginar2 = imaginar_sum;
    numar2 = real_sum;
    return numar2;
}

//mult - Macht die Multiplikation zweier komplexen Zahlen und gibt den imaginaeren Teil zuruck
double complex::mult(double numar2, double imaginar2){
    double real_sum, imaginar_sum;
    real_sum = real * numar2;
    imaginar_sum = imaginar * imaginar2;
    numar2 = real_sum;
    imaginar2 = imaginar_sum;
    return imaginar2;
}
//quot - Macht die Divizion zweier komplexen Zahlen und gibt den realen Teil zuruck
double complex::quot(double numar2, double imaginar2){
    double real_sum, imaginar_sum;
    imaginar_sum = imaginar / imaginar2;
    imaginar2 = imaginar_sum;
    numar2 = real/numar2;
    return numar2;
}

//abs - Gibt den MOdul einer komplexen Zahl zuruck
double complex::abs(){

    return sqrt(real*real+imaginar*imaginar);
}

//Bringt die koplexe Zahl in der polaren Form
double complex::compute_polar(){
    double r, rez, sinA, cosA;
    r= abs();
    cosA = real/imaginar;
    sinA = imaginar/real;
    real = r*cosA;
    imaginar = r*sinA;
    return r*sinA;

}
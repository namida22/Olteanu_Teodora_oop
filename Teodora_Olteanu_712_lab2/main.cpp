#include <iostream>
#include <cmath>
#include <algorithm>
#include "complex.h"
#include <vector>
int main() {
    //Declarari
    int i, j, abs1, abs2;
    double sumreal=0.0, sumimaginar=0.0;
    complex aux(complex(0,0));

    complex c1(complex(4,3));
    //complex* c2= new complex(1,sqrt(3));
    complex c2(complex(1,sqrt(12)));
    complex c3(complex(sqrt(1),0));
    complex c4( complex(2,1));
    //vector<complex*> lista;

    //vektor von Objekton dem Typ complex: lista
    std::vector<complex> lista;

    lista.push_back(c1);
    lista.push_back(c2);
    lista.push_back(c3);
    lista.push_back(c4);

    //Afisare lista de obiecte NESORTATA

    std::cout<<"Lista initiala: "<<"\n";
    for (int i = 0; i < lista.size(); i++)
        std::cout <<  lista[i].getReal() << " " << lista[i].getImaginar()<<"\n";
    //std::sort(lista.begin(), lista.end(), std::greater<complex::lista[i].abs()>)
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            abs1 = lista[i].abs();
            abs2 = lista[j].abs();
            if(abs1 > abs2)
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j]=aux;

                //std::cout<<lista[i].getReal()<<" "<<lista[i].getImaginar()<<"    "<<lista[j].getReal()<<" "<<
                //lista[j].getImaginar()<<"\n";
            }

        }
    }

    //Afisare lista de obiecte SORTATA

    std::cout<<"Lista sortata dupa modul: "<<"\n";
    for (int i = 0; i < lista.size(); i++)
        std::cout <<  lista[i].getReal() << " " << lista[i].getImaginar()<<"\n";

    //Afisare Gesamtsumme der Objekten vom Typ complex
    for(i=0;i<4;i++){
        sumreal = sumreal+lista[i].getReal();
        sumimaginar = sumimaginar+lista[i].getImaginar();
    }
    std::cout<<"Die Gesamtsumme der realen Teil ist:"<<sumreal<<"\n"<<"Die Gesamtsumme der imaginaeren Teil ist:"
    <<sumimaginar<<"\n";

    std::cout<<"Nr complex in forma coplexa: "<<c4.show_compl()<<"\n";
    std::cout<<"Nr complex in forma exponentiala: "<<c4.show_exp();


    return 0;
}

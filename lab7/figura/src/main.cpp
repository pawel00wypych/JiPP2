#include <iostream>
#include "Figura.h"

using namespace std;

int main()
{
    Kwadrat kw1(2);
    Trojkat tr1(3,4,5);
    cout<<"nazwa: "<<tr1::nazwa;
    cout<<"pole trojkata: "<<tr1.pole()<<"\n";
    cout<<"obwod trojkata: "<<tr1.obwod()<<"\n";
    cout<<"pole kwadratu: "<<kw1.pole()<<"\n";
    cout<<"obwod kwadratu: "<<kw1.obwod()<<"\n";

    return 0;
}
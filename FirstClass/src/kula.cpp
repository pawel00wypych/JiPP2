#include <iostream>
#include <math.h>
#include "kula.h"

using namespace std;

void Kula::readRadius()
{
    cout<<"Podaj promien:";
    cin>>r;
    if(r<0)
    {
        cout<<"promien nie moze byc ujemny!\n";
        exit(-1);
    }
}

double Kula::volume()
{
    return 4./3*pow(r,3.0)*M_PI;
}
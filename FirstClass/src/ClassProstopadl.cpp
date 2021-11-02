#include<iostream>
#include "../include/ClassProstopadl.h"

using namespace std;

void ClassProstopadl::read()
{
    cout<<"Podaj 3 boki prostopadloscianu:";
    cin>>a>>b>>c;
    if(a<0 || b<0 || c<0)
    {
        cout<<"dlugosc nie moze byc ujemna!\n";
        exit(-1);
    }
}

double ClassProstopadl::countSurf() {
    return a*b*2+b*c*2+a*c*2;
}

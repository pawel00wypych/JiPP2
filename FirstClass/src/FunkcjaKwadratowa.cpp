#include <iostream>
#include "FunkcjaKwadratowa.h"

using namespace std;

void FunkcjaKwadratowa::readCoefficients() {
    cout<<"Podaj a:";
    cin>>a;
    cout<<"Podaj b:";
    cin>>b;
    cout<<"Podaj c:";
    cin>>c;
}

void FunkcjaKwadratowa::showData() {

        cout<<"("<<a<<")x^2"<<" + ("<<b<<")x"<<" + ("<<c<<")";
}

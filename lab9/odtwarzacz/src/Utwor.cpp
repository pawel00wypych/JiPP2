#include "Utwor.h"


void Utwor::print() {cout<<tytul<<endl;}

Utwor::Utwor() {tytul = "brak tytulu";}

Utwor::Utwor(string title):tytul(title) {}

string Utwor::getTitle() {
    return tytul;
}

void Utwor::setTitle() {
    string t;
    cout<<"podaj tytul:";
    cin>>t;
    tytul = t;
}

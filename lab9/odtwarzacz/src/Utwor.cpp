#include "Utwor.h"

void Utwor::print() {cout<<tytul<<endl;}

Utwor::Utwor() {tytul = "brak tytulu";}

Utwor::Utwor(string tytul):tytul(tytul) {}

string Utwor::getTitle() {
    return tytul;
}

#include <iostream>
#include "../include/Pojazd.h"

using namespace std;

double Pojazd::latestVersion=1.5;

int main()
{
    Pojazd p1("KPR12234", "Lanos", "daewoo", "sedan", 5,1.0);
    p1.wyswietl();
    p1.pasazer(1,"Jan Kowalski");
    p1.pasazer(2,"Ola Kowalska");
    p1.pasazer(3,"Marcin Kowalski");
    p1.wyswietl();
    Pojazd p2("KPR11111","Golf V","Volkswagen","kompakt",5,1.0);
    string nnazwa=p2.getNazwa();
    p2.setNazwa(nnazwa);
    p2.wyswietl();
    p2.showVersion();
    p2.updateVersion();
    p2.showVersion();
    p2.publishLatestVer(2.0);
    p2.updateVersion();
    p2.showVersion();
    return 0;
}
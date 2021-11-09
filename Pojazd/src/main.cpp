#include <iostream>
#include "../include/Pojazd.h"

using namespace std;

int main()
{
    Pojazd p1("KPR12234", "batmobil", "deawoo", "lanos", 4);
    p1.wyswietl();
    p1.pasazer(1,"Jan Kowalski");
    p1.pasazer(2,"Ola Kowalska");
    p1.pasazer(3,"Marcin Kowalski");
    p1.wyswietl();

    return 0;
}
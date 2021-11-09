#include<iostream>
#include "../include/Pojazd.h"


Pojazd::Pojazd(string &nRejestracyjny,string &nazwa,string &marka,string &typ,int &ileMiejsc)
{
    tabMiejsc = new string [ileMiejsc];

    this->nRejestracyjny=nRejestracyjny;
    this->nazwa=nazwa;
    this->marka=marka;
    this->typ=typ;
    this->ileMiejsc=ileMiejsc;

    for(int i=0;i<this->ileMiejsc;i++)
        this->tabMiejsc[i]="Puste";
}

#include<iostream>
#include "../include/Pojazd.h"


Pojazd::Pojazd(string nRejestracyjny,string nazwa, string marka, string typ, int ileMiejsc)
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

void Pojazd::wyswietl() {
    cout<<"samochod\n";
    cout<<"nazwa: "<<nazwa;
    cout<<"\nmarka: "<<marka;
    cout<<"\ntyp: "<<typ;
    cout<<"\nnumer rejestracyjny: "<<nRejestracyjny;
    cout<<"\nilosc miejsc: "<<ileMiejsc;
    for(int i=0;i<ileMiejsc;i++)
        cout<<"\nmiejsce "<<i+1<<": "<<tabMiejsc[i];
}

void Pojazd::pasazer(int n,string info) {
    tabMiejsc[n-1]=info;
}

Pojazd::Pojazd(Pojazd &pojazd) {
    nazwa=pojazd.nazwa;
    marka=pojazd.marka;
    typ=pojazd.typ;
    nRejestracyjny=pojazd.nRejestracyjny;
    ileMiejsc=pojazd.ileMiejsc;
    *tabMiejsc=*pojazd.tabMiejsc;

}

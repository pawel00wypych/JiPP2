#include<iostream>
#include "../include/Pojazd.h"


Pojazd::Pojazd(string nRejestracyjny,string nazwa, string marka, string typ, int ileMiejsc, double installedVersion)
{
    tabMiejsc = new string [ileMiejsc];

    this->nRejestracyjny=nRejestracyjny;
    this->nazwa=nazwa;
    this->marka=marka;
    this->typ=typ;
    this->ileMiejsc=ileMiejsc;
    this->installedVersion=installedVersion;
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
    cout<<"\n";
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

void Pojazd::setNazwa(string nazwa) {
    this->nazwa=nazwa;
}

string Pojazd::getNazwa() {
    return nazwa;
}

string Pojazd::getMarka() {
    return marka;
}

string Pojazd::getTyp() {
    return typ;
}

string Pojazd::getNrRejestr() {
    return nRejestracyjny;
}

void Pojazd::setNrRejestr(string nRejestracyjny) {
    this->nRejestracyjny=nRejestracyjny;
}

void Pojazd::showVersion() {
    cout<<"Zainstalowana wersja oprogramowania:"<<installedVersion<<endl;
}

void Pojazd::updateVersion() {
    installedVersion=latestVersion;
}

void Pojazd::publishLatestVer(double newVersion) {
     latestVersion=newVersion;
}

Pojazd::~Pojazd() {
    delete [] tabMiejsc;
}



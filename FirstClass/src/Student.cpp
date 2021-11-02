#include <iostream>
#include "Student.h"

using namespace std;

void Student::wczytaj() {
    cout<<"\nPodaj imie:";
    cin>>imie;
    cout<<"Podaj nazwisko:";
    cin>>nazwisko;
    cout<<"Podaj numer albumu:";
    cin>>nr_albumu;
    cout<<"Podaj liczbe pytan:";
    cin>>l_pytan;
    cout<<"Podaj liczbe poprawnych odpowiedzi:";
    cin>>l_pop_odp;
}

double Student::obl_proc() {
    return (double)l_pop_odp/l_pytan*100;
}

string Student::getName()
{
    return imie;
}
string Student::getSecondName()
{
    return nazwisko;
}
int Student::getNrAlbumu()
{
    return nr_albumu;
}
int Student::getLPytan()
{
    return l_pytan;
}
int Student::getLPopOdp()
{
    return l_pop_odp;
}

void Student::setImie(string imie) {
    this->imie = imie;
}

void Student::setLPopPytan(int l_pop_odp) {
    this->l_pop_odp = l_pop_odp;
}

void Student::setLPytan(int l_pytan) {
    this->l_pytan = l_pytan;
}

void Student::setNrAlbumu(int nr_albumu) {
    this->nr_albumu = nr_albumu;
}

void Student::setNazwisko(string nazwisko) {
    this->nazwisko = nazwisko;
}

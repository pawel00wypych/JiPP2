//
// Created by HP on 09.11.2021.
//

#ifndef FIRSTLIBCALL_POJAZD_H
#define FIRSTLIBCALL_POJAZD_H

#include <iostream>

using namespace std;

class Pojazd {
private:
    string nRejestracyjny,nazwa,marka,typ;
    int ileMiejsc;
    string *tabMiejsc;
    static double latestVersion;
    double installedVersion;
public:
    Pojazd(string nRejestracyjny,string nazwa, string marka, string typ, int ileMiejsc, double installedVersion);
    Pojazd(Pojazd &pojazd);
    ~Pojazd();
    void pasazer(int ,string);
    void wyswietl();
    string getNazwa();
    void setNazwa(string nazwa);
    string getMarka();
    string getTyp();
    string getNrRejestr();
    void setNrRejestr(string nRejestracyjny);
    void showVersion();
    void updateVersion();
    static void publishLatestVer(double);
};


#endif //FIRSTLIBCALL_POJAZD_H

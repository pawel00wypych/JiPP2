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
public:
    Pojazd(Pojazd &pojazd);
    Pojazd(string &nRejestracyjny,string &nazwa,string &marka,string &typ,int &ileMiejsc);

};


#endif //FIRSTLIBCALL_POJAZD_H

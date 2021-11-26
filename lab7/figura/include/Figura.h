#include <iostream>

#ifndef FIRSTLIBCALL_FIGURA_H
#define FIRSTLIBCALL_FIGURA_H

using namespace std;

class PoleObw {
protected:
    double pole,obwod;
public:
    PoleObw(){};
    PoleObw(double pole,double obwod): pole(pole),obwod(obwod){};
    printP(){cout<<"pole="<<pole<<"\n";};
    printO(){cout<<"obwod="<<obwod<<"\n";};
    ~PoleObw(){};
};

class Figura {
protected:
    string kolor,nazwa;
public:
    Figura(){};
    Figura(string kolor,string nazwa):kolor(kolor),nazwa(nazwa){};
    ~Figura(){};
};

class Kwadrat: public Figura {
protected:
    double bok;
public:
    Kwadrat(){};
    Kwadrat(double bok):bok(bok){};
    void printBok(){cout<<"bok="<<bok<<"\n";};
    ~Kwadrat(){};
};


#endif //FIRSTLIBCALL_FIGURA_H

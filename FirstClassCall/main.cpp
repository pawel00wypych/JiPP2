#include <iostream>
#include "ClassProstopadl.h"
#include "kula.h"
#include "FunkcjaKwadratowa.h"
#include "Student.h"
#include "Punkt.h"
#include "Figura.h"
#include "KonstDest.h"

using namespace std;

int main()
{
    ClassProstopadl n1;
    n1.read();
    cout<<"\n"<<n1.countSurf()<<"\n";

    Kula n2;
    n2.readRadius();
    cout<<"\n"<<n2.volume()<<"\n";

    FunkcjaKwadratowa n3;
    n3.readCoefficients();
    n3.showData();

    Student n4;
    n4.wczytaj();
    cout<<"\n"<<n4.obl_proc()<<"%\n";

   Punkt p1(7,7);
   cout<<p1.distance()<<"\n";

   KonstDest p2;
   p2.pause();


     return 0;
}
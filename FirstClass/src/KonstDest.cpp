#include <iostream>
#include "KonstDest.h"

using namespace std;

KonstDest::KonstDest() {
    tab = new int [1024];
    cout<<"Konstruktor zostal wywolany!\n";
}

KonstDest::~KonstDest() {
    cout<<"Destruktor zostal wywolany!\n";
    delete [] tab;
}

void KonstDest::pause() {
    system("PAUSE");
}

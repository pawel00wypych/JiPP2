#ifndef FIRSTLIBCALL_UTWOR_H
#define FIRSTLIBCALL_UTWOR_H
#include<iostream>
#include <list>
#include <string>
#include <iterator>

using namespace std;

class Utwor {
private:
    string tytul = "brak";
public:
    Utwor(string);
    Utwor();
    string getTitle();
    void setTitle();
    void print();
    ~Utwor(){};
};


#endif //FIRSTLIBCALL_UTWOR_H

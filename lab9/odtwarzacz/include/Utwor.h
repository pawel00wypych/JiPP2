#ifndef FIRSTLIBCALL_UTWOR_H
#define FIRSTLIBCALL_UTWOR_H
#include<iostream>

using namespace std;

class Utwor {
private:
    string tytul;
public:
    Utwor(string);
    Utwor();
    string getTitle();
    void setTitle();
    void print();
    ~Utwor(){};
};


#endif //FIRSTLIBCALL_UTWOR_H

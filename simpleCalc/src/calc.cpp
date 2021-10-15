#include<iostream>
#include "calc.h"

using namespace std;

int add(int a,int b)
{
    return a+b;
}

int subtract(int a,int b)
{
    return a-b;
}

int volume(int a,int b,int h,int H)
{
    return (a+b)/2.0*h*H;
}

void help()
{
    cout<<"Simple calculator\n";
    cout<<"simpleCalc [ADD]\n\n";
    cout<<"Dzialania:\n";
    cout<<"add [a] [b]\n";
    cout<<"dodawanie dwoch liczb ([a] i [b]) calkowitych\n\n";
    cout<<"simpleCalc [SUBTRACT]\n\n";
    cout<<"Dzialania:\n";
    cout<<"subtract [a] [b]\n";
    cout<<"odejmowanie liczby ([b] od [a]) obie liczby calkowite\n\n";
    cout<<"simpleCalc [VOLUME]\n\n";
    cout<<"Dzialania:\n";
    cout<<"volume [a] [b] [h] [H]\n";
    cout<<"obliczanie objetosci graniastoslupa prostego o wyskosci [H] oraz podstawie trapezu o ramionach "
          "([a] [b]) i wysokosci [h] - ([a] [b] [h] [H]) calkowite\n\n";
}
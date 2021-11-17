#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector v1, v2(5,10);
    Vector v3 = v1 + v2;
    Vector v4 = v2 + v2+v2;

    v3 = v1.operator+(v2);
    v1.print();
    v2.print();
    v3.print();
    v4.print();
    cout<<"\noperacje:\n";
    v2 = v2.operator!=(v2);
    v2.print();
    v1 = v4 - v3;
    v1.print();
    double iloczynSk=v1*v2;
    cout<<"\niloczyn skalarny wektora v1 i v2 = "<<iloczynSk<<endl;
    cout<<"wynik  mnozenia przez skalar:";
    v1*=iloczynSk;
    v1.print();
    Vector v5(-2500,-5000);
    cout << "\nczy wektor v1 i v2 sa rowne? ";
    if(v1==v5)cout<<"tak\n";
    else cout<<"nie\n";
    cout << "\nczy wektor v1 jest wiekszy lub rowny v2? ";
    if(v1>=v5)cout<<"tak\n";
    else cout<<"nie\n";

    return 0;
}
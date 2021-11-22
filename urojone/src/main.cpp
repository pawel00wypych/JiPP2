#include<iostream>
#include "zespolona.h"

using namespace std;

int main()
{
    Zespolona z1(4,-10),z2(3,8.5),z3;
    z1.print();
    z2.print();
    z3 = z1 + z2;
    z3.print();
    z3.operator+=(z2);
    z3.print();

    return 0;
}
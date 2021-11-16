#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector v1, v2(5,10);
    Vector v3 = v1 + v2;
    v3 = v1.operator+(v2);
    v1.print();
    v2.print();
    v3.print();
    return 0;
}
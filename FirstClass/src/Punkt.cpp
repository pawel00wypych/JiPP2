#include "Punkt.h"
#include <iostream>
#include <math.h>

using namespace std;

double Punkt::distance() {
    return sqrt(x*x+y*y);
}

Punkt::Punkt(double X,double Y)
    :x(X),y(Y)
{
}

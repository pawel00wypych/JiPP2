#include <iostream>
#include "Figura.h"

using namespace std;

int main()
{
    Figura *circle = new Circle(1);
    Figura *rectangle = new Rectangle(5, 18);
    Kwadrat kw1("czerwony","kwadddrat",3);
    cout<<"kw1 pole ="<<kw1.getArea()<<"kw1 obwod="<<kw1.obwod()<<" "<<endl;
    cout << "Circle area: " << circle->getArea() << endl;
    cout << "Rectangle area: " << rectangle->getArea() << endl;

    return 0;
}
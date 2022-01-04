#include "Utwor.h"
#include <list>


int main()
{
    list <Utwor> utwory;
    list <Utwor>::iterator it;

    it = utwory.begin();
    (*it).setTitle();
    (*it).print();

    return 0;
}

#include "Utwor.h"
#include <list>
#include <iterator>

int main()
{
    list <Utwor> utwory;
    list <Utwor>::iterator it;
    string ut;
    Utwor piosenka("kisne");
    it = utwory.begin();
    *it = utwory.emplace_back("kaktus");
    it->print();
    it++;
    *it = utwory.emplace_back("krawat");
    it->print();
    return 0;
}

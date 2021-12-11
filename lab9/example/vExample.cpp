#include <iostream>
#include <list>
#include <iterator>
#include "Stop.h"
#include "Line.h"

using namespace std;

int main() {
    /*list<Stop> stops;
    list<Stop>::iterator A;

    //stops.reserve(13);
    A = stops.begin();
    *A = stops.emplace_back(1, "Politechnika", 50.1, 50.2); A++;
    *A = stops.emplace_back(2, "Nowy Kleparz", 50.2, 50.2); A++;
    *A = stops.emplace_back(3, "Plac Inwalidów", 50.2, 50.2); A++;
    *A = stops.emplace_back(4, "Urzędnicza", 50.2, 50.2); A++;
    *A = stops.emplace_back(5, "Biprostal", 50.2, 50.2); A++;
    *A = stops.emplace_back(6, "Uniwersytet Pedagogiczny", 50.2, 50.2);

   Line l1("P", "Podchorążych");
  //  A = stops.begin();
   // *A).addStop();
  //l1.addStop(&stops);
  //  l1.addStop(&stops[3]);
   // l1.addStop(&stops[4]);
   // l1.addStop(&stops[5]);


    l1.print();

    cout << "---------------------------------------" << endl;
    *A = stops.emplace_back(7, "Bratysławska", 50.2, 50.2);A++;
    *A =  stops.emplace_back(8, "Teatr Bagatela", 50.2, 50.2);A++;
    *A = stops.emplace_back(9, "Stary Kleparz", 50.2, 50.2);A++;
    *A =  stops.emplace_back(10, "Teatr Słowackiego", 50.2, 50.2);A++;
    *A =  stops.emplace_back(11, "Teatr Słowackiego1", 50.2, 50.2);A++;
    *A = stops.emplace_back(12, "Teatr Słowackiego2", 50.2, 50.2);A++;
    *A = stops.emplace_back(13, "Teatr Słowackiego3", 50.2, 50.2);

    //l1.print();

    cout << "---------------------------------------" << endl;
   // stops[0].print();
    //stops[1].print();
   // stops[2].print();
    for(A = stops.begin(); A != prev(stops.end()); ++A)
    {
       (*A).print();
    }*/

    list<char> tekst = {'a','b','c','d','e','f','g','h','i','j','k'};
    list<char>::iterator it;
    for(it = tekst.begin();it != tekst.end(); it++)
    {
        *it = toupper(*it);
        cout<<*it<<endl;
    }

    return 0;
}
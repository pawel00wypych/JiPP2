#include <iostream>
#include <cstdlib>
#include <string.h>
#include "calc.h"

using namespace std;
void error();

int main(int argc, char *argv[])
{
    int tab[argc];
    for(int i=1;i<argc;i++)
    {
        tab[i]=stoi(argv[i]);
        cout<<tab[i]<<endl;
    }
    cout << "SIMPLE CALCULATOR" << endl;
    cout << "Wybierz funkcje:" << endl;
    cout << "1 - ADD" << endl;
    cout << "2 - SUBTRACT" << endl;
    cout << "3 - VOLUME" << endl;
    cout << "4 - HELP" << endl;

    switch (tab[1]) {
            case 1:
                if(argc!=4)
                    error();
                 cout<< add(tab[2],tab[3])<<endl;
                break;
            case 2:
                if(argc!=4)
                    error();
                cout<<subtract(tab[2],tab[3])<<endl;
                break;
            case 3:
                if(argc!=6)
                    error();
                if(tab[2]<0 || tab[3]<0 || tab[4]<0 || tab[5]<0)
                {
                    cout<<"Dlugosc nie moze byc ujemna!\n";
                    exit(0);
                }
                cout<<volume(tab[2],tab[3],tab[4],tab[5])<<endl;
                break;
            case 4:
                help();
                break;
            default:
                cout << "Zly wybor!" << endl;
                break;
        }
    return 0;
}

void error()
{
    cout<<"\nbledna ilosc argumentow dla tej operacji!\n";
    exit(1);
}
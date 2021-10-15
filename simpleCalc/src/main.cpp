#include <iostream>
#include "calc.h"

using namespace std;

int main(int argc, char *argv[])
{
    int a=1,b=2,h=2,H=2;
    cout << "SIMPLE CALCULATOR" << endl;
    int l;
    while(true) {
        cout << "Wybierz funkcje:" << endl;
        cout << "1 - ADD" << endl;
        cout << "2 - SUBTRACT" << endl;
        cout << "3 - VOLUME" << endl;
        cout << "4 - HELP" << endl;
        cout<<"0 - exit"<<endl;

        cin >> l;
        switch (l) {
            case 0:
                exit(0);
                break;
            case 1:
               cout<< add(a,b)<<endl;
                break;

            case 2:
                cout<<subtract(a,b)<<endl;
                break;
            case 3:
                cout<<volume(a,b,h,H)<<endl;
                break;
            case 4:
                help();
                break;
            default:
                cout << "Zly wybor!" << endl;
                break;
        }
    }
}
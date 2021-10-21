#include <iostream>
//#include <cstdlib>
//#include <string.h>


using namespace std;

void bledy(int x,int y)
{
        try {
            if (y == 0) {     throw "mianownik nie moze byc zerem!"; }
            if(x%y!=0){       throw"Podane liczby tworza ulamek!";   }
            if(x<0 || y<0){   throw"liczby nie moga byc ujemne!";    }
        }
        catch (const char *msg ) {
            cout<<msg<< endl;
            exit(-1);
        }
}
int bledyStoi(string tekst)
{
    int t;
    try{
        t=stoi(tekst);
        cout<<"Poprawnie zamieniono tekst "<<tekst<<" na liczbe:"<<t<<endl;
        return t;
    }
    catch(invalid_argument e) {
        cout << "Nie udalo sie zamienic \"" <<tekst<< "\" na liczbe, blad std::invalid_argument:\n" << e.what() << "\n";
        exit(-2);
    }
    catch(out_of_range e) {
        cout << "Nie udalo sie zamienic \"" <<tekst<< "\" na liczbe, blad std::out_of_range:\n" << e.what() << "\n";
        exit(-2);
    }
}
int dzielenie(int x,int y)
{
        return x/y;
}

int main()
{
    int a,b;
    string tekst;
    cout<<"Podaj a,b:";
    cin>>a>>b;
    bledy(a,b);
    cout<<"Wynik dzielenia:"<<dzielenie(a,b)<<endl;
    cout<<"Podaj tekst:";
    cin>>tekst;
    bledyStoi(tekst);
    return 0;
}


#include <iostream>

using namespace std;

int counter() {
     int i = 10;
    ++i;
    return i;
}

int main(){

        cout<< "Wywołanie 1: " << counter() <<endl;
        cout<< "Wywołanie 2: " << counter() <<endl;
        cout<< "Wywołanie 3: " << counter() <<endl;
        cout<< "Wywołanie 4: " << counter() <<endl;
        cout<< "Wywołanie 5: " << counter() <<endl;
        cout<< "Wywołanie 6: " << counter() <<endl;


    return 0;
}
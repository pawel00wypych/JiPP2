//
// Created by HP on 21.01.2022.
//

#include "../include/Error.h"
#include "Menu.h"

Error::Error() {

}

Error::~Error() {

}

int Error::isInt() {
    int var=0;
    while(!(cin>>var))
    {
        cout<<"It is not a number!\n";
        exit(-1);
    }
    return var;
}

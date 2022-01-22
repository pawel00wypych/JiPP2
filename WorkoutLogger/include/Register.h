//
// Created by HP on 21.01.2022.
//

#ifndef FIRSTLIBCALL_REGISTER_H
#define FIRSTLIBCALL_REGISTER_H

#include <iostream>
#include <string.h>
#include <fstream>
#include "Menu.h"
#include <sys/stat.h>

using namespace std;
static ofstream acc;

class Register {
private:
    string name="",surname="";
public:
    Register();
    Register(string,string);
    ~Register();
    void setName();
    void setSurname();
    void makeAcc();
};




#endif //FIRSTLIBCALL_REGISTER_H

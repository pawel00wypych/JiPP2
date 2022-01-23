//
// Created by HP on 21.01.2022.
//

#ifndef FIRSTLIBCALL_REGISTER_H
#define FIRSTLIBCALL_REGISTER_H

#include <fstream>
#include <direct.h>
#include "Menu.h"

using namespace std;
static ofstream acc;

/*
 * class Register includes methods:
 * setSurname, setName, makeAcc
 * fields:
 * string name,surname
 */
class Register {
private:
    string name,surname;
public:
    Register();
    Register(string,string);
    ~Register();
    /**
     * sets string name using cin>>
     */
    void setName();

    /**
     * sets string surname using cin>>
     */
    void setSurname();

    /**
     * creates account by creating directory and txt file
     * named as: name+surname
     */
    void makeAcc();
};




#endif //FIRSTLIBCALL_REGISTER_H

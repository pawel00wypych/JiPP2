//
// Created by HP on 21.01.2022.
//

#ifndef FIRSTLIBCALL_LOGIN_H
#define FIRSTLIBCALL_LOGIN_H
#include <iostream>
#include <string.h>
#include "Menu.h"
#include <fstream>

using namespace std;
static ifstream file;

class Login {
private:
    string name="",surname="";
    int squat = 100;
public:
    Login();
    Login(string,string);
    ~Login();
    void setName();
    void setSurname();
    int checkIfExist();
    void openAcc();
    void showData();

};


#endif //FIRSTLIBCALL_LOGIN_H

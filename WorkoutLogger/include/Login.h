//
// Created by HP on 21.01.2022.
//

#ifndef FIRSTLIBCALL_LOGIN_H
#define FIRSTLIBCALL_LOGIN_H
#include <iostream>
#include <string.h>
#include "Menu.h"
#include "Error.h"
#include <fstream>
#include "Exercise.h"
#include "MainExercise.h"

using namespace std;
static ifstream file;

class Login {
private:
    enum appMode {
        SHOWLOGMENU,
        ADDACCESSORYEXERCISE,
        ADDDMAINEXERCISE,
        ADDWORKOUT,
        CREATEWORKOUT,
        SHOWHISTORY,
        SHOWEXERCISES,
        LOGOUT
    };
    string name,surname;
public:
    Login();
    Login(string,string);
    ~Login();
    void setName();
    void setSurname();
    int checkIfExist();
    void openAcc();
    void showData();
    void showLogMenu();
    void logMenu();
};


#endif //FIRSTLIBCALL_LOGIN_H

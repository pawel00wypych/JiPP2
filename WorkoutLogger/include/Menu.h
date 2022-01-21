//
// Created by HP on 21.01.2022.
//

#ifndef FIRSTLIBCALL_MENU_H
#define FIRSTLIBCALL_MENU_H

#include <string.h>
#include <iostream>
#include <time.h>
#include <fstream>
#include "Error.h"
#include "Register.h"
#include "Login.h"

using namespace std;
static ofstream users;
const std::string currentDateTime();


class Menu {
    friend class Register;
private:
    string name,surname;
    enum appMode {
        LOGIN,
        REGISTER,
        SHOWMENU,
        EXIT
    };

    int option;
public:
    Menu();
    Menu(string,string);
    ~Menu();
    static void showMenu();
    void getOption();
    Error *err= new Error();
    string getName();
    string getSurname();
};


#endif //FIRSTLIBCALL_MENU_H

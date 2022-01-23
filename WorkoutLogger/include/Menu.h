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
#include <direct.h>

using namespace std;

/**
 * function returns actual date
 * @return const string
 */
const std::string currentDateTime();
static ofstream users;

/*
 *class Menu gives methods:
 * getName, getSurname, getOption, showMenu
 * fields:
 * string name,surname,user
 *  enum appMode
 */
class Menu {
private:
    string name,surname,user;
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

    /**
     * function shows possible choices
     */
    static void showMenu();

    /**
     * function is interface which gives user access
     * to other parts off application such as:
     * login, register, exit
     */
    void getOption();

    /**
     * function returns class field = name
    * @return string name
    */
    string getName();

    /**
     * function returns class field = surname
     * @return string surname
     */
    string getSurname();
};


#endif //FIRSTLIBCALL_MENU_H

//
// Created by HP on 21.01.2022.
//

#ifndef FIRSTLIBCALL_LOGIN_H
#define FIRSTLIBCALL_LOGIN_H
#include "Menu.h"
#include "Error.h"
#include <fstream>
#include "Exercise.h"
#include "AccessoryExercise.h"
#include "MainExercise.h"
#include "Workout.h"

using namespace std;
static ifstream file;
/**
 * class gives methods:
 * void setName();
    void setSurname();
    void checkIfExist();
    void showLogMenu();
    void logMenu();
    void showExercises();
    fields:
    enum appMode
    string name,surname,user
 */
class Login {
private:
    enum appMode {
        SHOWLOGMENU,
        ADDACCESSORYEXERCISE,
        ADDDMAINEXERCISE,
        SAVEWORKOUT,
        CREATEWORKOUT,
        SHOWHISTORY,
        SHOWEXERCISES,
        GETVOLUME,
        LOGOUT
    };
    string name,surname,user;
public:
    Login();
    Login(string,string);
    ~Login();

    /*
     * sets name using cin>>
     */
    void setName();

    /**
     * sets surname using cin>>
     */
    void setSurname();

    /**
     * checks if file exists
     */
    void checkIfExist();

    /**
     * shows options included in user menu
     */
    void showLogMenu();

    /**
     * gives acces to main part  of application
     * add workouts, exercises, view files
     */
    void logMenu();

    /**
     * reads exercises from txt file
     */
    void showExercises();
};


#endif //FIRSTLIBCALL_LOGIN_H

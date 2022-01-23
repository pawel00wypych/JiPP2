//
// Created by HP on 22.01.2022.
//

#ifndef FIRSTLIBCALL_MAINEXERCISE_H
#define FIRSTLIBCALL_MAINEXERCISE_H
#include <iostream>
#include "Exercise.h"
#include "Menu.h"
#include <fstream>

static fstream mainex;
using namespace std;

/*
 * class inherits from Exercise, gives method:
 * saveData
 * field:
 * string user
 */
class MainExercise: public Exercise {
private:
    string user;

public:
    MainExercise();
    MainExercise(string,string);
    ~MainExercise();

    /*
     * write name, weight, date into userM_EX.txt
     */
    void saveData();
};


#endif //FIRSTLIBCALL_MAINEXERCISE_H

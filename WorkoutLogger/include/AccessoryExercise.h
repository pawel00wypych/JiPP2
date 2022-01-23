//
// Created by HP on 23.01.2022.
//

#ifndef FIRSTLIBCALL_ACCESSORYEXERCISE_H
#define FIRSTLIBCALL_ACCESSORYEXERCISE_H
#include "Exercise.h"
#include "Login.h"

using namespace std;
static fstream accex;

/*
 * class inherits from Exercise, gives method:
 * saveData
 * field:
 * string user
 */
class AccessoryExercise: public Exercise {
private:
    string user;

public:
    AccessoryExercise();
    AccessoryExercise(string,string);
    ~AccessoryExercise();

    /*
   * write name, weight, date into userACC_EX.txt
   */
    void saveData();
};


#endif //FIRSTLIBCALL_ACCESSORYEXERCISE_H

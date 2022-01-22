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

class MainExercise: public Exercise {
private:
    string user;
    string name;
//    int weight;
  //  double weight_d;

public:
    MainExercise();
    MainExercise(string,string);
    ~MainExercise();
    string getName();
    void saveData();
};


#endif //FIRSTLIBCALL_MAINEXERCISE_H

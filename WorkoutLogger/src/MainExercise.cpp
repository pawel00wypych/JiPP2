//
// Created by HP on 22.01.2022.
//

#include "MainExercise.h"

MainExercise::MainExercise() {

}

MainExercise::MainExercise(string name,string surname) {
    this->user=name+surname;
}

MainExercise::~MainExercise() {

}

void MainExercise::saveData() {
    string stringpath = "usersDIR/"+user+"DIR/"+user+"M_EX.txt";
    mainex.open (stringpath,std::ios_base::app);
    mainex<<currentDateTime()<<"\n";
    mainex<<getWeight()<<"\n";
    mainex<<getName()<<"\n";
    mainex.close();
}

string MainExercise::getName() {
    return name;
}

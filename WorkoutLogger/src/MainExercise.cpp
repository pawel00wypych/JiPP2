//
// Created by HP on 22.01.2022.
//

#include "MainExercise.h"

MainExercise::MainExercise() {

}

MainExercise::MainExercise(string name,string surname):user(name+surname) {

}

MainExercise::~MainExercise() {

}

void MainExercise::saveData() {
    string stringpath = "usersDIR/"+user+"DIR/"+user+"M_EX.txt";
    mainex.open (stringpath,std::ios_base::app);
    if(mainex.is_open()) {
        mainex << currentDateTime() << "\n";
        mainex << getName() << "\n";
        mainex << getWeight() << "\n";
        mainex.close();
    }else cout<<stringpath<<" open ERROR\n";

    return;
}


//
// Created by HP on 23.01.2022.
//

#include "AccessoryExercise.h"


AccessoryExercise::AccessoryExercise() {

}

AccessoryExercise::AccessoryExercise(string name, string surname): user(name+surname) {

}

AccessoryExercise::~AccessoryExercise() {

}

void AccessoryExercise::saveData() {
    string stringpath = "usersDIR/"+user+"DIR/"+user+"ACC_EX.txt";
    accex.open (stringpath,std::ios_base::app);
    if(accex.is_open()) {
        accex << currentDateTime() << "\n";
        accex << getName() << "\n";
        accex << getWeight() << "\n";
        accex.close();
        return;
    }
    cout<<stringpath<<" open ERROR\n";
}

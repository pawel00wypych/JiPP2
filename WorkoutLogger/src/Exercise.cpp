//
// Created by HP on 22.01.2022.
//

#include "Exercise.h"

Exercise::Exercise():name("") {

}

Exercise::~Exercise() {

}

Exercise::Exercise(string name,double w):name(name),weight_d(w) {

}

void Exercise::showData() {
    cout<<"name:"<<name<<"\n";
    cout<<"weight [kg]:"<<getWeight()<<"\n";
    cout<<"weight_d [kg]:"<<getWeight_d()<<"\n";
}

int Exercise::getWeight() {
    return weight;
}

double Exercise::getWeight_d() {
    return weight_d;
}

void Exercise::setWeight(int) {
    cout<<"weight [kg]:";
    cin>>weight;
}

void Exercise::setWeight(double) {
    cout<<"weight_d [kg]:";
    cin>>weight_d;
}

void Exercise::setName() {
    cout<<"exercise name:";
    char buff[80];
    getchar();
    if(gets(buff)==NULL)
    {
        cout<<"Exercise - setName ERROR - gets()\n";
        exit(1);
    }
    string n(buff);
    name = n;
}

string Exercise::getName() {
    return name;
}

void Exercise::saveData() {

}

void Exercise::setReps() {
    cout<<"reps:";
    cin>>reps;
}

void Exercise::setSets() {
    cout<<"sets:";
    cin>>sets;
}

int Exercise::getReps() {
    return reps;
}

int Exercise::getSets() {
    return sets;
}

bool Exercise::operator==(const Exercise &rhs) const {
    if(weight_d == rhs.weight_d && name == rhs.name)
    {
        return true;
    }
    return false;
}


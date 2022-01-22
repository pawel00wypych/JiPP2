//
// Created by HP on 22.01.2022.
//

#include "Exercise.h"

Exercise::Exercise() {

}

Exercise::~Exercise() {

}

Exercise::Exercise(string name):name(name) {

}

void Exercise::showData() {
    cout<<"name:"<<name<<"\n";
    cout<<"weight:"<<getWeight()<<"\n";
    cout<<"weight_d:"<<getWeight_d()<<"\n";
}

int Exercise::getWeight() {

    return weight;
}

double Exercise::getWeight_d() {
    return weight_d;
}

void Exercise::setWeight(int) {
    cout<<"weight:";
    cin>>this->weight;
}

void Exercise::setWeight(double) {
    cout<<"weight_d:";
    cin>>this->weight_d;
}

void Exercise::setName() {
    cout<<"name:";
    cin>>this->name;
}

string Exercise::getName() {
    return name;
}


//
// Created by HP on 21.01.2022.
//

#include "Register.h"

Register::Register(string name,string surname):name(name),surname(surname){

}

Register::~Register() {

}

void Register::setName() {
    cout<<"Name:";
    cin>>name;
}

void Register::setSurname() {
    cout<<"Surname:";
    cin>>surname;
}

void Register::makeAcc() {

    users.open ("users.txt",std::ios_base::app);
    users<<currentDateTime()<<"\n";
    users<<name<<" "<<surname<<"\n";
    users.close();
    acc.open(name+surname+".txt",std::ios_base::app);
    acc<<currentDateTime()<<" created\n";
    acc.close();
    users.close();
}

Register::Register() {

}

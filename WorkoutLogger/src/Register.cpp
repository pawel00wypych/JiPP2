//
// Created by HP on 21.01.2022.
//

#include "Register.h"
Register::Register() {

}

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

    users.open ("usersDIR/users.txt",std::ios_base::app);
    users<<currentDateTime()<<"\n";
    users<<name<<" "<<surname<<"\n";
    users.close();
    string stringpath = "usersDIR/"+name+surname+"DIR/";
    mkdir(stringpath.c_str());
    acc.open(stringpath + name+surname+".txt",std::ios_base::app);
    acc<<currentDateTime()<<" created\n";
    acc.close();
    users.close();
}


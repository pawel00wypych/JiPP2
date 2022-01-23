//
// Created by HP on 21.01.2022.
//

#include "Register.h"
Register::Register():name(""),surname("") {

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
    if(!users.is_open())
    {
        cout<<"usersDIR/users.txt - Error while opening\n";
        users.close();
        return;
    }
    users<<currentDateTime()<<"\n";
    users<<name<<" "<<surname<<"\n";
    users.close();

    string stringpath = "usersDIR/"+name+surname+"DIR/";
    if(_mkdir(stringpath.c_str()) == -1)
    {
        if(errno == EEXIST)
        {
            perror("mkdir Error while creating account");
        }
        if(errno == ENOENT)
        {
            perror("mkdir Error while creating account");
        }
        return;
    }

    acc.open(stringpath + name+surname+".txt",std::ios_base::app);
    if(!acc.is_open())
    {
        cout<<stringpath + name+surname+".txt Error while opening\n";
        acc.close();
        return;
    }
    acc<<currentDateTime()<<" created\n";
    acc.close();
}


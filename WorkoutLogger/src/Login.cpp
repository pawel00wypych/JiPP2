//
// Created by HP on 21.01.2022.
//

#include "Login.h"

Login::Login() {

}

Login::Login(string name, string surname):name(name),surname(surname) {

}

Login::~Login() {

}

void Login::setName() {
    cout<<"Name:";
    cin>>name;
}

void Login::setSurname() {
    cout<<"Surname:";
    cin>>surname;
}

void Login::openAcc() {
    //ifstream file(name+surname+".txt");
    if(checkIfExist() == -1){
        exit(-1);
    };
    showData();

}

int Login::checkIfExist() {
    ifstream file(name+surname+".txt");
    if(!file.is_open())
    {
        cout<<"User is not registered or there is a problem with ifstream\n";
        file.close();
        return -1;
    }
    file.close();
    return 0;
}

void Login::showData() {
    string line;
    ifstream file(name+surname+".txt");
    if (file.is_open())
    {
        while ( getline (file,line) )
        {
            cout << line << '\n';
        }
        file.close();
    }

    else cout << "Unable to open file";
}

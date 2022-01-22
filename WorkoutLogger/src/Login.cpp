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
    if(checkIfExist() == -1){
        return ;
    };
    logMenu();
}

int Login::checkIfExist() {
    ifstream file("usersDIR/"+name+surname+"DIR/"+name+surname+".txt");
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
    ifstream file("usersDIR/"+name+surname+"DIR/"+name+surname+".txt");
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

void Login::showLogMenu() {
    cout<<"***************************"<<name<<" "<<surname<<"***************************"<<endl;
    cout<<"\n\n";
    cout<<SHOWLOGMENU<<" - show logmenu\n";
    cout<<ADDACCESSORYEXERCISE<<" - add accessory exercise\n";
    cout<<ADDDMAINEXERCISE<<" - add main exercise\n";
    cout<<ADDWORKOUT<<" - add workout\n";
    cout<<CREATEWORKOUT<<" - create workout\n";
    cout<<SHOWHISTORY<<" - show history of workouts\n";
    cout<<SHOWEXERCISES<<" - show exercises\n";
    cout<<LOGOUT<<" - logout\n";
}

void Login::logMenu() {
    MainExercise ex1(name,surname);
    int option = 0;
    while(1) {
        showLogMenu();
        cout<<"Choose:";
        option = err->isInt();
        switch (option) {
            case SHOWLOGMENU:
                break;
            case ADDACCESSORYEXERCISE:
                break;
            case ADDDMAINEXERCISE:
                //ex1 = new MainExercise(name,surname);
                ex1.setName();
                ex1.setWeight(option);
               // ex1->setWeight((double)option);
                ex1.showData();
                ex1.saveData();
                break;
            case ADDWORKOUT:
                break;
            case CREATEWORKOUT:
                break;
            case SHOWEXERCISES:
                break;
            case LOGOUT:
                return;
            default:
                cout<<"Wrong choice!\n";
                break;
        }
    }
}

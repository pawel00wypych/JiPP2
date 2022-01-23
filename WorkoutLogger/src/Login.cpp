//
// Created by HP on 21.01.2022.
//

#include "Login.h"

Login::Login(): name(""),surname("") {

}

Login::Login(string name, string surname):name(name),surname(surname),user(name+surname) {

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

void Login::checkIfExist() {
    user = name + surname;
    file.open("usersDIR/"+user+"DIR/"+user+".txt");
    if(!file.good())
    {
        cout<<"User is not registered or there is a problem with ifstream\n";
        file.close();
        return;
    }
    file.close();
    logMenu();
}

void Login::showExercises() {
    string line;
    file.open("usersDIR/"+user+"DIR/"+user+"M_EX.txt");
    if (file.is_open())
    {
        cout<<"Main exercises:\n";
        while ( getline (file,line) )
        {
            cout << line << '\n';
        }
        file.close();
    }
    else cout << "Unable to open "<<user<<"M_EX.txt\n";

    ifstream file2("usersDIR/"+user+"DIR/"+user+"ACC_EX.txt");
    if (file2.is_open())
    {
        cout<<"Accessory exercises:\n";
        while ( getline (file2,line) )
        {
            cout << line << '\n';
        }
        file2.close();
    }
    else cout << "Unable to open "<<user<<"ACC_EX.txt\n";
    cout<<"\nPress [ENTER]";
    getchar();getchar();
}

void Login::showLogMenu() {
    cout<<"***************************"<<name<<" "<<surname<<"***************************"<<endl;
    cout<<"\n\n";
    cout<<SHOWLOGMENU<<" - show logmenu\n";
    cout<<ADDACCESSORYEXERCISE<<" - add accessory exercise\n";
    cout<<ADDDMAINEXERCISE<<" - add main exercise\n";
    cout<<SAVEWORKOUT<<" - save created workout\n";
    cout<<CREATEWORKOUT<<" - create new workout\n";
    cout<<SHOWHISTORY<<" - show history of workouts\n";
    cout<<SHOWEXERCISES<<" - show created exercises\n";
    cout<<GETVOLUME<<" - show volume of all saved workouts\n";
    cout<<LOGOUT<<" - logout\n";
}

void Login::logMenu() {
    MainExercise ex1(name,surname);
    AccessoryExercise aex1(name,surname);
    Exercise *e1 = &ex1;
    Exercise *e2 = &aex1;

    Exercise e3("",2.5),e4("",2.5);
    Workout w1(name,surname);

    if(e3==e4)
    {
        cout<<"Objects of class Exercise are equal\n";
    }else cout<<"Objects of class Exercise are not equal\n";

    int option = 0;
    while(true) {
        showLogMenu();
        cout<<"Choose:";
        option = err->isInt();
        switch (option) {
            case SHOWLOGMENU:
                break;
            case ADDACCESSORYEXERCISE:
                e2->setName();
                e2->setWeight(option);
                e2->setWeight((double)option);
                e2->showData();
                e2->saveData();
                break;
            case ADDDMAINEXERCISE:
                e1->setName();
                e1->setWeight(option);
                e1->setWeight((double)option);
                e1->showData();
                e1->saveData();
                break;
            case SAVEWORKOUT:
                w1.saveWorkout();
                break;
            case CREATEWORKOUT:
                w1.createWorkout();
                break;
            case SHOWHISTORY:
                w1.showHistory();
                break;
            case SHOWEXERCISES:
                showExercises();
                break;
            case GETVOLUME:
                cout<<"Volume [kg]:"<<w1.getVolume()<<"\n";
                cout<<"Press [ENTER]";
                getchar();getchar();
                break;
            case LOGOUT:
                return;
            default:
                cout<<"Wrong choice!\n";
                break;
        }
    }
}



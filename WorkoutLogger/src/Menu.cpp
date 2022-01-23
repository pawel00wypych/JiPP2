#include "../include/Menu.h"
#include <exception>

Menu::~Menu() {

}

Menu::Menu():name(""),surname("") {

}

Menu::Menu(string name,string surname):name(name),surname(surname),user(name+surname){

    //system("mkdir usersDIR");
    string stringpath = "usersDIR/";
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

    users.open("usersDIR/users.txt", std::ios_base::app);
    if(!users.is_open())
    {
        cout<<"usersDIR/users.txt - error while trying to open\n";
        users.close();
    }
    users.close();
}

void Menu::showMenu() {
    cout<<"***************************"<<"MENU"<<"***************************"<<endl;
    cout<<"\n\n";
    cout<<LOGIN<<" - login\n";
    cout<<REGISTER<<" - register\n";
    cout<<SHOWMENU<<" - show menu\n";
    cout<<EXIT<<" - exit\n";
}


void Menu::getOption() {

    Register *us = new Register();
    Login *log = new Login();
    option = 0;

    while(true) {
        showMenu();
        cout<<"Choose:";
        option = err->isInt();
        switch (option) {
            case LOGIN:
                    log->setName();
                    log->setSurname();
                    log->checkIfExist();
                break;
            case REGISTER:
                   us->setName();
                   us->setSurname();
                   us->makeAcc();
                break;
            case SHOWMENU:
                break;
            case EXIT:
                cout<<"***************************"<<"APP CLOSED"<<"***************************"<<endl;
                    exit(0);
            default:
                cout<<"Wrong choice!\n";
                break;
        }
    }

}

const std::string currentDateTime() {
    time_t     now = time(nullptr);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

string Menu::getName() {
    return surname;
}

string Menu::getSurname() {
    return surname;
}

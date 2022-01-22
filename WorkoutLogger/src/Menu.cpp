#include "../include/Menu.h"


Menu::~Menu() {

}

Menu::Menu(string name,string surname):name(name),surname(surname){
    system("mkdir usersDIR");
    users.open ("usersaDIR/users.txt",std::ios_base::app);
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

    currentDateTime();
    Register *us = new Register();
    Login *log = new Login();
    option = 0;
    while(1) {
        showMenu();
        cout<<"Choose:";
        Menu::option = err->isInt();
        switch (option) {
            case LOGIN:
                    log->setName();
                    log->setSurname();
                    log->openAcc();
                break;
            case REGISTER:
                   us->setName();
                   us->setSurname();
                   us->makeAcc();
                break;
            case SHOWMENU:
                    showMenu();
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
    time_t     now = time(0);
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

Menu::Menu() {

}
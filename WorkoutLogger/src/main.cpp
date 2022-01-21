#include <iostream>
#include <Error.h>
#include <Menu.h>

using namespace std;


int main(int argc,char* argv[])
{
    Error err;
    if(argc != 3){
        cout<<"Wrong number of elements, required:\n";
        cout<<"./WorkoutLogger name surname\n";
        exit(-1);
    }

    Menu *menu = new Menu(argv[1],argv[2]);

    while(1)
    {
        cout<<"*************************************"<<"WorkoutLogger"<<"*************************************"<<endl;
        menu->showMenu();
        menu->getOption();
    }
}

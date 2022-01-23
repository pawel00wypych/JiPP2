#include <iostream>
#include <Menu.h>

using namespace std;
template <typename T>
void show(T a, T b)
{
    cout<<"function call parameters:\n";
    cout<<a<<"\n";
    cout<<b<<"\n";
};

int main(int argc,char* argv[])
{
    if(argc != 3){
        cout<<"Wrong number of elements, required:\n";
        cout<<"./WorkoutLogger name surname\n";
        exit(-1);
    }

    show(argv[1],argv[2]);

    Menu *menu = new Menu(argv[1],argv[2]);

    while(1)
    {
        cout<<"*************************************"<<"WorkoutLogger"<<"*************************************"<<endl;
        menu->getOption();
    }
}

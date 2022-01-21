#include <iostream>
#include <memory>

using namespace std;
template<typename T>
class UPtr{
    T *data;

public:
    //konstrukt

    //dostep do danych

    //destrukt
    UPtr(const Uptr&) = delete;

    UPtr operator=(UPtr &) = delete;
};

int main ()
{
    unique_ptr<int> p(new int);

    return 0;
}
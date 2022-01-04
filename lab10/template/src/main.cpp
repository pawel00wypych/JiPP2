#include <iostream>
#include "Array.h"

using namespace std;

template <typename T>
T my_min(T a,T b)
{
    if(a<b)
        return a;
    return b;
}

template <typename T>
T my_max(T a,T b)
{
    if(a>b)
        return a;
    return b;
}

template <typename T>
T printArray(T *a,int size)
{
   for(int i=0;i<size;i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<endl;
}

template <typename T>
T printMatrix(T **a,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    cout<<my_min(3,10)<<endl;
    cout<<my_min(3.1,2.0)<<endl;
    Array arr(int,4);
    arr.setArray();
    int* a;
    a = new [];
    a[0] = 1;
    a[1] = 4;
    a[2] = 9;

    printArray(&a,3);
    return 0;
}
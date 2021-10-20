#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int losowa(int a,int b)
{
    return rand()%(b-a+1)+a;
}

int max(int tab[])
{
    int max;
    for(int i=0;i<100;i++)
    {
        if(tab[i]>max)
            max=tab[i];
    }
    return max;
}

void odwrotna(int tab[])
{
    int pom;
    for(int i=0,j=99;i<j;i++,j--)
    {
        pom=tab[i];
        tab[i]=tab[j];
        tab[j]=pom;
    }
}
int main()
{
    srand(time(NULL));
    int *tablica = new int [100];

    for(int i=0;i<100;i++)
    {
        tablica[i]=losowa(1,100);
        cout<<i<<" wartosc tablicy:"<<tablica[i]<<endl;
    }

    cout<<"Najwieksza wartosc w tablicy to:"<<max(tablica)<<endl;
    odwrotna(tablica);
    for(int i=0;i<100;i++)
    {
        cout<<i<<" wartosc tablicy:"<<tablica[i]<<endl;
    }
    delete [] tablica;
    return 0;
}
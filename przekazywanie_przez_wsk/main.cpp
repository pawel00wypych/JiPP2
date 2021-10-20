#include <iostream>

using namespace std;
void srednia(int *l1 ,int *l2,double *w)
{
    *w=(*l1+*l2)/2.0;
}
void wypisz(double  *tab)
{
    for(int i=0;i<5;i++)
    {
        if(tab[i]>0)
            cout<<"tab["<<i<<"]="<<tab[i]<<endl;
    }
}

void sort(int *l1,int *l2,int *l3)
{
    int pom;
    if(*l2<*l3)
    {
        pom=*l2;
        *l2=*l3;
        *l3=pom;
    }
    if(*l1<*l2)
    {
        pom=*l1;
        *l1=*l2;
        *l2=pom;
    }
    if(*l2<*l3)
    {
        pom=*l2;
        *l2=*l3;
        *l3=pom;
    }
}
void zastap(int x,int *w)
{
    *w=x;
}
int main()
{
    int a,b,x=1,y=2,z=3,c=0;
    double wynik;
    int *wsk1=&a;
    int *wsk2=&b;
    double *wsk3=&wynik;
    double *tablica = new double [5];

    cout<<"Podaj a,b:";
    cin>>a>>b;
    srednia(wsk1,wsk2,wsk3);
    cout<<"Srednia a i b:"<<wynik<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Podaj "<<i+1<<" element tablicy:";
        cin>>tablica[i];
    }
    cout<<endl;
    wypisz(tablica);
    sort(&x,&y,&z);
    cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<endl;
    zastap(5,&c);
    cout<<"po zastapieniu wartosci c="<<c<<endl;
    delete [] tablica;
    return 0;
}
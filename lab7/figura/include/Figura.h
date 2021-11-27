#include <iostream>
#include <math.h>

#ifndef FIRSTLIBCALL_FIGURA_H
#define FIRSTLIBCALL_FIGURA_H

using namespace std;

class Figura {
protected:
    string kolor,nazwa;

public:
    Figura(){};
    Figura(string kolor,string nazwa):kolor("zielony"),nazwa("kwadrat"){};
    ~Figura(){};
};

class Kwadrat: public Figura {
protected:
    double bok;
public:
    Kwadrat(){};
    Kwadrat(double bok):Figura(),bok(bok){};
    double obwod()
    {return 4*bok;}
    double pole()
    {return bok*bok;}
    ~Kwadrat(){};
};

class Trojkat: public Figura {
protected:
    double a,b,c;
public:
    Trojkat(){};
    Trojkat(double a,double b,double c):Figura(),a(a),b(b),c(c){
        double max;
        max=a;
        if(max<b)max=b;
        if(max<c)max=c;
        if(max==a)
        {
            if(a>=c+b)
            {cout<<"boki nie spelniaja warunku trojkata!\n";exit(1);}
        }
        if(max==b)
        {
            if(b>=a+c)
            {cout<<"boki nie spelniaja warunku trojkata!\n";exit(1);}
        }
        if(max==c)
        {
            if(c>=a+b)
            {cout<<"boki nie spelniaja warunku trojkata!\n";exit(1);}
        }
    };
    double obwod()
    {return a+b+c;}
    double pole()
    {
        double p;
        p=0.5*(a+b+c);
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
    ~Trojkat(){};
};

#endif //FIRSTLIBCALL_FIGURA_H

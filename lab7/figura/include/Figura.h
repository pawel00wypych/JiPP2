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
    Figura(string kolor,string nazwa):kolor("nijaki"),nazwa("cos"){};
    virtual double getArea() = 0;
    ~Figura(){};
};

class Kwadrat: public Figura {
protected:
    double bok;
public:
    Kwadrat(){};
    Kwadrat(double bok):Figura(),bok(bok){kolor="zielony"; nazwa="kwadrat";};
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

class Circle:  public Figura{
protected:
    double r;
public:
    Circle(){};
    Circle(double r):r(r){if(r<0){cout<<"promien nie moze byc ujemny!\n";exit(1);}};
    virtual double getArea(){
        return 3.14*r*r;
    };

    ~Circle();
};

class Rectangle:  public Figura{
protected:
    double a,b;
public:
    Rectangle(){};
    Rectangle(double a,double b):a(a),b(b){};
    virtual double getArea(){
        return a*b;
    };

    ~Rectangle();
};
#endif //FIRSTLIBCALL_FIGURA_H

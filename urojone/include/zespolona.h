//
// Created by HP on 22.11.2021.
//

#ifndef FIRSTLIBCALL_ZESPOLONA_H
#define FIRSTLIBCALL_ZESPOLONA_H

#include <iostream>
#include<math.h>

using namespace std;

class Zespolona{
private:
    double r,im;
public:
    Zespolona(){};

    Zespolona(double r,double im): r(r), im(im) {}

    ~Zespolona();

    void print()

    {printf("%f %+fi\n",r,im);}
    Zespolona operator+(const Zespolona &rhs) const {
        return {r + rhs.r, im + rhs.im};
    }

    Zespolona &operator+=(const Zespolona &rhs) {//od razu z przypisaniem wartości jak dla zmiennych: a+=b -> a=a+b
        this->r = this->r + rhs.r;
        this->im = this->im + rhs.im;
        return *this;
    }

};


#endif //FIRSTLIBCALL_ZESPOLONA_H

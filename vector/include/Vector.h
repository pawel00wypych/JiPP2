//
// Created by HP on 16.11.2021.
//

#ifndef FIRSTLIBCALL_VECTOR_H
#define FIRSTLIBCALL_VECTOR_H

#include <iostream>
#include<math.h>

using namespace std;

class Vector {
private:
    double x=0, y=0;

public:
    Vector() {};

    Vector(double x, double y) : x(x), y(y) {}

    double length() {
        return sqrt(x * x + y * y);
    }

    Vector operator+(const Vector &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }

    Vector &operator+=(const Vector &rhs) {//od razu z przypisaniem wartości
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        return *this;
    }

    Vector operator!=(const Vector){
        x=-1*x;
        y=-1*y;
    }

    Vector operator-=(const Vector &rhs){
        x=-1*x;
        y=-1*y;
    }
    void print();
};


#endif //FIRSTLIBCALL_VECTOR_H

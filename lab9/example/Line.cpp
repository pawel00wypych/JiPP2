#include "Line.h"

Line::Line(const string &number, const string &direction) : number(number), direction(direction) {}

void Line::addStop(Stop *stop) {
    stops.push_back(stop);

}

void Line::print() {
    cout << "Line: " << number << " " << direction << endl;
    cout << "Stops:" <<endl;
}
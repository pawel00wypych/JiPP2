#include <iostream>
#include "Node.h"
#include "math.h"

using namespace std;

Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {}

void Node::display() {
    cout<< "x: " <<x << "\ty: " <<y <<"\n";
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}

double pointsDistance(Node a, Node b) {
    double d,dx,dy;
    dx=a.x-b.x;
    dy=a.y-b.y;
    d=pow(dx,2)+pow(dy,2);
    return sqrt(d);
}

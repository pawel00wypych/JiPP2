//
// Created by HP on 16.11.2021.
//

#ifndef FIRSTLIBCALL_NODE_H
#define FIRSTLIBCALL_NODE_H


class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

    friend double pointsDistance(Node a, Node b);
};

#endif //FIRSTLIBCALL_NODE_H

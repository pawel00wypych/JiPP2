//
// Created by HP on 22.01.2022.
//

#ifndef FIRSTLIBCALL_EXERCISE_H
#define FIRSTLIBCALL_EXERCISE_H

#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * class gives methods:
 * void setName();
    string getName();
    void setWeight(double);
    void setWeight(int);
    void setReps();
    void setSets();
    int getReps();
    int getSets();
    double getWeight_d();
    int getWeight();
    void showData();
    virtual void saveData();
    bool operator==(const Exercise &rhs) const;
    fields:
    string name;
    int weight;
    int sets, reps;
     double weight_d;
 */
class Exercise {
protected:
    string name;
    int weight;
    int sets, reps;
     double weight_d;
public:
    Exercise();
    Exercise(string ,double);
    ~Exercise();

    /**
     * sets name using cin>>
     */
    void setName();

    /**
     * returns name of exercise
     * @return string name
     */
    string getName();

    /**
     * sets weight type double with cin>>
     */
    void setWeight(double);

    /**
     * sets weight type int with cin>>
     */
    void setWeight(int);

    /**
     * sets reps type int with cin>>
     */
    void setReps();

    /**
     * sets series(sets) type int with cin>>
     */
    void setSets();

    /**
     * returns reps
     * @return int reps
     */
    int getReps();

    /*
     * return sets type int
     */
    int getSets();

    /*
     * return weight type double
     */
    double getWeight_d();

    /*
     * return weight type int
     */
    int getWeight();

    /**
     * shows name, weight int, weight double with cout<<
     */
    void showData();

    /**
     * gives possibility to overload mmethod, in other
     * case methods of inherited class would shadow this method
     */
    virtual void saveData();

    /*
     *overloaded operator == checks if two objects of this
     * class have equal names and weight, returns bool value
     */
    bool operator==(const Exercise &rhs) const;
};


#endif //FIRSTLIBCALL_EXERCISE_H

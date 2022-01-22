//
// Created by HP on 22.01.2022.
//

#ifndef FIRSTLIBCALL_EXERCISE_H
#define FIRSTLIBCALL_EXERCISE_H

#include <iostream>

using namespace std;

class Exercise {
private:
    string name;
    int weight;
     double weight_d;

protected:
    Exercise();
    Exercise(string);
    ~Exercise();
public:
   virtual void setName();
   virtual string getName();
  virtual  void setWeight(double);
    virtual void setWeight(int);
   virtual double getWeight_d();
   virtual int getWeight();
    virtual void showData();
};


#endif //FIRSTLIBCALL_EXERCISE_H

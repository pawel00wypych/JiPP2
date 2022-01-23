//
// Created by HP on 23.01.2022.
//

#ifndef FIRSTLIBCALL_WORKOUT_H
#define FIRSTLIBCALL_WORKOUT_H
#include "AccessoryExercise.h"
#include "MainExercise.h"
#include "Exercise.h"
#include <vector>

using namespace std;
static ofstream work,f_out;
static ifstream f_in;

/*
 * class gives methods:
 * createWorkout, addWorkout, saveWorkout, getVolume, showHistory
 * fields:
 * string user,workout_name;
    vector<Exercise> vecM;
    vector<Exercise> vecA;
    double volume;
 */
class Workout {
private:
    string user,workout_name;
    vector<Exercise> vecM;
    vector<Exercise> vecA;
    double volume;
public:
    Workout();
    Workout(string,string);
    ~Workout();

    /**
     * reads chosen exercises from userM_EX.txt and userACC_EX.txt
     * then puts them into vector and calls addWorkout
     */
    void createWorkout();

    /**
     * is used by function create workout to
     * write exercises to userW.txt
     */
    void addWorkout(int[],int[],int,int);

    /**
     * writes workout from file userW.txt to user.txt
     */
    void saveWorkout();

    /**
     * reads all saved workouts and counts volume
     * of all exercises
     * @return double volume
     */
    double getVolume();

    /**
     * reads all saved workouts from user.txt file
     */
    void showHistory();
};


#endif //FIRSTLIBCALL_WORKOUT_H

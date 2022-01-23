//
// Created by HP on 23.01.2022.
//

#include "Workout.h"

Workout::Workout() {

}
Workout::Workout(string name,string surname):user(name+surname) {

}
Workout::~Workout() {

}

void Workout::createWorkout() {
    string line;
    string name;
    double weight;
    ifstream file("usersDIR/"+user+"DIR/"+user+"M_EX.txt");
    if (file.is_open())
    {
        int i=1;
        while ( getline (file,line) )
        {
            if(i%3 == 2) {
                name = line;
            }
            if(i%3 == 0) {
                weight = stod(line);
                vecM.emplace_back(name,weight);
            }
            i++;
        }
        file.close();
    }
    else cout << "Unable to open "<<user<<"M_EX.txt\n";

    ifstream file2("usersDIR/"+user+"DIR/"+user+"ACC_EX.txt");
    if (file2.is_open())
    {
        int i=1;
        while ( getline (file2,line) )
        {
            if(i%3 == 2) {
                name = line;
            }
            if(i%3 == 0) {
                weight = stod(line);
                vecA.emplace_back(name,weight);
            }
            i++;
        }
        file2.close();
    }
    else cout << "Unable to open "<<user<<"ACC_EX.txt\n";

    cout<<"Provide name of your workout:";
    char buff[80];
    getchar();
    if(gets(buff)==NULL)
    {
        cout<<"Workout - createWorkout ERROR - gets()\n";
        exit(1);
    }
    string n(buff);
    workout_name = n;
    int *exercise_m = new int[vecM.size()];
    int *exercise_a = new int[vecA.size()];

    int m=0,a=0;
    cout<<"Main exercises:\n";
    for(int i=0;i<vecM.size();i++)
    {
        int c;
        cout<<i<<": "<<vecM[i].getName()<<" "<<vecM[i].getWeight_d()<<"\n";
        cout<<"Do you want to add this exercise? Yes =  enter ["<<i<<"]:";
        c=err->isInt();
        if(c == i)
        {
               vecM[i].setReps();
               vecM[i].setSets();
               exercise_m[m++] = i;
        }
    }
    cout<<"Accessory exercises:\n";
    for(int i=0;i<vecA.size();i++)
    {
        int c;
        cout<<i<<": "<<vecA[i].getName()<<" "<<vecA[i].getWeight_d()<<"\n";
        cout<<"Do you want to add this exercise? Yes = enter ["<<i<<"]:";
        c=err->isInt();
        if(c == i)
        {
            vecA[i].setReps();
            vecA[i].setSets();
            exercise_a[a++] = i;
        }
    }
    addWorkout(exercise_a, exercise_m,a,m);
    delete [] exercise_a;
    delete [] exercise_m;
}

void Workout::addWorkout(int ea[],int em[],int a,int m) {

    work.open ("usersDIR/"+user+"DIR/"+user+"W.txt",std::ios_base::app);
    if(!work.is_open())
    {
        cout<<"usersDIR/"+user+"DIR/"+user+"W.txt"<<"ERROR while opening\n";
        work.close();
        vecM.clear();
        vecA.clear();
        exit(-2);
    }
    work<<workout_name<<"\n";

    for(int i=0;i<m;i++)
    {
        work<<vecM[em[i]].getName()<<"\n";
        work<<vecM[em[i]].getWeight_d()<<"\n";
        work<<vecM[em[i]].getSets()<<"\n";
        work<<vecM[em[i]].getReps()<<"\n";
    }
    for(int i=0;i<a;i++) {
        work << vecA[ea[i]].getName() << "\n";
        work << vecA[ea[i]].getWeight_d() << "\n";
        work << vecA[ea[i]].getSets() << "\n";
        work << vecA[ea[i]].getReps() << "\n";
    }
    work.close();
    vecM.clear();
    vecA.clear();
}

void Workout::saveWorkout() {
    string line;
    f_in.open("usersDIR/"+user+"DIR/"+user+"W.txt");
    if(!f_in.is_open())
    {
        cout<<"usersDIR/"+user+"DIR/"+user+"W.txt"<<" ERROR while opening\n";
        exit(-2);
    }
    f_out.open("usersDIR/"+user+"DIR/"+user+".txt",std::ios_base::app);
    if(!f_in.is_open())
    {
        cout<<"usersDIR/"+user+"DIR/"+user+".txt"<<" ERROR while opening\n";
        exit(-2);
    }
    if (f_in.is_open() && f_out.is_open())
    {
        int i=0;
        f_out<<"@\n";
        f_out<<currentDateTime()<<"\n";
        while ( getline (f_in,line) )
        {
            if(line == workout_name){
                i=1;
            }
            if(i ==1) {
                f_out << line << "\n";
            }
        }
        f_out<<"#\n";
        f_out.close();
        f_in.close();
    }
    else cout << "Unable to open "<<user<<"W.txt or "<<user<<".txt\n";
}

double Workout::getVolume() {
    string line;
    int re=0,se=0;
    double we=0;

    f_in.open("usersDIR/"+user+"DIR/"+user+".txt");
    if (f_in.is_open())
    {
        while ( getline (f_in,line) )
        {
            if(line == "@")
            {
                getline (f_in,line);
                getline (f_in,line);
                int i=1;
                while ( getline (f_in,line) )
                {
                    if(line != "#") {
                        if (i % 4 == 2) {
                            we = stod(line);
                        }
                        if (i % 4 == 3) {
                            se = stoi(line);
                        }
                        if (i % 4 == 0) {
                            re = stoi(line);
                            volume += we*se*re;
                        }
                        i++;
                    }
                    if(line == "#")
                    {
                        getline (f_in,line);
                        getline (f_in,line);
                        getline (f_in,line);
                        i=1;

                    }
                }

            }
        }
        f_out.close();
        f_in.close();
        return volume;
    }
    cout<<"usersDIR/"+user+"DIR/"+user+".txt"<<" ERROR while opening  - saveWorkout\n";
    exit(-3);
}

void Workout::showHistory() {
    string line;
    f_in.open("usersDIR/"+user+"DIR/"+user+".txt");
    if(f_in.is_open()) {
        cout << "\n******Workout history******\n";
        while (getline(f_in, line)) {
            cout << line << "\n";
        }
        f_in.close();
        cout << "Press [ENTER]";
        getchar();
        getchar();
        return;
    }
    cout<<"usersDIR/"+user+"DIR/"+user+".txt"<<" ERROR while opening - showHistory\n";
    exit(-4);
}

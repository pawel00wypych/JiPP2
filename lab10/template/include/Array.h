//
// Created by HP on 04.01.2022.
//

#ifndef FIRSTLIBCALL_ARRAY_H
#define FIRSTLIBCALL_ARRAY_H
#include <iostream>

template<typename Typ,int s>
class Array {
    int size;
    Typ *a;
public:
    Array(Typ a, int size):a(a),size(size){
       for(int i=0;i<size;i++)
        a[i] = new Typ;
    }

    ~Array()
    {
        delete []  a;
    }

    void setArray()
    {
        for(int i=0;i<size;i++)
            std::cin>>a[i];
    }
};


#endif //FIRSTLIBCALL_ARRAY_H

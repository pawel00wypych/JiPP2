//
// Created by HP on 21.01.2022.
//

#ifndef FIRSTLIBCALL_ERROR_H
#define FIRSTLIBCALL_ERROR_H

#include <iostream>
#include <string.h>

using namespace std;

/**
 * class gives methods:
 * isInt
 */
class Error {
private:

public:
    Error();
    ~Error();

    /***
     * function checks if given char is int
     * @return int value
     */
    int isInt();
};

static Error *err= new Error();

#endif //FIRSTLIBCALL_ERROR_H

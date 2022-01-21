//
// Created by HP on 11.01.2022.
//

#ifndef FIRSTLIBCALL_EXCEPTION_H
#define FIRSTLIBCALL_EXCEPTION_H
#include <exception>
#include <string>

using namespace std;

class Exception: public exception{
private:
    string exceptionText;
    enum errortype {
        FILE_ERROR,
        TOTAL_ERROR_AMOUNT
    };
    const string codeDescription[TOTAL_ERROR_AMOUNT]
            {
        "File error"
            };
public:
    MyException(string exceptionText): exceptionText(exceptionText) {}

    const char * what() {
        return exceptionText;
    }
};


#endif //FIRSTLIBCALL_EXCEPTION_H

#ifndef FIRSTLIBCALL_STUDENT_H
#define FIRSTLIBCALL_STUDENT_H

using namespace std;

class Student {
private:
    string imie,nazwisko;
    int nr_albumu=0,l_pytan=0,l_pop_odp=0;
public:
    string getName();
    string getSecondName();
    int getNrAlbumu();
    int getLPytan();
    int getLPopOdp();
    void setImie(string imie);
    void setNazwisko(string nazwisko);
    void setNrAlbumu(int nr_albumu);
    void setLPytan(int l_pytan);
    void setLPopPytan(int l_pop_odp);
    void wczytaj();
    double obl_proc();
};


#endif //FIRSTLIBCALL_STUDENT_H

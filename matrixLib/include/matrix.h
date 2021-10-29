#ifndef FIRSTLIBCALL_MATRIX_H
#define FIRSTLIBCALL_MATRIX_H

#include <iostream>

using namespace std;

/**
 *funkcja dodaje macierze M1 oraz M2 i zapisuje wynik w M3
 * @param M1-podwójny wskaźnik na macierz M1 typu INT
 * @param M2-podwójny wskaźnik na macierz M2 typu INT
 * @param r-ilość wierszy(rows) typu INT
 * @param c-ilość kolumn(columns) typu INT
 * @return M3-podwójny wskaźnik na macierz M3 typu INT
 */
int** addMatrix(int **M1,int **M2,int r,int c);
/**
 *funkcja dodaje macierze M1 oraz M2 i zapisuje wynik w M3
 * @param M1-podwójny wskaźnik na macierz M1 typu DOUBLE
 * @param M2-podwójny wskaźnik na macierz M2 typu DOUBLE
 * @param r-ilość wierszy(rows) typu INT
 * @param c-ilość kolumn(columns) typu INT
 * @return M3-podwójny wskaźnik na macierz M3 typu DOUBLE
 */
double** addMatrix(double **M1,double **M2,int r,int c);
/**
 *funkcja odejmuje macierze M1 oraz M2 i zapisuje wynik w M3
 * @param M1-podwójny wskaźnik na macierz M1 typu INT
 * @param M2-podwójny wskaźnik na macierz M2 typu INT
 * @param r-ilość wierszy(rows) typu INT
 * @param c-ilość kolumn(columns) typu INT
 * @return M3-podwójny wskaźnik na macierz M3 typu INT
 */
int** subtractMatrix(int **M1,int **M2,int r,int c);
/**
 *funkcja odejmuje macierze M1 oraz M2 i zapisuje wynik w M3
 * @param M1-podwójny wskaźnik na macierz M1 typu DOUBLE
 * @param M2-podwójny wskaźnik na macierz M2 typu DOUBLE
 * @param r-ilość wierszy(rows) typu INT
 * @param c-ilość kolumn(columns) typu INT
 * @return M3-podwójny wskaźnik na macierz M3 typu DOUBLE
 */
double** subtractMatrix(double **M1,double **M2,int r,int c);
/**
 *funkcja mnoży macierze M1 oraz M2 i zapisuje wynik w M3
 * @param M1-podwójny wskaźnik na macierz M1 typu INT
 * @param M2-podwójny wskaźnik na macierz M2 typu INT
 * @param r-ilość wierszy(rows) typu INT
 * @param c-ilość kolumn(columns) typu INT
 * @return M3-podwójny wskaźnik na macierz M3 typu INT
 */
int** multiplyMatrix(int **M1,int** M2,int r,int c,int c2);
/**
 *funkcja odejmuje macierze M1 oraz M2 i zapisuje wynik w M3
 * @param M1-podwójny wskaźnik na macierz M1 typu DOUBLE
 * @param M2-podwójny wskaźnik na macierz M2 typu DOUBLE
 * @param r-ilość wierszy(rows) typu INT
 * @param c-ilość kolumn(columns) typu INT
 * @return M3-podwójny wskaźnik na macierz M3 typu DOUBLE
 */
double** multiplyMatrix(double **M1,double** M2,int r,int c,int c2);
/**
 *funkcja mnoży macierz M1 przez skalar i zapisuje wynik w M3
 * @param M1-podwójny wskaźnik na macierz M1 typu INT
 * @param r-ilość wierszy(rows) typu INT
 * @param c-ilość kolumn(columns) typu INT
 * @param sc-skalar przez który mnożona jest macierz, typu INT
 * @return M3-podwójny wskaźnik na macierz M3 typu INT
 */
int** multiplyByScalar(int** M1,int r,int c,int sc);
/**
 *funkcja mnoży macierz M1 przez skalar i zapisuje wynik w M3
 * @param M1-podwójny wskaźnik na macierz M1 typu DOUBLE
 * @param r-ilość wierszy(rows) typu INT
 * @param c-ilość kolumn(columns) typu INT
 * @param sc-skalar przez który mnożona jest macierz, typu DOUBLE
 * @return M3-podwójny wskaźnik na macierz M3 typu DOUBLE
 */
double** multiplyByScalar(double** M1,int r,int c,double sc);
/**
 *funkcja wykonuje transpozycję czyli zamienia miejscami wiersze z kolumnami
 * macierzy M1 i zapisuje wynik w MT
 * @param M1-podwójny wskaźnik na macierz M1 typu INT
 * @param r-ilość wierszy(rows) typu INT
 * @param c-ilość kolumn(columns) typu INT
 * @return MT-podwójny wskaźnik na macierz MT typu INT
 */
int** transpozeMatrix(int** M1,int r,int c);
/**
 *funkcja wykonuje transpozycję czyli zamienia miejscami wiersze z kolumnami
 * macierzy M1 i zapisuje wynik w MT
 * @param M1-podwójny wskaźnik na macierz M1 typu DOUBLE
 * @param r-ilość wierszy(rows) typu INT
 * @param c-ilość kolumn(columns) typu INT
 * @return MT-podwójny wskaźnik na macierz MT typu DOUBLE
 */
double** transpozeMatrix(double** M1,int r,int c);
/**
 * funkcja potęguje macierz M1 do potęgi p wykorzystując
 * funkcję multiplyMatrix odpowiedniego typu
 * @param M1 - podwójny wskaźnik na macierz M1 typu INT
 * @param r - ilość wierszy(rows) typu INT
 * @param c - ilość kolumn(columns) typu INT
 * @param p - wykładnik potęgi typu unsigned
 * @return M3 - podwójny wskaźnik na macierz M3 typu INT
 */
int** powerMatrix(int** M1,unsigned p,int r, int c);
/**
 * funkcja potęguje macierz M1 do potęgi p wykorzystując
 * funkcję multiplyMatrix odpowiedniego typu
 * @param M1 - podwójny wskaźnik na macierz M1 typu DOUBLE
 * @param r - ilość wierszy(rows) typu INT
 * @param c - ilość kolumn(columns) typu INT
 * @param p - wykładnik potęgi typu unsigned
 * @return M3 - podwójny wskaźnik na macierz M3 typu DOUBLE
 */
double** powerMatrix(double** M1,unsigned p,int r,int c);
int determinantMatrix(int** M1,int r,int c);
/**
 * funkcja pobiera przez referencję dwie liczby, następnie
 * zamienia je miejscami wykorzystując zmienną temp
 * @param x - liczba typu INT przekazana przez referencję
 * @param y - liczba typu INT przekazana przez referencję
 */
void swap(int &x,int &y);
/**
 * funkcja pobiera przez referencję dwie liczby, następnie
 * zamienia je miejscami wykorzystując zmienną temp
 * @param x - liczba typu DOUBLE przekazana przez referencję
 * @param y - liczba typu DOUBLE przekazana przez referencję
 */
void swap(double &x,double &y);
/**
 * funkcja sortuje bąbelkowo w sposób rosnący przekazaną tablicę, do zamiany elementów używa
 * funkcji swap
 * @param row - wskaźnik na tablicę typu INT
 * @param c - ilość kolumn(columns) typu INT
 */
void sortRow(int *row,int c);
/**
 * funkcja sortuje bąbelkowo w sposób rosnący przekazaną tablicę, do zamiany elementów używa
 * funkcji swap
 * @param row - wskaźnik na tablicę typu DOUBLE
 * @param c - ilość kolumn(columns) typu INT
 */
void sortRow(double *row,int c);
/**
 * funkcja przekazuje kolejne wiersze macierzy M1 do funkcji sortRow odpowiedniego typu
 * @param M1 - podwójny wskaźnik na macierz M1 typu INT
 * @param r - ilość wierszy(rows) typu INT
 * @param c - ilość kolumn(columns) typu INT
 */
void sortRowsInMatrix(int **M1,int r,int c);
/**
 * funkcja przekazuje kolejne wiersze macierzy M1 do funkcji sortRow odpowiedniego typu
 * @param M1 - podwójny wskaźnik na macierz M1 typu DOUBLE
 * @param r - ilość wierszy(rows) typu INT
 * @param c - ilość kolumn(columns) typu INT
 */
void sortRowsInMatrix(double **M1,int r,int c);
/**
 * funkcja wyświetla część informacji o działaniu programu
 */
void help();
/**
 *funkcja zamienia miejscami dwa wskazane rzędy macierzy M1
 * @param M - macierz typu double
 * @param c - ilosc kolumn typu INT
 * @param n - pierwszy rząd do zamiany typu INT
 * @param m- drugi rząd do zamiany typu INT
 */
void swapRows(double** M, int c, int n, int m);
/**
 * funkcja oblicza wyznacznik macierzy M1
 * @param M1 - macierz typu INT
 * @param r - liczba wierszy typu INT
 * @param c - liczba kolumn typu INT
 * @return det - wyznacznik typu INT
 */
int determinantMatrix(int** M1,int r,int c);
/**
 * funkcja oblicza wyznacznik macierzy M1
 * @param M1 - macierz typu DOUBLE
 * @param r - liczba wierszy typu INT
 * @param c - liczba kolumn typu INT
 * @return det - wyznacznik typu DOUBLE
 */
double determinantMatrix(double** M1,int r,int c);
/**
 * funkcja sprawdza czy macierz jest diagonalna i zwraca true lub false
 * @param M1 - podwójny wskaźnik na macierz M1 typu INT
 * @param r - ilość wierszy(rows) typu INT
 * @param c - ilość kolumn(columns) typu INT
 * @return - true=1 jeśli macierz jest diagonalna lub false=0 jeśli nie jest
 */
bool matrixIsDiagonal(int** M1,int r,int c);
/**
 * funkcja sprawdza czy macierz jest diagonalna i zwraca true lub false
 * @param M1 - podwójny wskaźnik na macierz M1 typu DOUBLE
 * @param r - ilość wierszy(rows) typu INT
 * @param c - ilość kolumn(columns) typu INT
 * @return - true=1 jeśli macierz jest diagonalna lub false=0 jeśli nie jest
 */
bool matrixIsDiagonal(double** M1,int r,int c);
/**
 * alokuje pamięć dla macierzy i wypełnia ją wartościami wpisywanymi przez użytkownika za pomocą funkcji checkIfNum
 * @param r - ilość wierszy(rows) typu INT
 * @param c - ilość kolumn(columns) typu INT
 * @return zwraca podwójny wskaźnik na macierz M typu INT
 */
int** readMatrix(int r,int c);
/**
 * alokuje pamięć dla macierzy i wypełnia ją wartościami wpisywanymi przez użytkownika za pomocą funkcji checkIfNumD
 * @param r - ilość wierszy(rows) typu INT
 * @param c - ilość kolumn(columns) typu INT
 * @return zwraca podwójny wskaźnik na macierz M typu DOUBLE
 */
double** readMatrixd(int r,int c);
/**
 * funkcja zwalnia pamięć tablicy dwuwymiarowej
 * @param M - podwójny wskaźnik na macierz M1 typu INT
 * @param r - ilość wierszy(rows) typu INT
 */
void deleteMatrix(int** M,int r);
/**
 * funkcja zwalnia pamięć tablicy dwuwymiarowej
 * @param M - podwójny wskaźnik na macierz M1 typu DOUBLE
 * @param r - ilość wierszy(rows) typu INT
 */
void deleteMatrix(double** M,int r);
/**
 * funkcja pozwala na wpisanie znaku typu INT sprawdza czy jest to INT a następnie zwraca wpisany znak
 * @return var - typu INT
 */
int checkIfNum();
/**
 * funkcja pozwala na wpisanie znaku typu DOUBLE sprawdza czy jest to DOUBLE a następnie zwraca wpisany znak
 * @return var - typu DOUBLE
 */
double checkIfNumD();
/**
 * funkcja pyta o wybranie typu danych 1 - DOUBLE 2 - INT jeśli wpiszemy coś innego to zwraca błąd
 * @return t - INT zmienna=1 lub 2 reprezentująca wybrany przez użytkownika tp danych
 */
int dataType();
/**
 * funkcja wypisuje przekazaną macierz wiersz po wierszu
 * @param M1 - podwójny wskaźnik na macierz M1 typu INT
 * @param r - ilość wierszy(rows) typu INT
 * @param c - ilość kolumn(columns) typu INT
 */
void showMatrix(int**M,int r,int c);
/**
 * funkcja wypisuje przekazaną macierz wiersz po wierszu
 * @param M1 - podwójny wskaźnik na macierz M1 typu DOUBLE
 * @param r - ilość wierszy(rows) typu INT
 * @param c - ilość kolumn(columns) typu INT
 */
void showMatrix(double**M,int r,int c);

#endif //FIRSTLIBCALL_MATRIX_H

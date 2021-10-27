#ifndef FIRSTLIBCALL_MATRIX_H
#define FIRSTLIBCALL_MATRIX_H

#include <iostream>

using namespace std;

/**
 *
 * @param M1
 * @param M2
 * @param r
 * @param c
 * @return
 */
int** addMatrix(int **M1,int **M2,int r,int c);
double** addMatrix(double **M1,double **M2,int r,int c);
int** subtractMatrix(int **M1,int **M2,int r,int c);
double** subtractMatrix(double **M1,double **M2,int r,int c);
int** multiplyMatrix(int **M1,int** M2,int r,int c,int c2);
double** multiplyMatrix(double **M1,double** M2,int r,int c,int c2);
int** multiplyByScalar(int** M1,int r,int c,int sc);
double** multiplyByScalar(double** M1,int r,int c,double sc);
int** transpozeMatrix(int** M1,int r,int c);
double** transpozeMatrix(double** M1,int r,int c);
int** powerMatrix(int** M1,int r,int c, unsigned p);
double** powerMatrix(double** M1,int r,int c, unsigned p);
int determinantMatrix(int** M1,int r,int c);
void swap(int &x,int &y);
void swap(double &x,double &y);
void sortRow(int *row,int c);
void sortRow(double *row,int c);
void sortRowsInMatrix(int **M1,int r,int c);
void sortRowsInMatrix(double **M1,int r,int c);
int** readMatrix(int r,int c);
double** readMatrixd(int r,int c);
void deleteMatrix(int** M,int r);
void deleteMatrix(double** M,int r);
bool matrixIsDiagonal(int** M1,int r,int c);
bool matrixIsDiagonal(double** M1,int r,int c);
void help();
int checkIfNum();
double checkIfNumD();
int dataType();
void showMatrix(int**M,int r,int c);
void showMatrix(double**M,int r,int c);

#endif //FIRSTLIBCALL_MATRIX_H

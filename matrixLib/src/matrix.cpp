#include <iostream>
#include <math.h>
#include "matrix.h"

using namespace std;

int** addMatrix(int** M1,int** M2,int r,int c)
{
    int **M3 = new int *[r];
    for ( int i = 0; i < r;i++)
        M3[i] = new int [c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            M3[i][j]=M1[i][j]+M2[i][j];
        }
    }
    return M3;
}

double** addMatrix(double** M1,double** M2,int r,int c)
{
    double **M3 = new double *[r];
    for ( int i = 0; i < r;i++)
        M3[i] = new double [c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            M3[i][j]=M1[i][j]+M2[i][j];
        }
    }
    return M3;
}

int** subtractMatrix(int **M1,int **M2,int r,int c)
{
    int **M3 = new int *[r];
    for ( int i = 0; i < r;i++)
        M3[i] = new int [c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            M3[i][j]=M1[i][j]-M2[i][j];
        }
    }
    return M3;
}

double** subtractMatrix(double **M1,double **M2,int r,int c)
{
    double **M3 = new double *[r];
    for ( int i = 0; i < r;i++)
        M3[i] = new double [c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            M3[i][j]=M1[i][j]-M2[i][j];
        }
    }
    return M3;
}

int** multiplyMatrix(int** M1,int** M2,int r,int c,int c2)
{
    int **M3 = new int *[r];
    for (int i = 0; i < r; i++)
        M3[i] = new int[c2];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            M3[i][j]=0;

    for (int p = 0; p < c2; p++)
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                M3[i][p] += M1[i][j] * M2[j][p];
    return M3;
}

double** multiplyMatrix(double **M1,double** M2,int r,int c,int c2)
{
    double **M3 = new double *[r];
    for ( int i = 0; i < r;i++)
        M3[i] = new double [c2];

    for(int i=0;i<r;i++)
        for(int j=0;j<c2;j++)
            M3[i][j]=0;

    for (int p = 0; p < c2; p++)
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                M3[i][p] += M1[i][j] * M2[j][p];

    return M3;
}

int** multiplyByScalar(int** M1,int r,int c,int sc)
{
    int **M3 = new int *[r];
    for ( int i = 0; i < r;i++)
        M3[i] = new int [c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            M3[i][j] = M1[i][j] * sc;
    return M3;
}

double** multiplyByScalar(double** M1,int r,int c,double sc)
{
    double **M3 = new double *[r];
    for ( int i = 0; i < r;i++)
        M3[i] = new double [c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            M3[i][j]=M1[i][j]*sc;

    return M3;
}

int** transpozeMatrix(int** M1,int r,int c)
{
    int** MT=new int*[c];
    for(int i=0;i<c;i++)
        MT[i]=new int[r];

    for (int i = 0; i < c; i++)
        for (int j = 0; j < r; j++)
            MT[i][j] = M1[j][i];
    return MT;
}

double** transpozeMatrix(double** M1,int r,int c)
{
    double** MT=new double*[c];
    for(int i=0;i<c;i++)
        MT[i]=new double[r];

    for (int i = 0; i < c; i++)
        for (int j = 0; j < r; j++)
            MT[i][j] = M1[j][i];
    return MT;
}

int** powerMatrix(int** M1,unsigned p,int r, int c)
{
    int **M3 = new int* [r];
    for (int i = 0; i < r; i++)
        M3[i] = new int[c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            M3[i][j] = M1[i][j];

    for (int i = 1; i < p; i++)
        M3 = multiplyMatrix(M3, M1, r, c, c);
    return M3;
}

double** powerMatrix(double** M1,unsigned p,int r, int c)
{
    double **M3 = new double* [r];
    for ( int i = 0; i < r;i++)
        M3[i] = new double [c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            M3[i][j] = M1[i][j];

    for (int i = 1; i < p; i++)
        M3 = multiplyMatrix(M3, M1, r, c, c);
    return M3;
}

void swapRows(double** M, int c, int n, int m)
{
    for(int i=0;i<c;i++)swap(M[n][i],M[m][i]);
}

double determinantMatrix(double** M1,int r,int c)
{
    int i,j,k;
    double q,det=1;

    auto** temp = new double* [r];
    for(i=0; i<r; ++i){
        temp[i] = new double[c];
        for(j=0;j<c;++j)temp[i][j]=M1[i][j];
    }

    if(r==1)return M1[0][0];
    for(i=0;i<r-1;++i){
        if(!temp[i][i]){
            for(k=i+1;k<r;++k){
                if(temp[k][i]){
                    swapRows(temp,r,i,k);
                    det*=-1;
                    break;
                }
            }
            if(!temp[i][i])return 0;
        }
        for(j=i+1;j<r;++j){
            q = temp[j][i]/temp[i][i];
            for(k=i;k<r;k++)temp[j][k]-= q*temp[i][k];
        }
    }
    for(i=0;i<r;++i)det*=temp[i][i];

    return det;
}

int determinantMatrix(int** M1,int r,int c)
{
    int i,j,k;
    double q,det=1;

        auto** temp = new double* [r];
        for(i=0; i<r; ++i){
            temp[i] = new double[c];
            for(j=0;j<c;++j)temp[i][j]=M1[i][j];
        }

        if(r==1)return M1[0][0];
        for(i=0;i<r-1;++i){
            if(!temp[i][i]){
                for(k=i+1;k<r;++k){
                    if(temp[k][i]){
                        swapRows(temp,r,i,k);
                        det*=-1;
                        break;
                    }
                }
                if(!temp[i][i])return 0;
            }
            for(j=i+1;j<r;++j){
                q = temp[j][i]/temp[i][i];
                for(k=i;k<r;k++)temp[j][k]-= q*temp[i][k];
            }
        }
        for(i=0;i<r;++i)det*=temp[i][i];
        return (int)round(det);
}

double** readMatrixd(int r,int c)
{
    double **M = new double *[r];
    cout<<"Wprowadz elementy macierzy:";
    for ( int i = 0; i < r; i++ )
    {
        M[i] = new double [c]; //alokacja pamieci
        for (int j = 0; j < c; j++)
            M[i][j] = checkIfNumD();
    }
    return M;
}

int** readMatrix(int r,int c)
{
    int **M = new int *[r];
    cout<<"Wprowadz elementy macierzy:";
    for ( int i = 0; i < r; i++ )
    {
        M[i] = new int [c]; //alokacja pamieci
        for (int j = 0; j < c; j++)
            M[i][j] = checkIfNum();
    }
    return M;
}

void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void swap(double &x,double &y)
{
    double temp;
    temp=x;
    x=y;
    y=temp;
}

void sortRow(int *row,int c)
{
    for (int i = 0; i < c - 1; i++)
        for (int j = 0; j < c - 1; j++)
            if (row[j] > row[j + 1])
                swap(row[j], row[j + 1]);
}
void sortRow(double *row,int c)
{
    for (int i = 0; i < c - 1; i++)
        for (int j = 0; j < c - 1; j++)
            if (row[j] > row[j + 1])
                swap(row[j], row[j + 1]);
}

void sortRowsInMatrix(int **M1,int r,int c)
{
    for(int i=0;i<r;i++)
        sortRow(M1[i],c);
}

void sortRowsInMatrix(double **M1,int r,int c)
{
    for(int i=0;i<r;i++)
        sortRow(M1[i],c);
}

bool matrixIsDiagonal(int** M1,int r,int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (i != j && M1[i][j] != 0)
                return false;
    return true;
}

bool matrixIsDiagonal(double** M1,int r,int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (i != j && M1[i][j] != 0)
                return false;;
    return true;
}

void deleteMatrix(int** M,int r)
{
    for (int i = 0; i < r; ++i)
        delete[] M[i];//uwolnienie pamieci
    delete[] M;//uwolnienie pamieci
}

void deleteMatrix(double** M,int r)
{
    for (int i = 0; i < r; ++i)
        delete[] M[i];//uwolnienie pamieci
    delete[] M;//uwolnienie pamieci
}

void help() {
    cout<< "|------------------------------------------------------------------------------------------------|\n\t\t\t\t\t   HELP\n|------------------------------------------------------------------------------------------------|\n";
    cout << "PROGRAM UMOZLIWIA WYKONANIE OKRESLONYCH DZIALAN NA MACIERZACH, POBIERA PIERWSZY PRZEKAZANY PARAMETR\n";
    cout << "KTORYM POWINNA BYC NAZWA FUNKCJI KTORA CHCEMY URUCHOMIC(PARAMETRY SA WYPISANE PONIZEJ)\n";
    cout << "WSZYSTKIE WARTOSCI KTORE POBIERA PROGRAM(OPROCZ PARAMETRU) SA ROZDZIELONE PRZEZ KLAWISZ ENTER\n";
    cout << "MACIERZE ORAZ TABLICE SA WCZYTYWANE W NASTEPUJACY SPOSOB: KOLUMNA PO KOLUMNIE W WIERSZ[0] -> \n";
    cout << "KOLUMNA PO KOLUMNIE W WIERSZ[1] itd. OCZYWISCIE KAZDA WARTOSC RODZIELONA ENTEREM\n";
    cout << "|------------------------------------------------------------------------------------------------|\n";
    cout << "1 - addMatrix\n";
    cout << "2 - subtractMatrix\n";
    cout << "3 - multiplyMatrix\n";
    cout << "4 - multiplyByScalar \n";
    cout << "5 - transpozeMatrix \n";
    cout << "6 - powerMatrix \n";
    cout << "7 - determinantMatrix \n";
    cout << "8 - matrixIsDiagonal \n";
    cout << "9 - swap\n";
    cout << "10 - sortRow \n";
    cout << "11 - sortRowsInMatrix \n";
    cout << "|------------------------------------------------------------------------------------------------|\n";
}

int checkIfNum()
{
    //Nie nalezy podawac wartosci na wejscie po spacji, przy podaniu drugiej wartosci typu double(!) czesc dziesietna
    //zostanie ucieta a wczytana tylko wartosc przed kropka
    int var;
    if(!(cin>>var))
    {
        cout<<"To nie jest liczba!\n";
        exit(-1);
    }
    return var;
}

double checkIfNumD()
{
    double var;
    if(!(cin>>var))
    {
        cout<<"To nie jest liczba!\n";
        exit(-1);
    }
    return var;
}

int dataType()
{
    int t;
    cout<<"Dane typu\ndouble - wybierz 1\nint - wybierz 2\n";
    cin>>t;
    if(t!=1 && t!=2)
    {
        cout<<"Nieprawidlowy typ!";
        exit(0);
    }
    return t;
}

void showMatrix(int** M,int r,int c)
{
    cout<<"\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<M[i][j]<<" \t ";
        cout<<"\n";
    }
    cout<<"\n";
}

void showMatrix(double** M,int r,int c)
{
    cout<<"\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<M[i][j]<<" \t ";
        cout<<"\n";
    }
    cout<<"\n";
}

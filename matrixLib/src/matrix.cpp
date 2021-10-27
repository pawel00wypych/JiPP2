#include <iostream>
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
    for ( int i = 0; i < r;i++)
        M3[i] = new int [c2];

    for(int p=0;p<c2;p++)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                M3[i][p]+=M1[i][j] * M2[j][p];
            }
        }
    }
    return M3;
}

double** multiplyMatrix(double **M1,double** M2,int r,int c,int c2)
{
    double **M3 = new double *[r];
    for ( int i = 0; i < r;i++)
        M3[i] = new double [c2];

    for(int p=0;p<c2;p++)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                M3[i][p]+=M1[i][j] * M2[j][p];
            }
        }
    }
    return M3;
}

int** multiplyByScalar(int** M1,int r,int c,int sc)
{
    int **M3 = new int *[r];
    for ( int i = 0; i < r;i++)
        M3[i] = new int [c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            M3[i][j]=M1[i][j]*sc;
        }
    }
    return M3;
}

double** multiplyByScalar(double** M1,int r,int c,double sc)
{
    double **M3 = new double *[r];
    for ( int i = 0; i < r;i++)
        M3[i] = new double [c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            M3[i][j]=M1[i][j]*sc;
        }
    }
    return M3;
}

int** transpozeMatrix(int** M1,int r,int c)
{
    int** MT=new int*[r];
    for(int i=0;i<r;i++)
        MT[i]=new int[c];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            MT[i][j]=M1[j][i];
        }
    }
    return MT;
}

double** transpozeMatrix(double** M1,int r,int c)
{
    double** MT=new double*[r];
    for(int i=0;i<r;i++)
        MT[i]=new double[c];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            MT[i][j]=M1[j][i];
        }
    }
    return MT;
}


int** powerMatrix(int** M1,int r,int c, unsigned p)
{
    int **M3 = new int* [r];
    for ( int i = 0; i < r;i++)
        M3[i] = new int [c];
    M3=M1;

    for (int i = 1; i < p; i++)
        M3 = multiplyMatrix(M3, M1, r, c, c);
    return M3;
}

double** powerMatrix(double** M1,int r,int c, unsigned p)
{
    double **M3 = new double* [r];
    for ( int i = 0; i < r;i++)
        M3[i] = new double [c];
    M3=M1;

    for(int i=1;i<p;i++)
    {
        M3 = multiplyMatrix(M3, M1, r, c, c);
    }
    return M3;
}

int determinantMatrix(int** M1,int r,int c)
{
    int i,j;
    int** temp;

}

double** readMatrixd(int r,int c)
{
    double **M = new double *[r];
    cout<<"Wprowadz elementy macierzy:";
    for ( int i = 0; i < r; ++i )
    {
        M[i] = new double [c]; //alokacja pamieci
        for ( int j = 0; j < c; ++j)
        {
            M[i][j]=checkIfNumD();
        }
    }
    return M;
}

int** readMatrix(int r,int c)
{
    int **M = new int *[r];
    cout<<"Wprowadz elementy macierzy:";
    for ( int i = 0; i < r; ++i )
    {
        M[i] = new int [c]; //alokacja pamieci
        for ( int j = 0; j < c; ++j)
        {
           M[i][j]=checkIfNum();
        }
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
    for(int i=0;i<c-1;i++)
    {
        for(int j=0;j<c-1;j++)
        {
            if(row[j]>row[j+1])
            swap(row[j],row[j+1]);
        }
    }
}
void sortRow(double *row,int c)
{
    for(int i=0;i<c-1;i++)
    {
        for(int j=0;j<c-1;j++)
        {
            if(row[j]>row[j+1])
                swap(row[j],row[j+1]);
        }
    }
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
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i!=j && M1[i][j]!=0)
                return false;
        }
    }
    return true;
}

bool matrixIsDiagonal(double** M1,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i!=j && M1[i][j]!=0)
                return false;
        }
    }
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

void help()
{
    cout<<"|------------------------------------------------------------------------------------------------|\n\t\t\t\t\t   HELP\n|------------------------------------------------------------------------------------------------|\n";
    cout<<"WSZYSTKIE WARTOSCI KTORE POBIERA PROGRAM(OPROCZ PARAMETRU) SA ROZDZIELONE PRZEZ KLAWISZ ENTER\n";
    cout<<"MACIERZE ORAZ TABLICE SA WCZYTYWANE W NASTEPUJACY SPOSOB: KOLUMNA PO KOLUMNIE W WIERSZ[0] -> \n";
    cout<<"KOLUMNA PO KOLUMNIE W WIERSZ[1] itd. OCZYWISCIE KAZDA WAROTSC RODZIELONA ENTEREM\n";
    cout<<"ABY ROZWINAC KOLEJNE CZESCI DOKUMENTACJI WCISNIJ KLAWISZ ENTER\n";
    cout<<"|------------------------------------------------------------------------------------------------|\n";
    cout<<"1 - addMatrix\n";
    getchar();getchar();
    cout<<"funkcja pobiera 4 parametry:\n**M1, **M2 - podwojny wskaznik na macierz(typu INT lub DOUBLE)\n";
    cout<<"r - liczbe wierszy(rows) zawsze typu INT\nc - liczbe kolumn(columns) zawsze typu INT\n";
    cout<<"dzialanie:\n";
    cout<<"funkcja alokuje pamiec dla macierzy wynikowej M3 o tych samych wymiarach co M1 i M2, i wypelnia ja\n";
    cout<<"M3[i][j] = M1[i][j] + M2[i][j]\nfunkcja zwraca podwojny wskaznik na macierz M3\n";
    cout<<"|------------------------------------------------------------------------------------------------|\n";
    cout<<"2 - subtractMatrix\n";
    getchar();
    cout<<"funkcja pobiera 4 parametry:\n**M1, **M2 - podwojny wskaznik na macierz(typu INT lub DOUBLE)\n";
    cout<<"r - liczbe wierszy(rows) zawsze typu INT\nc - liczbe kolumn(columns) zawsze typu INT\n";
    cout<<"dzialanie:\n";
    cout<<"funkcja alokuje pamiec dla macierzy wynikowej M3 o tych samych wymiarach co M1 i M2, i wypelnia ja\n";
    cout<<"M3[i][j] = M1[i][j] - M2[i][j]\nfunkcja zwraca podwojny wskaznik na macierz M3\n";
    cout<<"|------------------------------------------------------------------------------------------------|\n";
    cout<<"3 - multiplyMatrix\n";
    getchar();
    cout<<"funkcja pobiera 5 parametrow:\n**M1, **M2 - podwojny wskaznik na macierz(typu INT lub DOUBLE)\n";
    cout<<"r - liczbe wierszy(rows) zawsze typu INT\nc - liczbe kolumn 1 macierzy(columns) zawsze typu INT\n";
    cout<<"c2 - liczbe kolumn 2  macierzy zawsze typu INT\n";
    cout<<"dzialanie:\n";
    cout<<"funkcja alokuje pamiec dla macierzy wynikowej M3 o r - wierszach i c2 - kolumnach, i wypelnia ja\n";
    cout<<"M3[i][p] = M3[i][p] + M1[i][j] * M2[j][p]\nfunkcja zwraca podwojny wskaznik na macierz M3\n";
    cout<<"|------------------------------------------------------------------------------------------------|\n";
    cout<<"4 - multiplyByScalar\n";
    getchar();
    cout<<"funkcja pobiera 4 parametry:\n**M1 - podwojny wskaznik na macierz(typu INT lub DOUBLE)\n";
    cout<<"r - liczbe wierszy(rows) zawsze typu INT\nc - liczbe kolumn macierzy(columns) zawsze typu INT\n";
    cout<<"sc - skalar przez ktory jest mnozona macierz (typu INT lub DOUBLE)\n";
    cout<<"dzialanie:\n";
    cout<<"funkcja alokuje pamiec dla macierzy wynikowej M3 o tych samych wymiarach co M1, i wypelnia ja\n";
    cout<<"M3[i][j]=M1[i][j]*sc\nfunkcja zwraca podwojny wskaznik na macierz M3\n";
    cout<<"|------------------------------------------------------------------------------------------------|\n";
}

int checkIfNum()
{
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
    cout<<" ";
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
    cout<<" ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<M[i][j]<<" \t ";
        cout<<"\n";
    }
    cout<<"\n";
}

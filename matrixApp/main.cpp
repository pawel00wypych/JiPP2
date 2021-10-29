#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc,char* argv[])
{
    if(argc<2)
    {
        cout<<"Nie podano parametru!\n";
        exit(1);
    }
    int rows,columns,columnsB,type;
    unsigned power;
    string func;
    func=argv[1];

    if(func=="help")
    {
        help();
        return 0;
    }
    if(func=="addMatrix")
    {
        type=dataType();
        cout<<"Podaj ilosc wierszy i kolumn:";
        rows=checkIfNum();
        columns=checkIfNum();
        if(type==1)
        {
            double** A=readMatrixd(rows,columns);
            double** B=readMatrixd(rows,columns);
            double** C=addMatrix(A,B,rows,columns);
            showMatrix(C,rows,columns);
            deleteMatrix(A,rows);
            deleteMatrix(B,rows);
            deleteMatrix(C,rows);
        }
        if(type==2)
        {
            int** A=readMatrix(rows,columns);
            int** B=readMatrix(rows,columns);
            int** C=addMatrix(A,B,rows,columns);
            showMatrix(C,rows,columns);
            deleteMatrix(A,rows);
            deleteMatrix(B,rows);
            deleteMatrix(C,rows);
        }
        return 0;
    }
    if(func=="subtractMatrix")
    {
        type=dataType();
        cout<<"Podaj ilosc wierszy i kolumn:";
        rows=checkIfNum();
        columns=checkIfNum();
        if(type==1)
        {
            double** A=readMatrixd(rows,columns);
            double** B=readMatrixd(rows,columns);
            double** C=subtractMatrix(A,B,rows,columns);
            showMatrix(C,rows,columns);
            deleteMatrix(A,rows);
            deleteMatrix(B,rows);
            deleteMatrix(C,rows);
        }
        if(type==2)
        {
            int** A=readMatrix(rows,columns);
            int** B=readMatrix(rows,columns);
            int** C= subtractMatrix(A,B,rows,columns);
            showMatrix(C,rows,columns);
            deleteMatrix(A,rows);
            deleteMatrix(B,rows);
            deleteMatrix(C,rows);
        }
        return 0;
    }
    if(func=="multiplyMatrix")
    {
        type=dataType();
        cout<<"Podaj ilosc wierszy i kolumn:";
        rows=checkIfNum();
        columns=checkIfNum();
        cout<<"liczba kolumn 2 macierzy:";
        columnsB=checkIfNum();
        if(type==1)
        {
            double** A=readMatrixd(rows,columns);
            double** B=readMatrixd(columns,columnsB);
            double** C=multiplyMatrix(A,B,rows,columns,columnsB);
            showMatrix(C,rows,columnsB);
            deleteMatrix(A,rows);
            deleteMatrix(B,rows);
            deleteMatrix(C,rows);
        }
        if(type==2)
        {
            int** A=readMatrix(rows,columns);
            int** B=readMatrix(columns,columnsB);
            int** C=multiplyMatrix(A,B,rows,columns,columnsB);
            showMatrix(C,rows,columnsB);
            deleteMatrix(A,rows);
            deleteMatrix(B,rows);
            deleteMatrix(C,rows);
        }
        return 0;
    }
    if(func=="multiplyByScalar")
    {
        type=dataType();
        cout<<"Podaj ilosc wierszy i kolumn:";
        rows=checkIfNum();
        columns=checkIfNum();
        if(type==1)
        {
            double scalar;
            cout<<"Podaj warotosc skalara:";
            scalar=checkIfNumD();
            double** A=readMatrixd(rows,columns);
            double** C=multiplyByScalar(A,rows,columns,scalar);
            showMatrix(C,rows,columns);
            deleteMatrix(A,rows);
            deleteMatrix(C,rows);
        }
        if(type==2)
        {
            int scalar;
            cout<<"Podaj warotosc skalara:";
            scalar=checkIfNum();
            int** A=readMatrix(rows,columns);
            int** C= multiplyByScalar(A,rows,columns,scalar);
            showMatrix(C,rows,columns);
            deleteMatrix(A,rows);
            deleteMatrix(C,rows);
        }
        return 0;
    }
    if(func=="transpozeMatrix")
    {
        type=dataType();
        cout<<"Podaj ilosc wierszy i kolumn:";
        rows=checkIfNum();
        columns=checkIfNum();
        if(type==1)
        {
            double** A=readMatrixd(rows,columns);
            cout<<"Macierz A\n";
            showMatrix(A,rows,columns);
            double** C=transpozeMatrix(A,rows,columns);
            cout<<"Transpozycja macierzy A\n";
            showMatrix(C,columns,rows);
            deleteMatrix(A,rows);
            deleteMatrix(C,columns);
        }
        if(type==2)
        {
            int** A=readMatrix(rows,columns);
            cout<<"Macierz A\n";
            showMatrix(A,rows,columns);
            int**C=transpozeMatrix(A,rows,columns);
            cout<<"Transpozycja macierzy A\n";
            showMatrix(C,columns,rows);
            deleteMatrix(A,rows);
            deleteMatrix(C,rows);
        }
        return 0;
    }
    if(func=="powerMatrix")
    {
        type=dataType();
        cout<<"Podaj ilosc wierszy i kolumn:";
        rows=checkIfNum();
        columns=checkIfNum();
            if(type==1)
            {
                double** A=readMatrixd(rows,columns);
                cout<<"Podaj wykladnik potegi:";
                power=checkIfNum();
                power=(unsigned)power;
                double** C=powerMatrix(A,power,rows,columns);
                showMatrix(C,rows,columns);
                deleteMatrix(A,rows);
                deleteMatrix(C,rows);
            }
            if(type==2)
            {
                int** A=readMatrix(rows,columns);
                cout<<"Podaj wykladnik potegi:";
                power=checkIfNum();
                power=(unsigned)power;
                int** C=powerMatrix(A,power,rows,columns);
                showMatrix(C,rows,columns);
                deleteMatrix(A,rows);
                deleteMatrix(C,rows);
            }
            return 0;
    }
    if(func=="determinantMatrix")
    {
        type=dataType();
        cout<<"Podaj ilosc wierszy i kolumn:";
        rows=checkIfNum();
        columns=checkIfNum();
        if(type==1)
        {
            double** A=readMatrixd(rows,columns);
            cout<<determinantMatrix(A,rows,columns)<<endl;
            deleteMatrix(A,rows);
        }
        if(type==2)
        {
            int** A=readMatrix(rows,columns);
            cout<<determinantMatrix(A,rows,columns)<<endl;
            deleteMatrix(A,rows);
        }
        return 0;
    }
    if(func=="matrixIsDiagonal")
    {
        type=dataType();
        cout<<"Podaj ilosc wierszy i kolumn:";
        rows=checkIfNum();
        columns=checkIfNum();
        if(type==1)
        {
            double **A = readMatrixd(rows,columns);
            showMatrix(A,rows,columns);
            if (matrixIsDiagonal(A, rows, columns)) {
                cout << "Macierz jest diagonalna\n";
            } else
                cout << "Macierz nie jest diagonalna\n";
            deleteMatrix(A,rows);
        }
        if(type==2)
        {
            int **A= readMatrix(rows,columns);
            showMatrix(A,rows,columns);
            if (matrixIsDiagonal(A, rows, columns)) {
                cout << "Macierz jest diagonalna\n";
            } else
                cout << "Macierz nie jest diagonalna\n";
            deleteMatrix(A,rows);
        }
        return 0;
    }
    if(func=="swap")
    {
        type=dataType();
        if(type==2)
        {
            int a,b;
            cout<<"Podaj dwie wartosci do zamiany:";
            a=checkIfNum();
            b=checkIfNum();
            swap(a,b);
            cout<<"a ="<<a<<" b ="<<b<<endl;
        }if(type==1)
        {
            double a,b;
            cout<<"Podaj dwie wartosci do zamiany:";
            a=checkIfNumD();
            b=checkIfNumD();
            swap(a,b);
            cout<<"a ="<<a<<" b ="<<b<<endl;
        }
        return 0;
    }
    if(func=="sortRow")
    {
        type=dataType();
        cout<<"Podaj rozmiar tablicy:";
        columns=checkIfNum();
        cout<<"Wprowadz wartosci do tablicy:";
        if(type==1)
        {
            double *tab = new double [columns];
            for(int i=0;i<columns;i++)
                cin>>tab[i];

            sortRow(tab,columns);
            for(int i=0;i<columns;i++)
                cout<<tab[i]<<" ";
        }
        if(type==2)
        {
            int *tab = new int [columns];
            for (int i = 0; i < columns; i++)
                cin >> tab[i];
            sortRow(tab,columns);
            for(int i=0;i<columns;i++)
                cout<<tab[i]<<" ";
        }
        return 0;
    }
    if(func=="sortRowsInMatrix")
    {
        type=dataType();
        cout<<"Podaj ilosc wierszy i kolumn:";
        rows=checkIfNum();
        columns=checkIfNum();
        if(type==1)
        {
            double **A = readMatrixd(rows,columns);
            sortRowsInMatrix(A,rows,columns);
            showMatrix(A,rows,columns);
            deleteMatrix(A,rows);
        }
        if(type==2)
        {
            int **A= readMatrix(rows,columns);
            sortRowsInMatrix(A,rows,columns);
            showMatrix(A,rows,columns);
            deleteMatrix(A,rows);
        }
        return 0;
    }
    else
    {
        cout<<"Nieprawidlowo wprowadzony parametr!\n";
        help();
        return 1;
    }
}
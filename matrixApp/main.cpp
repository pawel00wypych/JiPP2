#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc,char* argv[])
{
    int rows,columns,columnsB,type,n;
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
            deleteMatrix(B,columns);
            deleteMatrix(C,rows);
        }
        if(type==2)
        {
            int** A=readMatrix(rows,columns);
            int** B=readMatrix(columns,columnsB);
            int** C=multiplyMatrix(A,B,rows,columns,columnsB);
            showMatrix(C,rows,columnsB);
            deleteMatrix(A,rows);
            deleteMatrix(B,columns);
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
            scalar=checkIfNum();
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
            A=transpozeMatrix(A,rows,columns);
            cout<<"Transpozycja macierzy A\n";
            showMatrix(A,columns,rows);
            deleteMatrix(A,rows);
        }
        if(type==2)
        {
            int** A=readMatrix(rows,columns);
            cout<<"Macierz A\n";
            showMatrix(A,rows,columns);
            A=transpozeMatrix(A,rows,columns);
            cout<<"Transpozycja macierzy A\n";
            showMatrix(A,columns,rows);
            deleteMatrix(A,rows);
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
                double** C=powerMatrix(A,rows,columns,power);
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
                int** C=powerMatrix(A,rows,columns,power);
                showMatrix(C,rows,columns);
                deleteMatrix(A,rows);
                deleteMatrix(C,rows);
            }
            return 0;
    }
    if(func=="determinantMatrix")
    {//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        type=dataType();
        cout<<"Podaj ilosc wierszy i kolumn:";
        rows=checkIfNum();
        columns=checkIfNum();
        if(type==1)
        {
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
        if(type==1)
        {
            cout<<"Podaj ilosc wierszy i kolumn:";
            cin>>rows>>columns;
            double **A = readMatrixd(rows,columns);
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<columns;j++)
                {
                    cout<<" "<<A[i][j]<<" ";
                }
                cout<<endl;
            }
            if(matrixIsDiagonal(A, rows, columns))
            {
                cout<<"Macierz jest diagonalna\n";
            }
            else
            {
                cout<<"Macierz nie jest diagonalna\n";
            }
            deleteMatrix(A,rows);
        }
        if(type==2)
        {
            cout<<"Podaj ilosc wierszy i kolumn:";
            cin>>rows>>columns;
            int **A= readMatrix(rows,columns);
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<columns;j++)
                {
                    cout<<" "<<A[i][j]<<" ";
                }
                cout<<endl;
            }
            if(matrixIsDiagonal(A, rows, columns))
            {
                cout<<"Macierz jest diagonalna\n";
            }
            else
            {
                cout<<"Macierz nie jest diagonalna\n";
            }
            deleteMatrix(A,rows);
        }
        return 0;
    }
    if(func=="Swap")
    {
        cout<<"Dane typu\ndouble - 1\nint - 2\n";
        cin>>n;
        if(n==2)
        {
            int a,b;
            cout<<"Podaj dwie wartosci do zamiany:";
            cin>>a>>b;
            swap(a,b);
            cout<<"a ="<<a<<" b ="<<b<<endl;
            return 0;
        }if(n==1)
        {
            double a,b;
            cout<<"Podaj dwie wartosci do zamiany:";
            cin>>a>>b;
            swap(a,b);
            cout<<"a ="<<a<<" b ="<<b<<endl;
            return 0;
        }
    }
    if(func=="sortRow")
    {
        if(type==1)
        {
            int size;
            cout<<"Podaj rozmiar tablicy:";
            cin>>size;
            double *tab = new double [size];
            cout<<"Wprowadz wartosci do tablicy:";
            for(int i=0;i<size;i++)
            {
                cin>>tab[i];
            }
            sortRow(tab,size);
            for(int i=0;i<size;i++)
                cout<<tab[i]<<" ";
        }
        if(type==2)
        {
            int size;
            cout<<"Podaj rozmiar tablicy:";
            cin>>size;
            int *tab = new int [size];
            cout<<"Wprowadz wartosci do tablicy:";
            for(int i=0;i<size;i++)
            {
                cin>>tab[i];
            }
            sortRow(tab,size);
            for(int i=0;i<size;i++)
            cout<<tab[i]<<" ";
        }
        return 0;
    }
    if(func=="sortRowsInMatrix")
    {
        if(type==1)
        {
            cout<<"Podaj ilosc wierszy i kolumn:";
            cin>>rows>>columns;
            double **A = readMatrixd(rows,columns);
            sortRowsInMatrix(A,rows,columns);
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<columns;j++)
                {
                    cout<<" "<<A[i][j]<<" ";
                }
                cout<<endl;
            }
            deleteMatrix(A,rows);
        }
        if(type==2)
        {
            cout<<"Podaj ilosc wierszy i kolumn:";
            cin>>rows>>columns;
            int **A= readMatrix(rows,columns);
            sortRowsInMatrix(A,rows,columns);
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<columns;j++)
                {
                    cout<<" "<<A[i][j]<<" ";
                }
                cout<<endl;
            }
            deleteMatrix(A,rows);
        }
        return 0;
    }
    else
    {
        cout<<"Nieprawidlowo wprowadzony parametr!\n";
        help();
        return 0;
    }
}
#include <iostream>

using namespace std;

int main() {
    int rozmiar,rozmiar2;

    for(int i=0;i<5;++i)
    {
        cout<<"JIPP2"<<endl;
    }

    cout << "Podaj rozmiar tablicy 2D:";
    cin >> rozmiar;

    int **tablica = new int *[rozmiar];
    for ( int i = 0; i < rozmiar; ++i )
    {

        tablica[i] = new int [rozmiar]; //alokacja pamieci
        for ( int j = 0; j < rozmiar; ++j)
        {
            tablica[i][j]=i+j;
            cout<<" "<<tablica[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<rozmiar;++i)
        delete[] tablica[i];//uwolnienie pamieci
    delete [] tablica;//uwolnienie pamieci


    cout<<endl<<"---------------------------------------------"<<endl;
    cout << "Podaj rozmiar tablicy 3D:";
    cin >> rozmiar2;

    int ***tab3d = new int **[rozmiar2];
    for ( int i = 0; i < rozmiar2; ++i )
    {
        cout<<endl<<"pietro i:"<<i<<endl;
        tab3d[i] = new int *[rozmiar2]; //alokacja pamieci
        for ( int j = 0; j < rozmiar2; ++j)
        {
            tab3d[i][j] = new int [rozmiar2];
            for(int l=0;l<rozmiar2;++l)
            {
                tab3d[i][j][l] = i + j + l;
                cout << " " << tab3d[i][j][l];
            }
            cout<<endl;
        }

    }

    for(int i=0;i<rozmiar2;++i)
    {
        for (int j = 0; j < rozmiar2; ++j)
            delete[] tab3d[i][j];//uwolnienie pamieci
        delete[]  tab3d[i];
    }
    delete [] tab3d;//uwolnienie pamieci

    return 0;
}

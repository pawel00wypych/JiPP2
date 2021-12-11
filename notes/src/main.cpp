#include "Note.h"

int main()
{
    cout<<"******************************App notes*************************************\n\n";
    /*
    TextNote tn1("","pierwsza notatka");
    cout<<"tytul notatki:"<<tn1.getTitle()<<" zawartosc:"<<tn1.getContent(1)<<"\n";
    tn1.setContent();
    cout<<"\ntytul notatki:"<<tn1.getTitle()<<"\nzawartosc:"<<tn1.getContent(1)<<"\n";

    string tab[10] = {"chleb","","szynka","ser","maslo i dzem",""};
    ListNote ln(*tab,"pierwsza lista");
    cout<<"\ntytul listy:"<<ln.getTitle()<<"\nzawartosc listy:\n";
    for(int i=0;i<10;i++)
        cout<<"-"<<ln.getContent(i)<<"\n";

    ln.setContent();
    cout<<"\ntytul listy:"<<ln.getTitle()<<"\nzawartosc listy:\n";
    for(int i=0;i<10;i++)
        cout<<"-"<<ln.getContent(i)<<"\n";*/
    NoteDirectory notes;
    while(1)
    {
        int x;
        cout<<"1 - utworz notatke\n2 - edytuj notatke\n3 - usun notatke\n4 - usun wszystkie notatki\n5 - pokaz notatke\n6 - koniec\n";
        cin>>x;
        getchar();
        switch(x)
        {
            case 1:
                notes.addNote();
                break;
            case 2:
                notes.editNote();
                break;
            case 3:
                notes.deleteNote();
                break;
            case 4:
                notes.clearNotesList();
                break;
            case 5:

                break;
            case 6:
                cout<<"\nDo zobaczenia!\n";
                return 0;
            default:
            {
                cout<<"bledny wybor!";
                exit(3);
            }

        }
    }
}

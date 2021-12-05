//
// Created by HP on 30.11.2021.
//

#include "../include/Note.h"

string Note::getTitle() {
    return title;
}

void Note::setTitle(string &t) {
    title=t;
}

string TextNote::getContent(int) {
    return content;
}

void TextNote::setContent() {
    cout<<"wprowadz zawartosc:";
    getline(cin, content);
    //getchar();
}

string ListNote::getContent(int k) {
    return content[k];
}

void ListNote::setContent() {
    for(int i=0;i<10;i++)
    {
        cout<<i+1<<" linia:";
        getline(cin, content[i]);
      //  getchar();

    }
}

void NoteDirectory::addNote() {
    int n=0;
    cout<<"lista - 1\nnotatka tekstowa - 2";
    cin>>n;
    if(n==1)
    {
        int x;
        cout<<"ile list chcesz dodac:";
        cin>>x;
        for(int i=0;i<x;i++) {
            notesList.push_back(ListNote());
            string t;
            cout<<"podaj tytul:";
            cin>>t;
            notesList[i].setTitle(t);
            notesList[i].setContent();
        //    getchar();

        }
    }
    if(n==2)
    {
        int x;
        cout<<"ile notatek chcesz dodac:";
        cin>>x;
        for(int i=0;i<x;i++)
        {
            textNotes.push_back(TextNote());
            string t;
            cout<<"podaj tytul:";
            cin>>t;
            textNotes[i].setTitle(t);
            textNotes[i].setContent();
          //  getchar();

        }
    }else {
        cout << "bledny wybor!\n";
        exit(2);
    }
}

void NoteDirectory::deleteNote() {
    int n = 0;
    cout << "lista - 1\nnotatka tekstowa - 2";
    cin >> n;
    if (n == 1) {
        int x;
        cout << "ktora liste chcesz usunac:";
        cin >> x;
        notesList.erase(begin(notesList) + x);
    }
    if (n == 2) {
        int x;
        cout << "ktora notatke chcesz usunac:";
        cin >> x;
        textNotes.erase(begin(textNotes) + x);
    } else {
        cout << "bledny wybor!\n";
        exit(2);
    }
}

void NoteDirectory::clearNotesList() {
    int n = 0;
    cout << "lista - 1\nnotatka tekstowa - 2";
    cin >> n;
    if (n == 1) {
        notesList.clear();
    }
    if (n == 2) {
        textNotes.clear();
    } else {
        cout << "bledny wybor!\n";
        exit(2);
    }
}

void NoteDirectory::editNote() {
    int n = 0;
    cout << "lista - 1\nnotatka tekstowa - 2";
    cin >> n;
    if (n == 1) {
        int x;
        cout << "ktora liste chcesz edytowac:";
        cin>>x;
        notesList[x].setContent();
    }
    if (n == 2) {
        int x;
        cout << "ktora notatke chcesz edytowac:";
        cin>>x;
        textNotes[x].setContent();

    } else {
        cout << "bledny wybor!\n";
        exit(2);
    }
}

void NoteDirectory::showNote() {

}


#ifndef FIRSTLIBCALL_NOTE_H
#define FIRSTLIBCALL_NOTE_H
#include<iostream>
#include <vector>

using namespace std;

class Note {
private:
    string title;
public:
    Note(){};
    Note(string title):title(title){};
    string getTitle();
    void setTitle(string &t);
    virtual string getContent(int)=0;
    virtual void setContent()=0;
    ~Note(){cout<<"\njestem destruktorem\n";};
};

class TextNote:public Note {
private:
    string content;
public:
    TextNote(){};
    TextNote(string content,string title):content(content),Note(title){};
    string getContent(int);
    void setContent();
    ~TextNote(){};
};

class ListNote:public Note {
private:
    string *content = new string [10];
public:
    ListNote(){};
    ListNote(string &content,string title):Note(title){
        this->content=&content;
    };
    string getContent(int);
    void setContent();
    ~ListNote(){/*delete [] content;*/};
};

class NoteDirectory {
private:
   vector < ListNote > notesList;
   vector < TextNote > textNotes;
public:
    NoteDirectory(){};
    void addNote();
    void deleteNote();
    void editNote();
    void clearNotesList();
    void showNote();
    ~NoteDirectory(){textNotes.clear();notesList.clear();};
};
#endif //FIRSTLIBCALL_NOTE_H

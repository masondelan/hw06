#include "header.h"

void SaveList(BookList *list)
{
    ofstream fout;
    fout.open("booksdb.txt");

    BookEntry *rec;

    rec = list ->head;
    while(rec != nullptr)
    {
        fout << rec->data->isbn   << endl;
        fout << rec->data->author << endl;
        fout << rec->data->title  << endl;

        rec = rec->nxt;
    }
    fout.close();
}
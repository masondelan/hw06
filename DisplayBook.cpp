#include "header.h"

void DisplayBook(BookList *list)
{
    string isbn;
    BookEntry *rec;

    cout << "The isbn of the book you want to search: ";
    getline(cin,isbn);

    rec = list->head;

    while(rec->data->isbn != isbn)
    {
        rec = rec->nxt;
    }
    cout << rec->data->isbn   << endl;
    cout << rec->data->title  << endl;
    cout << rec->data->author << endl;
}
#include "header.h"

void DisplayAllBooks(BookList *list)
{
    BookEntry *rec;

    rec = list->head;

    while(rec != nullptr)
    {
        cout << rec->data->isbn   << endl;
        cout << rec->data->title  << endl;
        cout << rec->data->author << endl;

        rec = rec->nxt;
    }
}
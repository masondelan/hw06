#include "header.h"

void PopList(BookList *&list)
{
    ifstream fin;
    string isbn;
    string author;
    string title;
    string space;

    BookEntry *loop = nullptr;
    BookEntry *rec  = nullptr;


    list = new BookList;
    list ->rc  = 0;
    list->head = nullptr;
    list->tail = nullptr;

    fin.open("booksdb.txt");
    // read from file and make list
    while(getline(fin,isbn) && getline(fin,author) && getline(fin,title) && getline(fin,space))
    {
        loop = new BookEntry;
        loop->lst  = list;
        loop->nxt  = nullptr;
        loop->data = new BookData;

        if(list->head == nullptr)
        {
            list->head = loop;
            loop->prv  = nullptr;
        } else
        {
            loop->prv = rec;
            rec->nxt  = loop;
        }
        list->tail = loop;
        rec = loop;
        rec->data->isbn   = isbn;
        rec->data->author = author;
        rec->data->title  = title;
        ++list->rc;
    }
    fin.close();
}
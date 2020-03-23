#include "header.h"

void AddBook(BookList *list)
{
    string isbn;
    string author;
    string title;


    cout << "What is the isbn for the book?" << endl;
    getline(cin,isbn);
    cout << "Who is the author of the book?" << endl;
    getline(cin,author);
    cout << "What is the title for the book?" << endl;
    getline(cin,title);

    BookEntry *loop;
    BookEntry *rec;

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
        loop->prv = list->tail;
        list->tail -> nxt = loop;
    }
    list->tail = loop;
    rec = loop;
    rec->data->isbn   = isbn;
    rec->data->author = author;
    rec->data->title  = title;
    ++list->rc;
}
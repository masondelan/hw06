#include "header.h"

void DeleteBook(BookList *list)
{
    BookEntry *tem;
    BookEntry *prv;
    string isbn;

    cout << "The isbn of the book you want to delete: ";
    getline(cin,isbn);

    tem = list->head;

    while(tem->data->isbn != isbn)
    {
        tem = tem->nxt;
    }

    if(tem->prv == nullptr && tem->nxt == nullptr)
    {
        list->head = nullptr;
        list->tail = nullptr;
    } else if (tem->prv == nullptr)
    {
        list->head = tem->nxt;
        tem->nxt->prv = nullptr;
    } else if(tem->nxt == nullptr)
    {
        prv = tem->prv;
        list->tail = prv;
        prv->nxt = nullptr;
    } else
    {
        prv = tem->prv;
        prv->nxt = tem->nxt;
        tem->nxt->prv = prv;
    }

    delete tem->data;
    delete tem;
    list->rc = list->rc -1;


}
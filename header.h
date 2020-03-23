
#ifndef HW06_HEADER_H
#define HW06_HEADER_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

typedef struct BookList BookList;
typedef struct BookEntry BookEntry;
typedef struct BookData BookData;



struct BookList {
    int rc;
    BookEntry *head;
    BookEntry *tail;
};

struct BookEntry {
    BookList *lst;
    BookEntry *nxt;
    BookEntry *prv;
    BookData *data;
};

struct BookData {
    string isbn;
    string author;
    string title;
};

void PopList(BookList *&list);

void MenuPrompt();

void AddBook(BookList *list);

void DeleteBook(BookList *list);

void DisplayBook(BookList *list);

void DisplayAllBooks(BookList *list);

void SaveList(BookList *list);

#endif //HW06_HEADER_H

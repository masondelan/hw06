#include "header.h"


int main() {

    int userInput;

    BookList *list = nullptr;
    BookEntry *loop;


    PopList(list);


    MenuPrompt();

    cin >> userInput;
    cout << endl;
    cin.ignore(10000, '\n');

    while(userInput != 5)
    {
        switch(userInput)
        {
            case 1:
                AddBook(list);
                cout << "Book has been added." << endl << endl;
                break;

            case 2:
                DeleteBook(list);
                cout << "The book has been deleted." << endl << endl;
                break;

            case 3:
                DisplayBook(list);
                break;

            case 4:
                DisplayAllBooks(list);
                break;

            default :
                cout << "Not a valid Input!" << endl << endl;

        }
        MenuPrompt();
        cin >> userInput;
        cout << endl;
        cin.ignore(10000, '\n');
    }

    SaveList(list);

    loop = list->head;
    BookEntry *todel = loop;
    while (loop)
    {
        loop = loop->nxt;
        delete todel->data;
        delete todel;
        todel = loop;
    }

    delete list;

    return 0;
}

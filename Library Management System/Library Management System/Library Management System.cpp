#include "library.h"


int main()
{
    Library obj;
    Library::Book Books[SIZE];
    int choice;
    int secondChoice;
    int occupiedBookID;
    string nameOfNewBook;
    string nameAuthorOfNewBook;
    char switchSymbol{ 0 };
    for (int i = 0; i < SIZE; i++)
    {
        Books[i].name = "Book";
        Books[i].author = "Author";
        Books[i].id = i;
    }

    obj.showBooks(Books);

    while (true)
    {
        cout << "Select a book by its ID: ";
        cin >> choice;
        for (int i = 0; i < SIZE; i++)
            if (Books[i].id == choice)
            {
                Books[i].availabilityStatus = "Unavailable";
                cout << "Do you want to add a book?\n" <<
                    "1)Yes\n" <<
                    "2)No\n";
                cin >> secondChoice;
                if (secondChoice == 1)
                {
                    cout << "Select the id of the book that is occupied and place a new one by filling in the following parameters:\n";
                    cout << "ID of the occupied book: ";
                    cin >> occupiedBookID;
                    cout << "The name of the book: ";
                    cin >> nameOfNewBook;
                    cout << "The author of the book: ";
                    cin >> nameAuthorOfNewBook;
                    Books[occupiedBookID].name = nameOfNewBook;
                    Books[occupiedBookID].author = nameAuthorOfNewBook;
                }
                else if (secondChoice == 2)
                    continue;
            }

        cout << endl;

        cout << "========================================UPDATED LIST OF BOOKS========================================\n";
        obj.showBooks(Books);
        cout << "To finish, enter q/Q or another one to continue\n";
        cin >> switchSymbol;
        if (switchSymbol == 'q' || switchSymbol == 'Q')
            break;
    }

    return 0;
}
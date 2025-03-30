#include "library.h"
const int sizeOfUser = 3;

int main()
{
    Library obj;
    Library::Book Books[SIZE];
    LibraryUser::User Users[sizeOfUser];
    LibraryUser callMethod;
    int choice;
    int secondChoice;
    int thirdChoice;
    int choiceUser;
    char switchSymbol{ 0 };
    cout << "==================================================LIBRARY==================================================\n";
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        Books[i].name = "Book";
        Books[i].author = "Author";
        Books[i].id = i;
    }

    obj.showBooks(Books);
    cout << "===========================================================================================================\n";
    for (int i = 0; i < sizeOfUser; i++)
    {
        cout << "Enter the username for registration: ";
        cin >> Users[i].name;
        Users[i].id = rand() % 1000;
    }
    while (true)
    {
        cout << "Select a user: \n";
        for (int i = 0; i < 3; i++)
            cout << i << ") " << Users[i].name << endl;
        
        cin >> choiceUser;

        cout << "Hi, " << Users[choiceUser].name << "! " << "select a book by its ID: ";
        cin >> choice;

        for (int i = 0; i < SIZE; i++)
        {
            if (Books[i].id == choice)
            {
                Books[i].availabilityStatus = "Unavailable";
                callMethod.managingBorrowedBooks(Users, choiceUser);
                *Users[choiceUser].books = Books[i];
            }
                else
                    continue;
            }
        cout << "Find out user information?\n"
            << "1)Yes\n"
            << "2)No\n";

        cin >> thirdChoice;
        if (thirdChoice == 1)
            callMethod.userInfo(Users[choiceUser]);
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
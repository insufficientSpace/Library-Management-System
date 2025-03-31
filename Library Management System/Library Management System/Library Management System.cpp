#include "library.h"
const int sizeOfUser = 3;

int main() {
    Library obj;
    Library::Book Books[SIZE];
    LibraryUser::User Users[sizeOfUser];
    LibraryUser callMethod;

    cout << "==================================================LIBRARY==================================================\n";
    for (int i = 0; i < SIZE; i++) {
        Books[i].name = "Book" + to_string(i + 1);
        Books[i].author = "Author" + to_string(i + 1);
        Books[i].id = i;
    }

    obj.showBooks(Books);
    cout << "===========================================================================================================\n";

    // Регистрация пользователей
    for (int i = 0; i < sizeOfUser; i++) {
        cout << "Enter the username for registration: ";
        cin >> Users[i].name;
        Users[i].id = rand() % 1000; // Генерация случайного ID
        Users[i].borrowedCount = 0; // Инициализация количества взятых книг
    }

    while (true) {
        cout << "Select a user: \n";
        for (int i = 0; i < sizeOfUser; i++)
            cout << i + 1 << ") " << Users[i].name << endl;

        int choiceUser;
        cin >> choiceUser;

        if (choiceUser < 1 || choiceUser > sizeOfUser) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }

        // Вызов метода управления взятыми книгами
        callMethod.managingBorrowedBooks(Books, SIZE, Users[choiceUser - 1]);

        cout << "=============================================Updated list of books:=============================================\n";
        obj.showBooks(Books);
        cout << "================================================================================================================\n";
        // Вызов метода для отображения информации о пользователе
        callMethod.userInfo(Users[choiceUser - 1]);

        char continueChoice;
        cout << "Do you want to continue? (y/n): ";
        cin >> continueChoice;
        if (continueChoice != 'y') break;
    }

    return 0;
}
#include "library.h"

void Library::showBooks(Book Obj[]) const {
    for (int i = 0; i < SIZE; i++) {
        if (!Obj[i].name.empty()) { // Проверяем, что книга существует
            cout << "------------------------------------------------------------\n";
            cout << "Book ID: " << Obj[i].id << endl;
            cout << "The name of the book: " << Obj[i].name << endl;
            cout << "The author of the book: " << Obj[i].author << endl;
            cout << "The book's availability status: " << Obj[i].availabilityStatus << endl;
            cout << "------------------------------------------------------------\n";
            cout << endl;
        }
    }
}

void LibraryUser::userInfo(User& user) const {
    cout << "Username: " << user.name << endl;
    cout << "User ID: " << user.id << endl;

    cout << "List of books taken:\n";
    for (int i = 0; i < user.borrowedCount; i++) {
        cout << i + 1 << ") " << user.books[i].name << ", book ID: " << user.books[i].id << endl;
    }
}

void LibraryUser::managingBorrowedBooks(Library::Book libraryBooks[], int totalBooks, User& user) {
    int choice;
    cout << "Do you want to borrow a book?\n1) Yes\n2) No\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Available books:\n";
        for (int i = 0; i < totalBooks; i++) {
            if (libraryBooks[i].availabilityStatus == "Available") {
                cout << libraryBooks[i].id << ") " << libraryBooks[i].name << endl;
            }
        }

        cout << "Enter the ID of the book you want to borrow: ";
        int bookId;
        cin >> bookId;

        // Проверка на доступность книги
        for (int i = 0; i < totalBooks; i++) {
            if (libraryBooks[i].id == bookId && libraryBooks[i].availabilityStatus == "Available") {
                user.books[user.borrowedCount++] = libraryBooks[i]; // добавляем книгу пользователю
                libraryBooks[i].availabilityStatus = "Borrowed"; // меняем статус книги
                cout << "You have borrowed: " << libraryBooks[i].name << endl;
                return;
            }
        }
        cout << "Book not found or already borrowed." << endl;
    }
}
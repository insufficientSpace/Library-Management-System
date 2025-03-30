#include "library.h"

void Library::showBooks(Book Obj[]) const
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "------------------------------------------------------------\n";
		cout << "Book ID: " << Obj[i].id << endl;
		cout << "The name of the book: " << Obj[i].name << endl;
		cout << "The author of the book: " << Obj[i].author << endl;
		cout << "The book's availability status: " << Obj[i].availabilityStatus << endl;
		cout << "------------------------------------------------------------\n";
		cout << endl;
	}
}

void LibraryUser::userInfo(LibraryUser::User&user) const
{
	cout << "Username: " << user.name << endl;
	cout << "User ID: " << user.id << endl;

	cout << "List of books taken:\n";
	for (int i = 0; i < SIZE; i++)
	{
		if(user.books[i].name != "")
			cout << i << ")" << user.books[i].name << ", book ID:" << user.books[i].id << endl;
	}
}

void LibraryUser::managingBorrowedBooks(LibraryUser::User users[], int activeID)
{
	int choice;
	int occupiedBookID;
	string nameOfNewBook;
	string nameAuthorOfNewBook;
	cout << "Do you want to add a book?\n" <<
		"1)Yes\n" <<
		"2)No\n";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Select the id of the book that is occupied and place a new one by filling in the following parameters:\n";
		cout << "ID of the occupied book: ";
		cin >> occupiedBookID;
		cout << "The name of the book: ";
		cin >> nameOfNewBook;
		cout << "The author of the book: ";
		cin >> nameAuthorOfNewBook;
		users[activeID].books[occupiedBookID].name = nameOfNewBook;
		users[activeID].books[occupiedBookID].author = nameAuthorOfNewBook;
	}
}
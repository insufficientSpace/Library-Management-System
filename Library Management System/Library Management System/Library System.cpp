#include "library.h"

void Library::showBooks() const
{
	cout << Library::Books << endl;
}

void Library::bookInfo(Library& obj) const
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Book ID: " << obj.Books[i].id << endl;
		cout << "The name of the book: " << obj.Books[i].name << endl;
		cout << "The author of the book: " << obj.Books[i].author << endl;
		cout << "The book's availability status: " << obj.Books[i].availabilityStatus << endl;
	}
}

void Library::updateAvailabilityStatus()
{

}
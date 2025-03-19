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
		cout << "-------------------------------------------------------------\n";
		cout << endl;
	}
}
#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>

using namespace std;
const int SIZE = 10;

class Library
{
public:
	struct Book
	{
		int id;
		string name;
		string author;
		string availabilityStatus = "Available";
	};
	void showBooks(Book[]) const;//список книг
};

class LibraryUser
{
public:
	struct User
	{
		int id;
		string name;
		Library::Book books[SIZE];
	};
	void userInfo(LibraryUser::User&) const;//информаци€ о пользователе
	void managingBorrowedBooks(LibraryUser::User[], int);//”правление заемными книгами
};
#endif // !LIBRARY_H
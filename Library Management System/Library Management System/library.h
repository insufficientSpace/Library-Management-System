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
	void showBooks(Book[]) const;//������ ����
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
	void userInfo(LibraryUser::User&) const;//���������� � ������������
	void managingBorrowedBooks(LibraryUser::User[], int);//���������� �������� �������
};
#endif // !LIBRARY_H
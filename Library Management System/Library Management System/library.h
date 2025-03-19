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
	};
	void listOfBooksTaken(Library&) const;//список взятых книг
	void userInfo(User&) const;//информация о пользователе
	void managingBorrowedBooks(User&);//Управление заемными книгами
	void returnPeriod(Library&);//срок возврата
	void addUser();//добавление пользователя
};
#endif // !LIBRARY_H
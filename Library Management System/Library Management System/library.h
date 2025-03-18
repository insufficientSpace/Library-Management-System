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
	Book Books[SIZE];
	void showBooks() const;//список книг
	void addBook();//добавление книги
	void bookInfo(Library&) const;//информация о книге
	void updateAvailabilityStatus();//обновление статуса доступности книги
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
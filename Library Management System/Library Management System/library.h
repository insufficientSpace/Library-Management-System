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
	void showBooks() const;//������ ����
	void addBook();//���������� �����
	void bookInfo(Library&) const;//���������� � �����
	void updateAvailabilityStatus();//���������� ������� ����������� �����
};

class LibraryUser
{
public:
	struct User
	{
		int id;
		string name;
	};
	void listOfBooksTaken(Library&) const;//������ ������ ����
	void userInfo(User&) const;//���������� � ������������
	void managingBorrowedBooks(User&);//���������� �������� �������
	void returnPeriod(Library&);//���� ��������
	void addUser();//���������� ������������
};
#endif // !LIBRARY_H
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
	};
	void listOfBooksTaken(Library&) const;//������ ������ ����
	void userInfo(User&) const;//���������� � ������������
	void managingBorrowedBooks(User&);//���������� �������� �������
	void returnPeriod(Library&);//���� ��������
	void addUser();//���������� ������������
};
#endif // !LIBRARY_H
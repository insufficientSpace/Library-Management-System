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
    void showBooks(Book[]) const; // ����� ��� ������ ����
};

class LibraryUser
{
public:
    struct User
    {
        int id;
        string name;
        Library::Book books[SIZE]; // ������ ���� ������������
        int borrowedCount = 0; // ���������� ������ ����
    };
    void userInfo(User&) const; // ���������� � ������������
    void managingBorrowedBooks(Library::Book[], int, User&); // ���������� ������� �������
};
#endif // !LIBRARY_H
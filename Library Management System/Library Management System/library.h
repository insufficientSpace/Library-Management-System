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
    void showBooks(Book[]) const; // метод для показа книг
};

class LibraryUser
{
public:
    struct User
    {
        int id;
        string name;
        Library::Book books[SIZE]; // массив книг пользователя
        int borrowedCount = 0; // количество взятых книг
    };
    void userInfo(User&) const; // информация о пользователе
    void managingBorrowedBooks(Library::Book[], int, User&); // управление взятыми книгами
};
#endif // !LIBRARY_H
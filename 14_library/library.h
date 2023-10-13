#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

const int SIZE = 50;
struct Book
{
	char name[SIZE];
	char author[SIZE];
	char publisher[SIZE];
	char genre[SIZE];
};
void printBook(Book book, string text = "");
void printBooks(Book* library, int size);
void editBook(Book& book);
char* toLowerCase(char* line);
int findByAuthor(Book* library, int size, char* author, int start = 0);
void sortByName(Book* library, int left, int right);
void insert(Book*& arr, int& size, int index, Book value);
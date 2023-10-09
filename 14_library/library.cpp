#include "library.h"

void printBook(Book book, string text)
{
	cout << "\n\n\t======================== " << text << " =========================" << endl;
	cout << "\t\t Name      :: " << book.name << endl;
	cout << "\t\t Author    :: " << book.author << endl;
	cout << "\t\t Publisher :: " << book.publisher << endl;
	cout << "\t\t Genre     :: " << book.genre << endl;
}

void printBooks(Book* library, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		printBook(library[i], "Book " + to_string(i + 1));
	}
}

void editBook(Book& book)
{
	cout << "\n\n\t======================== " << book.name << " =========================" << endl;
	cout << "\t\t Enter Name      :: "; cin.getline(book.name,SIZE);
	cout << "\t\t Enter Author    :: "; cin.getline(book.author,SIZE);
	cout << "\t\t Enter Publisher :: "; cin.getline(book.publisher,SIZE);
	cout << "\t\t Enter Genre     :: "; cin.getline(book.genre,SIZE);
}

char* toLowerCase(char* line)
{
	char* new_line = new char[strlen(line) + 1];
	for (size_t i = 0; i < strlen(line); i++)
	{
		new_line[i] = tolower(line[i]);
	}
	new_line[strlen(line)] = '\0';
	return new_line;
}

int findByAuthor(Book* library, int size, char* author, int start)
{
	for (size_t i = start; i < size; i++)
	{
		if (strcmp(toLowerCase(library[i].author), toLowerCase(author)) == 0) {
			return i;
		}
	}
	return -1;
}

void sortByName(Book* library, int left, int right)
{
	Book pivot = library[left];
	int tmp_l = left;
	int tmp_r = right;

	while (left < right)
	{
		
		while (strcmp(toLowerCase(library[right].name), toLowerCase(pivot.name)) > 0 && left < right) right--;
		if (left != right) {
			library[left] = library[right];
			left++;
		}
		while (strcmp(toLowerCase(library[left].name), toLowerCase(pivot.name)) <  0 && left < right) left++;
		if (left != right) {
			library[right] = library[left];
			right--;
		}
	}
	int index = left;
	library[index] = pivot;
	left = tmp_l;
	right = tmp_r;
	if (left < index) {
		sortByName(library, left, index - 1);
	}
	if (right > index) {
		sortByName(library, index + 1, right);
	}
}

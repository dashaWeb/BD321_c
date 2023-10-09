#include <iostream>
#include "library.h"
using namespace std;



int main()
{
	int size = 10;
	Book* library = new Book[size]{
		{"Iron Flame","Rebecca Yarros","Entangled: Red Tower Books","Fantasy"},
		{"The Ever King","LJ Andrews","Victorious","Fantasy"},
		{"Harry Potter and the Philosopher's Stone","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
		{"Harry Potter and the Chamber of Secrets","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
		{"Harry Potter and the Prisoner of Azkaban","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
		{"Harry Potter and the Order of the Phoenix","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
		{"Harry Potter and the Half-Blood Prince","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
		{"Crown of Blood and Ruin","LJ Andrews","Victorious","Dark Fantasy Horror"},
		{"Battlefield Reclaimer","David North","High Peak Publishing","Fiction"},
		{"Swords of Empire","Robert Ryan","Trotting Fox Press","Fantasy"},
	};
	printBooks(library, size);
	//editBook(library[0]);
	//printBooks(library, size);
	/*char author[SIZE];
	cin.getline(author, SIZE);
	int index = findByAuthor(library, size, author);
	while (index != -1)
	{
		printBook(library[index]);
		index = findByAuthor(library, size, author, index + 1);
	}*/
	cout << "\n\n=====================================\n\n";
	sortByName(library, 0, size - 1);
	printBooks(library, size);

}

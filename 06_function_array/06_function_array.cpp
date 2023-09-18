#include <iostream>
#include <ctime>
using namespace std;


void printArray(int mas[], int size, string text = "")
{
	cout << text << (text.size() < 2 ? "" : " :: ");
	for (size_t i = 0; i < size; i++)
	{
		cout << mas[i] << "\t";
	}
	cout << endl;
}

void fillArray(int mas[], int size, int min = 1, int max = 10) {
	for (size_t i = 0; i < size; i++)
	{
		mas[i] = min + rand() % (max - min + 1);
	}
}

int main()
{
	/*srand((unsigned)time(0));

	const int SIZE = 10;
	int arr[SIZE]{};

	fillArray(arr, SIZE,-50,100);
	printArray(arr, SIZE, "Print Array");*/
	/*string name[4]{"Diamonds","Hearts ","Clubs","Spades"};
	char number[9]{ '6','7','8','9','10','J','Q','K','A' };
	cout << "\t 1 - Diamonds; \n\t 2 - Hearts;";
	int choice;
	cin >> choice;
	cout << "\t 1 - 6; \n\t 2 - 7; 3 - 8";
	int numb;
	cin >> numb;
	cout << number[numb - 1] << name[choice - 1] << endl;*/

	/*for (size_t i = 0; i < 259; i++)
	{
		cout << char(i) << endl;
	}*/

}

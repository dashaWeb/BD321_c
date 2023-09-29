#include <iostream>
using namespace std;



void fill(int** arr, int row, int col, int min = 1, int max = 10) {
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = min + rand() % (max - min + 1);
		}
	}
}

void print(int** arr, int row, int col, string text = "") {
	cout << text << endl;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int** createArray(int row, int col) {
	int** tmp = new int* [row];
	for (size_t i = 0; i < row; i++)
	{
		tmp[i] = new int[col];
	}
	return tmp;
}
void createArray(int**& arr, int row, int col) {
	int** tmp = new int* [row];
	for (size_t i = 0; i < row; i++)
	{
		tmp[i] = new int[col];
	}
	arr = tmp;
}
void deleteArray(int**& arr, int row) {
	for (size_t i = 0; i < row; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;

	arr = nullptr;
}
//Написати функцію, що додає рядок двовимірному масиву в зазначену позицію.
void insert(int**& arr, int& row, int col, int index) {
	if (index < 0 || index > row) {
		cout << "Error"<< endl;
		return;
	}
	int** tmp = new int* [row + 1];
	tmp[index] = new int[col] {};

	for (size_t i = 0; i < row; i++)
	{
		if (i < index) {
			tmp[i] = arr[i];
		}
		else {
			tmp[i + 1] = arr[i];
		}
	}
	row++;
	delete[] arr;
	arr = tmp;
	
}
void pushFront(int**& arr, int& row, int col) {
	insert(arr, row, col, 0);
}
void pushBack(int**& arr, int& row, int col) {
	insert(arr, row, col, row);
}

void remove(int**& arr, int& row, int index) {
	if (index < 0 || index >= row) {
		cout << "Error" << endl;
		return;
	}
	int** tmp = new int* [--row];
	delete[]arr[index];
	for (size_t i = 0; i < row; i++)
	{
		if (i < index) {
			tmp[i] = arr[i];
		}
		else {
			tmp[i] = arr[i + 1];
		}
	}
	delete[] arr;
	arr = tmp;

}
int main()
{
	int** arr, row = 4, col = 5;
	arr = createArray(row, col);
	fill(arr, row, col);
	print(arr, row, col);

	insert(arr, row, col, 2);
	cout << "\n\n---------------------------\n\n" << endl;
	print(arr, row, col);
	deleteArray(arr, row);
	if (arr != nullptr) {
		print(arr, row, col);
	}



	/*arr[0] = new int[col];
	arr[1] = new int[col];
	arr[2] = new int[col];
	arr[3] = new int[col];*/


}


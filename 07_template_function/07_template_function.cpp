#include <iostream>
using namespace std;


//int sum(int a, int b) {
//	return a + b;
//}
//double sum(double a, double b) {
//	return a + b;
//}
//int sum(int a, int b, int c) {
//	return a + b + c;
//}
//int sum(int a, int b, int c, int d) {
//	return a + b + c + d;
//}

template <typename T, typename T2>
auto sum(T a, T2 b) {
	return a + b;
}

template <typename T, typename T2>
auto sum(T a, T2 b, T c) {
	return a + b + c;
}

template <typename T>
void fillArray(T arr[], size_t length, T value) {

	for (size_t i = 0; i < length; i++)
	{
		arr[i] = value;
	}
}

template <typename T>
void fillArray(T arr[], size_t length) {

	for (size_t i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
}

template <typename T, size_t COL>
void fillArray(T arr[][COL], size_t row, size_t col) {
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			cin >> arr[j][i];
		}
	}
}

template <typename T, size_t COL>
void printArray(T arr[][COL], size_t row, size_t col) {
	for (size_t j = 0; j < row; j++)
	{
		for (size_t i = 0; i < col; i++)
		{
			cout << arr[j][i] << "\t";
		}
		cout << endl;
	}
}


template <typename T>
void printArray(T arr[], size_t length) {

	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int main()
{

	const int SIZE = 5;
	int arr_int[SIZE];
	char arr_char[SIZE];
	double arr_double[SIZE];
	bool arr_bool[SIZE];

	/*fillArray(arr_int, SIZE);
	cout << "Print int Array  :: ";
	printArray(arr_int, SIZE);

	fillArray(arr_char, SIZE);
	cout << "Print char Array :: ";
	printArray(arr_char, SIZE);


	fillArray(arr_double, SIZE);
	cout << "Print double Array :: ";
	printArray(arr_double, SIZE);

	fillArray(arr_bool, SIZE);
	cout << "Print bool Array :: " << boolalpha;
	printArray(arr_bool, SIZE);
	*/

	const int row = 3, col = 4;
	int mas[row][col]{};
	fillArray(mas, row, col);
	printArray(mas, row, col);


	/*string word_1 = "Hello";
	string word_2 = "World";
	cout << "Sum 1 :: " << sum(2.9, 5) << endl; 
	cout << "Sum 2 :: " << sum(2, 5) << endl;
	cout << "Sum 3 :: " << sum('2', 'c') << endl;
	cout << "Sum 4 :: " << sum(word_1,word_2 ) << endl;*/
	//cout << "Sum 3 :: " << sum(2, 5, 3, 8) << endl;
}

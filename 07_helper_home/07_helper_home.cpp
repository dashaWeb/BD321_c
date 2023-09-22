#include <iostream>
using namespace std;

template<typename T>
void fillArray(T arr[], size_t length, int min = 1, int max = 10) {
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

template<typename T>
void printArray(T arr[], size_t length, string text = "") {
	cout << text;
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>
void mixArray(T arr[], size_t length, int counter = 4) {
	
	for (size_t i = 0; i < counter; )
	{
		int x = rand() % length;
		int y = rand() % length;
		if (x != y) {
			T tmp = arr[x];
			arr[x] = arr[y];
			arr[y] = tmp;
			i++;
		}
		
	}
}

char toLower(char s) {
	if (s >= 'A' && s <= 'Z') {
		return s + 32;
	}
	return s;
}

int findKey(char arr[], size_t length, char key)
{
	for (size_t i = 0; i < length; i++)
	{
		if (toLower(arr[i]) == toLower(key)) {
			return i;
		}
	}
	return -1;
}

int main()
{
	const int size = 10;
	int arr[size]{};

	fillArray(arr, size);
	printArray(arr, size, "Before :: ");
	mixArray(arr, size);
	printArray(arr, size, "After  :: ");

	

}

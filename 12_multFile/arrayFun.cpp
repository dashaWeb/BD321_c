#include "arrayFun.h"

int* createArray(int size)
{
    return new int[size];
}

void fillArray(int* arr, int size, int min, int max)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

void printArray(int* arr, int size, string text)
{
	cout << text;
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int* mergaArray(int* a, int* b, int size_a, int size_b, int& size_c)
{
	size_c = size_a + size_b;
	int* tmp = createArray(size_c);
	for (size_t i = 0; i < size_c; i++)
	{
		if (i < size_a) {
			tmp[i] = a[i];
		}
		else {
			tmp[i] = b[i - size_a];
		}
	}
	return tmp;
}

bool isFind(int* arr, int size, int number)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == number) {
			return true;
		}
	}
	return false;
}

int countRepeatElement(int* a, int* b, int size_a, int size_b)
{
	int counter = 0;
	for (size_t i = 0; i < size_a; i++)
	{
		bool flag = false;
		for (size_t j = 0; j < i; j++)
		{
			if (a[i] == a[j]) {
				flag = true;
				break;
			}
		}
		if (flag) continue;

		if (isFind(b, size_b, a[i])) {
			counter++;
		}
	}
	return counter;
}

int* createRepeatElement(int* a, int* b, int size_a, int size_b, int& size_c)
{
	size_c = countRepeatElement(a, b, size_a, size_b);
	int* tmp = new int[size_c];
	int counter = 0;
	for (size_t i = 0; i < size_a; i++)
	{
		bool flag = false;
		for (size_t j = 0; j < i; j++)
		{
			if (a[i] == a[j]) {
				flag = true;
				break;
			}
		}
		if (flag) continue;

		if (isFind(b, size_b, a[i])) {
			tmp[counter++] = a[i];
		}
	}
	return tmp;
}

int countNoRepeatElement(int* a, int* b, int size_a, int size_b)
{
	int counter = 0;
	for (size_t i = 0; i < size_a; i++)
	{
		bool flag = false;
		for (size_t j = 0; j < i; j++)
		{
			if (a[i] == a[j]) {
				flag = true;
				break;
			}
		}
		if (flag) continue;

		if (!isFind(b, size_b, a[i])) {
			counter++;
		}
	}
	return counter;
}

int* createNoRepeatElement(int* a, int* b, int size_a, int size_b, int& size_c)
{
	size_c = countNoRepeatElement(a, b, size_a, size_b);
	int* tmp = new int[size_c];
	int counter = 0;
	for (size_t i = 0; i < size_a; i++)
	{
		bool flag = false;
		for (size_t j = 0; j < i; j++)
		{
			if (a[i] == a[j]) {
				flag = true;
				break;
			}
		}
		if (flag) continue;

		if (!isFind(b, size_b, a[i])) {
			tmp[counter++] = a[i];
		}
	}
	return tmp;
}

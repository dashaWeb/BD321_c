#include <iostream>
using namespace std;


void Swap(int* first, int* last) {
	int tmp = *first;
	*first = *last;
	*last = tmp;
}

void print(int* ptr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << *ptr << "\t";
		ptr++;
	}
	cout << endl;
}

void findMax(int* arr, int size, int* maxValue, int* maxPos) {
	int max = *arr;
	int ind = 0;
	for (size_t i = 1; i < size; i++)
	{
		if (max < *(arr + i))
		{
			max = *(arr + i);
			ind = i;
		}
	}
	*maxValue = max;
	*maxPos = ind;
}
int main()
{
	/*int a = 5;
	int b = 7;*/

	//// type * name;
	//int * ptr_a = &a, *ptr_b = &b;
	//cout << "Address A :: " << ptr_a << "\t Value :: " << *ptr_a << endl;
	//cout << "Address B :: " << ptr_b << "\t Value :: " << *ptr_b << endl;
	//cout << "A :: " << a << "\t B :: " << b << endl; // a = 5; b = 7;
	//Swap(ptr_a, &b);
	//cout << "A :: " << a << "\t B :: " << b << endl; // a = 7; b = 5;

	const int size = 5;
	int arr[size]{ 8,5,6,3,4 };
	int* ptr = arr;
	int* ptr_l = arr + size - 1;
	
	print(arr, size);
	for (size_t i = 0; i < size/2; i++)
	{
		Swap(ptr, ptr_l);
		ptr++;
		ptr_l--;
	}
	print(arr, size);
	int max, ind;
	findMax(arr, size, &max, &ind);
	cout << "Max value :: " << max << "\t position :: " << ind << endl;

	
}


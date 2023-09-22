#include <iostream>
using namespace std;


template<typename T>
void uniqValue(T arr[], size_t length, int min = 1, int max = 10)
{
	for (size_t i = 0; i < length;)
	{
		int number = min + rand() % (max - min + 1);
		bool flag = true;
		for (size_t j = 0; j < i; j++)
		{
			if (arr[j] == number) {
				flag = false;
				break;
			}
		}
		if (flag) {
			arr[i] = number;
			i++;
		}
	}
}

template<typename T>
void print(T arr[], size_t length, string text = "") {
	cout << text;
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}

template<typename T>
void quickSort(T arr[], int left, int right) {
	T pivot = arr[left];
	int tmp_l = left;
	int tmp_r = right;

	while (left < right)
	{
		while (arr[right] > pivot && left < right) right--;
		if (left != right) {
			arr[left] = arr[right];
			left++;
		}
		while (arr[left] < pivot && left < right) left++;
		if (left != right) {
			arr[right] = arr[left];
			right--;
		}
	}
	int index = left;
	arr[index] = pivot;
	left = tmp_l;
	right = tmp_r;
	if (left < index) {
		quickSort(arr, left, index - 1);
	}
	if (right > index) {
		quickSort(arr, index + 1, right);
	}
}
template<typename T>
int binarySearch(T arr[], int left, int right, T key) {
	if (left > right) {
		return -1;
	}
	int mid = (left + right) / 2;
	if (arr[mid] == key) {
		return mid;
	}
	if (key < arr[mid]) {
		binarySearch(arr, left, mid - 1, key);
	}
	else if (key > arr[mid]) {
		binarySearch(arr, mid + 1, right, key);
	}

}
//Необхідно відсортувати перші дві третини масиву в порядку зростання, якщо середнє арифметичне всіх елементів більше нуля; в іншому разі — лише першу третину.Іншу частину масиву не сортувати, а розташувати у зворотному порядку.

template<typename T>
auto aver_(T arr[], size_t length) {
	T sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return (double)sum / length;
}

template <typename T>
void reverse(T arr[], int start, int end) {
	if (start >= end) {
		return;
	}
	T tmp = arr[start];
	arr[start] = arr[end];
	arr[end] = tmp;

	reverse(arr, start + 1, end - 1);
}

template<typename T>
void task(T arr[], int length) {
	bool res = aver_(arr, length) > 0;
	int end;
	if (res)
	{
		end = (length / 3) * 2 - 1;
	}
	else {
		end = (length / 3)  - 1;
	}
	quickSort(arr, 0, end);
	reverse(arr, end + 1, length - 1);
}
int main()
{
	const int size = 10;
	int arr[size]{};
	uniqValue(arr, size,-10,0);
	print(arr, size, "Array Before :: ");

	//quickSort(arr, 0, size - 1);
	//print(arr, size, "Array After  :: ");
	//reverse(arr, 3, size - 1);
	task(arr, size);
	print(arr, size, "Array After  :: ");
	//cout << "Binary Search value :: 7 --> " << binarySearch(arr, 0, size - 1, 22) << endl;
}


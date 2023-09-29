#include <iostream>
using namespace std;


//double sum(double a, double b) {
//    return a + b;
//}
//double sub(double a, double b) {
//    return a - b;
//}
//double mult(double a, double b) {
//    return a * b;
//}
//double divi(double a, double b) {
//    return a / b;
//}

bool isPlus(int a) {
	return a > 0;
}
bool isMinus(int a) {
	return a < 0;
}
bool isEven(int a) {
	return a % 2 == 0;
}
bool isOdd(int a) {
	return a % 2 != 0;
}
void print(int* arr, int size, bool(*ptr)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		if (ptr(arr[i])) {
			cout << arr[i] << endl; 
		}
	}
}


int main()
{
	const int size = 10;
	int arr[size]{ 5,-9,6,-3,32,7,-2,-8,3,10 };
	cout << "\n===========Plus============\n";
	print(arr, size, isPlus);
	cout << "\n===========Minus============\n";
	print(arr, size, isMinus);
	cout << "\n===========Even============\n";
	print(arr, size, isEven);
	cout << "\n===========Odd============\n";
	print(arr, size, isOdd);



	/*double(*ptrf[])(double, double) {sum,sub,mult,divi};
	int choice;
	double a, b;
	cout << "Enter first number :: ";
	cin >> a;
	cout << " 1 - sum \n 2 - sub \n 3 - mult \n 4 - divi \n Enter :: ";
	cin >> choice;
	cout << "Enter second number :: ";
	cin >> b;

	cout << "Result :: " << ptrf[choice - 1](a,b) << endl;*/
	/*
	ptrf[0](2, 5);
	ptrf[1](2, 5);
	ptrf[2](2, 5);
	ptrf[3](2, 5);
	*/


	//cout << ptrf(2, 5) << endl; // 7

	//ptrf = sub;
	//cout << ptrf(2, 5) << endl; // -3

	//ptrf = mult;
	//cout << ptrf(2, 5) << endl; // 10

	//ptrf = divi;
	//cout << ptrf(2, 5) << endl; // 0



   /* int a = 5, b = 7;
	const int number = 10;*/

	/*int* const ptr = &a;
	cout << "A :: " << "\t address :: " << ptr << "\t value :: " << *ptr << endl;
	ptr = &b;
	cout << "B :: " << "\t address :: " << ptr << "\t value :: " << *ptr << endl;*/

	/*const int* ptr = &number;
	ptr = &b;
	*ptr = 25;*/
}


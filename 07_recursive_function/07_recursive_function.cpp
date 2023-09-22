#include <iostream>
using namespace std;



int factor(int number) {
	if (number == 1 || number == 0) return 1;
	return number * factor(number - 1);
}
int maxDigit(int number) {
	if (number < 10) {
		return number;
	}
	int max = maxDigit(number / 10);
	int current = number % 10;
	return max > current ? max : current;
	/*if (max > current) {
		return max;
	}
	else {
		return current;
	}*/
}

void draw(int counter)
{
	if (counter == 0) {
		return;
	}
	cout << "(";
	draw(counter - 1);
	cout << ")";
}
int Pow(int number, int power) {
	if (power == 1) {
		return number;
	}
	if (power == 0) {
		return 1;
	}
	return number * Pow(number, power - 1);
}
int main()
{
   // 5! = 5 * 4!
   // 4! = 4 * 3!
   // 3! = 3 * 2!
   // 2! = 2 * 1!
   // 1! = 1
   // 0! = 1
	cout << "Factorial :: " << factor(5) << endl;
	cout << "Max digit :: " << maxDigit(25986) << endl;
	draw(5);
	cout << endl;
	cout << Pow(2, 4) << endl;
	// (((( ))))
	/*
	2^4 --> 2 * 2^3
	2^3 --> 2 * 2^2
	2^2 --> 2 * 2^1
	2^1 --> 2
	2^0 --> 1

	*/
}

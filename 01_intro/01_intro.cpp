#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/
	//setlocale(LC_ALL, ".1251");





	/*cout << "\tHello World\n";
	cout << "\t\tI \\alove \"C++\" " << endl;*/



	// однорядковий коментар

	/*
		багаторядковий коментар
	*/

	// data types

	// numbers
	//      int(4 bytes),short(2 bytes),long long(8 bytes)
	//cout << "int --> " << sizeof(int) << endl;
	//cout << "short --> " << sizeof(short) << endl;
	//cout << "long long --> " << sizeof(long long) << endl;
	//cout << "unsigned int --> " << sizeof(unsigned int) << endl;

	//// float(4 bytes), double(8 bytes)
	//cout << "float --> " << sizeof(float) << endl;
	//cout << "double --> " << sizeof(double) << endl;


	//// char 
	//// char(1 bytes) = 'g'
	//cout << "char --> " << sizeof(char) << endl;

	//// boolean
	//// bool(1 bytes) --> true(1) or false(0)
	//cout << "bool --> " << sizeof(bool) << endl;

	// type name;
	//int number = 5,a = 2,b = 4;
	////int number_2 = { 4.9 } // Error;
	//double number_3 = 3.2;
	//bool flag = true;
	//char symbol = '*';
	//cout << (double)number / a + number_3 - flag + symbol << endl;
	//cout << (int)symbol << endl;
	//cout << number_3 / a << endl; // 1.6

	/*
		-
		+
		*
		/
		%
		()
		a++
		d--
		++a
		--b
	*/

	/*
	Унарний оператор
		a++
		b--
		-
	Бінврний оператор
		a + b
	Тернарний оператор
		a ? b : c
	*/

	//cout << number << endl; // 5
	//cout << number_3 << endl;
	//cout << boolalpha << flag << endl;
	//cout << symbol << endl;



	//int a = 5, b = 2;
	//cout << a++ - b + 2 - (--b) << endl;
	//// 1) --b (1)
	//// 2) a(5) - b(1) --> 4
	//// 3) 4 + 2 --> 6 - 1
	//cout << a << endl;
	//cout << a << endl; // 5
	//cout << --a << endl; //4
	//cout << a << endl; //4


	/*
		==
		>
		<
		>=
		<=
		!=
	*/

	/*
		&& and
		|| or
	*/
	//int a = 5;
	//int b = 7;

	//cout << boolalpha << (a == b) << endl; // false
	//cout << boolalpha << (a > b) << endl; // false
	//cout << boolalpha << (a < b and a != b) << endl; // true
	//cout << boolalpha << (a >= b or a<b) << endl; // true
	//cout << boolalpha << (a <= b) << endl; // true
	//cout << boolalpha << (a != b) << endl; // true

	//cout << boolalpha << (bool)0 << endl;

	/*int first, second;
	cout << "Enter first number :: ";
	cin >> first;
	cout << "Enter second number :: ";
	cin >> second;

	cout << "Result :: " << first << " / " << second << " = " << (float)first / second << endl;
	system("pause");*/


	/*int year;
	cout << "Enter year :: ";
	cin >> year;

	int isLeap = (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0);

	cout << "In " << year << " year " << (365 + isLeap) << endl;*/

	/*int uah = 12, coin = 350;

	uah = uah + (coin / 100);
	coin = coin % 100;

	cout << uah << " uah " << coin << " coin" << endl;*/





}


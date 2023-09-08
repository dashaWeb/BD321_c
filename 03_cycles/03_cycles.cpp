#include <iostream>
//#include <string>
using namespace std;


int main()
{

	//int i = 0; // лічильник
	//while (i < 10) // умова 
	//{ // тіло цикла
	//	cout << i << endl;
	//	i++; // крок
	//}

	/*int res;
	do
	{
		cout << " 2 + 2 = ";
		cin >> res;

	} while (res != 4);*/

	/*for (; ;)
	{
		int number;
		cout << "Enter number :: ";
		cin >> number;
		if (number == 7)
			break;

		cout << "!!!! " << number << endl;
	}*/

	/*string color;
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Enter color :: ";
		cin >> color;
		if (color.size() < 5) continue;
		cout << "!!! " << color << endl;
	}*/

	/*for (size_t j = 1; j <= 10; j++)
	{
		for (size_t i = 1; i < 10; i++)
		{
			cout << j << " x " << i << " = " << j * i;

			cout << endl;
		}
		cout << endl;
	}*/
	//int number = 5;
	/*for (size_t i = 1; i < 10; i++)
	{
		cout << number << " x " << i << " = " << number * i;

		cout << endl;
	}*/


	/*
	10  1
	9   2
	8   3
	7   4
	6   5
	5   6
	4   7
	3   8
	2   9
	1   10

	*/


	/*
	*
	**
	***
	****
	*****
	*/
	//line 1
	//for (size_t i = 0; i < 1; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;
	////line 2
	//for (size_t i = 0; i < 2; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;
	////line 3
	//for (size_t i = 0; i < 3; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;
	////line 4
	//for (size_t i = 0; i < 4; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;
	////line 5
	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;
	/*int line;
	cout << "Enter number of lines :: ";
	cin >> line;
	for (size_t i = 1; i <= line; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	/*
			*
		   ***
		  *****
		 *******
		*********
	*/
	// line 1
	//for (size_t i = 0; i < 4; i++)
	//{
	//	cout << " ";
	//}
	//for (size_t i = 0; i < 1; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;

	//// line 2
	//for (size_t i = 0; i < 3; i++)
	//{
	//	cout << " ";
	//}
	//for (size_t i = 0; i < 3; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;

	//// line 3
	//for (size_t i = 0; i < 2; i++)
	//{
	//	cout << " ";
	//}
	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;

	//// line 4
	//for (size_t i = 0; i < 1; i++)
	//{
	//	cout << " ";
	//}
	//for (size_t i = 0; i < 7; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;

	//// line 5
	//for (size_t i = 0; i < 0; i++)
	//{
	//	cout << " ";
	//}
	//for (size_t i = 0; i < 9; i++)
	//{
	//	cout << "*";
	//}
	//cout << endl;
	/*int line;
	char ss;
	cout << "Enter number of lines :: ";
	cin >> line;
	cout << "Enter symbol :: ";
	cin >> ss;
	for (int sp = line-1, st = 1; sp >= 0; sp--, st += 2)
	{
		for (size_t i = 0; i < sp; i++)
		{
			cout << " ";
		}
		for (size_t i = 0; i < st; i++)
		{
			cout << ss;
		}
		cout << endl;
	}*/
}



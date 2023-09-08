#include <iostream>
//using namespace std;

using std::cout;
using std::cin;
using std::endl;




enum Color
{
	RED = 1,GREEN,BLUE,YELLOW,PURPLE
};

int main()
{
	//double time = 1.5;
	//int minutes = time; // 3
	//int second = minutes * 60 + (time - minutes) * 100; // 3.25 - 3 -> 0.25 * 100 -> 25

	//std::cout << second << std::endl;

	/*
		==
		>
		<
		>=
		<=
		!=

		&& and
		|| or
	*/

	/*int day;
	cout << "Enter number day :: ";
	cin >> day;

	if (day == 1) {
		cout << "Monday" << endl;
	}
	else if (day == 2) {
		cout << "Tuesday" << endl;
	}
	else
	{
		cout << "Error" << endl;
	}*/

	/*int number;
	cout << "Enter number :: ";
	cin >> number;

	if (number > 0 && number < 20) {
		cout << "in range[0.20]" << endl;
	}
	else if(number <= 0 or number >=20){
		cout << "not in range[0.20]" << endl;
	}
	else {
		cout << "Error" << endl;
	}*/

	/*int month;
	cout << "Enter number month :: ";
	cin >> month;

	switch (month)
	{
	default:
		cout << "Error" << endl;
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "31 days" << endl;
		break;
	case 2:
		int year;
		cout << "Enter year :: ";
		cin >> year;
		if (year % 400 == 0 or year % 4 == 0 and year % 100 != 0) {
			cout <<"29 days" << endl;
		}
		else {
			cout <<"28 days" << endl;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30 days" << endl;
		break;
	}*/


	/*const double PI = 3.14;

	cout << "\t 1 - Red; \n\t 2 - Green; \n\t 3 - Blue; \n\t 4 - Yellow; \n\t 5 - Purple; \n\t Enter :: ";

	int color;
	cin >> color;


	switch (color)
	{
	case RED:
		system("Color 40");
		break;
	case GREEN:
		system("Color 20");
		break;
	case BLUE:
		system("Color 10");
		break;
	case YELLOW:
		system("Color 60");
		break;
	case PURPLE:
		system("Color 50");
		break;
	default:
		break;
	}*/


	//////
	/*
		4521
		5412
		
	*/

	/*double max = 0;
	double number;
	cin >> number;
	max = number;
	cin >> number;
	if (number > max) {
		max = number;
	}
	cin >> number;
	if (number > max) {
		max = number;
	}
	cin >> number;
	if (number > max) {
		max = number;
	}
	cin >> number;
	if (number > max) {
		max = number;
	}
	cin >> number;
	if (number > max) {
		max = number;
	}
	cin >> number;
	if (number > max) {
		max = number;
	}

	cout << max << endl;*/
	
//Helper home
	//Вантажний літак повинен пролетіти з вантажем з пункту А в пункт С через пункт В.Ємність бака для палива у літака — 300 літрів.Споживання палива на 1 км залежно від ваги вантажу в літака таке :

	//до 500 кг — 1 літр / км;
	//до 1000 кг — 4 літри / км;
	//до 1500 кг — 7 літрів / км;
	//до 2000 кг — 9 літрів / км;
	//понад 2000 кг літак не піднімає.
	//	Користувач вводить відстань між пунктами А і В, відстань між пунктами В і С, а також вагу вантажу.Програма має розрахувати яка мінімальна кількість палива необхідна для дозаправки літаку в пункті В, щоб долетіти з пункту А в пункт С.У разі неможливості подолати будь - яку з відстаней програма повинна вивести повідомлення про неможливість польоту за введеним маршрутом.


	// 250   100
	// 200

	int distanceAB, distanceBC;
	int volumeAB = 0, volumeBC = 0;
	double weight;

	cout << "Enter distance AB, BC :: ";
	cin >> distanceAB >> distanceBC;
	cout << "Enter weight :: ";
	cin >> weight;

	if (weight > 2000) {
		cout << "Error" << endl;
	}
	else {
		if (weight < 500 and weight > 0) {
			volumeAB = distanceAB * 1;
			volumeBC = distanceBC * 1;
		}
		else if (weight < 1000) {
			volumeAB = distanceAB * 4;
			volumeBC = distanceBC * 4;
		}
		else if (weight < 1500) {
			volumeAB = distanceAB * 7;
			volumeBC = distanceBC * 7;
		}
		else if (weight < 2000) {
			volumeAB = distanceAB * 9;
			volumeBC = distanceBC * 9;
		}


		if (volumeAB > 300 or volumeBC > 300) {
			cout << "Error" << endl;
		}
		else {
			if (volumeAB + volumeBC <= 300) {
				cout << "Ok fly" << endl;
			}
			else{
				int res = volumeBC - (300 - volumeAB);
				cout << "Result :: " << res << endl;
			}
		}
	}

}




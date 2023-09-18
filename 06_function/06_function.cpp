#include <iostream>
using namespace std;
void showMessage();
int sum(int a, int b) {
	return a + b;
}

double sum(double a, double b) {
	if (a < 0) a = 99;
	return a + b;
}
char sum(char a, char b) {
	if (a < 0) a = 99;
	return a + b;
}
double sum(double a, int b) {
	if (a < 0) a = 99;
	return a + b;
}
double sum(int a, int b, int c) {
	return a + b + c;
}
int sub(int a, int b);


int main()
{

	//int res = sum();
	cout << "Sum :: " << sum(5, 3) << endl; //8 (9.2)
	cout << "Sum :: " << sum('a', 'b') << endl; //8 (9.2)
	cout << "Sum :: " << sum(9.6, 3) << endl; //8 (9.2)
	cout << "Sum :: " << sum(6, 3, 2) << endl; //8 (9.2)
	cout << "Sub :: " << sub(10, 2) << endl;
	showMessage();

}





void showMessage() {
	cout << "Hello World" << endl;
}



int sub(int a, int b)
{
	return a - b;
}

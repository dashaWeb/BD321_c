#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student
{
	char name[100]{};
	char lastname[100]{};
	int marks[5]{};
	double rating;
};
int main()
{
	//Student ivan = { "Ivan","Bondar",{10,11,9,12,8}, 10.8 };
	//// read, write
	string fname = "data.txt";
	//// запис структури у файл
	//fstream file(fname, ios_base::out); // відкрили файловий потік на запис
	//if (!file.is_open()) {
	//    cout << "File Error" << endl;
	//}
	//else {
	//    file.write((char*)&ivan,sizeof(ivan)); // явно перетворили структуру у масив символів та вказали розмір масиву
	//}
	//file.close();
	// зчитування структури з файлу
	Student res;
	fstream file;
	file.open(fname, ios_base::in);
	if (!file.is_open()) {
		cout << "File Error" << endl;
	}
	else
	{
		file.read((char*)&res, sizeof(Student));
	}
	file.close();
	cout << "Name     :: " << res.name << endl;
	cout << "LastName :: " << res.lastname << endl;
	cout << "Marks    :: " << res.marks[0] << ", " << res.marks[1] << ", " << res.marks[2] << ", " << res.marks[3] << ", " << res.marks[4] << endl;
	cout << "Rating   :: " << res.rating << endl;



	// fstream --> read & write

	//string fname = "test.txt";
	//fstream file(fname, ios_base::out | ios_base::in | ios_base::app);
	//if (!file.is_open()) {
	//    cout << "Error file" << endl;
	//}
	//else {
	//    file.seekg(0, ios_base::end);
	//    cout << "Start write :: " << file.tellg() << endl;
	//    file << "Hello World !!!!" << endl;
	//    cout << "End write   :: " << file.tellg() << endl;
	//    string line;
	//    file.seekg(0);
	//    //file.ignore();
	//    cout << "Start read  :: " << file.tellg() << endl;
	//    getline(file, line);
	//    cout << "Res read :: " << line << endl;
	//    cout << "End read    :: " << file.tellg() << endl;
	//}
	//file.close();

	/*int number;
	char text[100];

	cout << "Enter number :: ";
	cin >> number;
	cout << "Enter line :: ";
	cin.ignore();
	cin.getline(text, 100);
	cout << "End" << endl;*/

}

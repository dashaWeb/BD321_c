#include <iostream>
using namespace std;


struct Date
{
	int day, month, year;
};

struct Student
{
	string name;
	string lastname;
	Date birthdate;
};

void printStudent(Student stud) {
	cout << "Name      :: " << stud.name << endl;
	cout << "Last Name :: " << stud.lastname << endl;
	cout << "BirthDay  :: " << stud.birthdate.day << "." << stud.birthdate.month << "." << stud.birthdate.year << endl;
}

void editStudent(Student& stud) {
	cout << "Name      :: "; cin >> stud.name;
	cout << "Last Name :: "; cin >> stud.lastname;
	cout << "BirthDay  :: "; cin >> stud.birthdate.day >> stud.birthdate.month >> stud.birthdate.year;
}
int main()
{
	/*Student student_1{ "Alex","Bondar",{03,10,2000} };
	printStudent(student_1);
	editStudent(student_1);
	printStudent(student_1);*/

	/*Student* student_1 = new Student;
	student_1->name;
	student_1->lastname;*/

}


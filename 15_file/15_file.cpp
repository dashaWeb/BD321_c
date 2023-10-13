#include <iostream>
#include <fstream> // read, write
#include <string>
using namespace std;

// ofstream -> write
// ifstream -> read
// fstream -> read, write

int main()
{
	// write in file
	/*string line;
	string fname = "my.txt";*/
	//ofstream file;
	//file.open(fname,ios_base::app);
	//if (!file.is_open()) {
	//    cout << "Error!!!" << endl;
	//}
	//else {
	//    int counter = 0;
	//    while (counter++ < 3)
	//    {
	//        cout << "Enter str :: ";
	//        //cin >> line;
	//        getline(cin, line);
	//        file << line << " ------------------------" << endl;
	//    }
	//    
	//}
	//file.close();

	// read in file
	//string line;
	//string fname = "my.txt";
	//char ss;
	//char str[100];

	//ifstream file(fname);
	//if (!file.is_open()) {
	//	cout << "Error!!! File not found" << endl;
	//}
	//else {
	//	//file >> ss;
	//	//while (!file.eof()) // читає по символах
	//	//{
	//	//	file.get(ss);
	//	//	cout << ss << endl;

	//	//}
	//	//while (!file.eof()) // читає по словах
	//	//{
	//	//	file >> str;
	//	//	cout << str << endl;

	//	//}
	//	//while (file >> line) // читає по словах
	//	//{
	//	//	cout << line << endl;
	//	//}
	//	//int counter = 0;
	//	//while (!file.eof()) // читає по рядках
	//	//{
	//	//	file.getline(str, 100);
	//	//	cout << ++counter << ". " << str << endl;
	//	//}

	//	//int counter = 0;
	//	//while (file.getline(str, 100)) // читає по рядках
	//	//{
	//	//	cout << ++counter << ". " << str << endl;
	//	//}
	//	while (getline(file,line)) // читає по словах
	//	{
	//		cout << line << endl;
	//	}
	//}
	//file.close();

	/*string fname_1 = "file1.txt", fname_2 = "file2.txt";
	ifstream file_1(fname_1), file_2(fname_2);

	if (!file_1.is_open() || !file_2.is_open()) {
		cout << "Error" << endl;
	}
	else
	{
		string line_1, line_2;
		while (!file_1.eof() || !file_2.eof())
		{
			getline(file_1, line_1);
			getline(file_2, line_2);
			if (line_1 != line_2) {
				cout << line_1 << "\t || \t " << line_2 << endl;
			}
		}
	}*/
	string text = "";
	ifstream file("my.txt");
	int numbOfLines = 0, digits = 0, voice = 0;
	if (!file.is_open()) {
		cout << "Error" << endl;
	}
	else {
		string tmp;
		while (getline(file,tmp))
		{
			text += tmp;
			numbOfLines++;
		}
	}
	cout << text << endl;
	string voi = "aeyuioAEYUIO";
	for (size_t i = 0; i < text.size(); i++)
	{
		for (size_t j = 0; j < voi.size(); j++)
		{
			if (text[i] == voi[j]) {
				voice++;
				break;
			}
		}
	}
}


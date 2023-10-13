#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void pushBack(string*& arr, int& size, string value) {

	string* tmp = new string[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[size] = value;
	if(arr != nullptr)delete[]arr;
	arr = tmp;
	size++;
}

string* readLines(string fname, int& size) {
	string* tmp = nullptr;
	ifstream file(fname);
	if (!file.is_open()) {
		cout << "Error" << endl;
		return nullptr;
	}
	string line;
	while (getline(file,line))
	{
		pushBack(tmp, size, line);
	}
	file.close();
	return tmp;
}
bool isSpace(string line) {
	for (size_t i = 0; i < line.size(); i++)
	{
		if (isspace(line[i])) {
			return true;
		}
	}
	return false;
}
int lastFindLineNotSpace(string* lines, int size) {
	for (int i = size-1; i >= 0; i--)
	{
		if (!isSpace(lines[i])) { 
			return i; 
		}
	}
	return -1;
}

void writeLines(string fname, string* lines, int size) {
	int index = lastFindLineNotSpace(lines, size);
	string line = "------------";
	if (index == -1 || index == size - 1) {
		ofstream file(fname, ios_base::app);
		if (!file.is_open()) {
			cout << "Error file" << endl;
			return;
		}
		file << line << "\n";
		return;
	}
	ofstream file(fname);
	if (!file.is_open()) {
		cout << "Error file" << endl;
		return;
	}
	for (size_t i = 0; i < size; i++)
	{
		file << lines[i] << endl;
		if (index == i) {
			file << line << endl;
		}
	}
}
int main()
{
	/*Завдання 1. Дан текстовий файл.Необхідно створити новий файл, у який переписати з вихідного файлу всі слова, які складаються не менше ніж із семи літер.*/
	/*string file_start = "task1.txt", file_end = "res_task1.txt";
	ofstream end_file(file_end);
	ifstream start_file(file_start);

	if (!start_file.is_open() || !end_file.is_open()) {
		cout << "Error" << endl;
	}
	else {
		string word;
		while (start_file >> word)
		{
			int size = word.size();
			if (!isalpha(word[size - 1])) {
				size--;
			}
			if (size >= 7) {
				end_file << word << " ";
			}
		}
	}
	end_file.close();
	start_file.close();*/

	/*Завдання 4. Дан текстовий файл.Додати в нього рядок із дванадцяти рисок(------------), помістивши його після останнього з рядків, у яких немає пробілу.Якщо таких рядків немає, то новий рядок має бути доданий після всіх рядків наявного файлу.Результат записати в інший файл.*/
	int size = 0;
	string* lines = readLines("task4.txt", size);
	for (size_t i = 0; i < size; i++)
	{
		cout << boolalpha << isSpace(lines[i]) << " \t " << lines[i] << endl;
	}
	cout << "last line :: " << lastFindLineNotSpace(lines, size) << endl;
	writeLines("task4.txt", lines, size);
}

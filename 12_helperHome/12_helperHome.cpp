#include <iostream>
using namespace std;

//Створіть динамічний масив, що зберігає в першому рядку ім'я, а в другому — телефон. Організуйте пошук за ім'ям і номером телефону та можливість введення і зміни даних.
void printContact(string** arr, int col, string text = "");
int findName(string** arr, int col, string key);
int findPhone(string** arr, int col, string key);
void replaceContact(string** arr, int index);
void addContact(string** arr, int row, int& col, int index);
void removeContact(string** arr, int row, int& col, int index);
int main()
{
    int row = 2, col = 5;
    string** contact = new string * [row];
    contact[0] = new string[col]{ "Masha","Pasha","Alex","Denis","Max" };
    contact[1] = new string[col]{ "+38096-958-63-52","+38097-565-85-74","+38066-658-15-25","+38099-657-45-85","+38050-254-12-36" };
    printContact(contact, col, "Print Contact :: ");
    int index;
    string name, phone;
    cout << "Enter name :: ";
    cin >> name;
    index = findName(contact, col, name);
    cout << name << " index :: " << index << endl;
    cout << "Enter phone :: ";
    cin >> phone;
    index = findPhone(contact, col, phone);
    cout << phone << " index :: " << index << endl;
    replaceContact(contact, index);
    printContact(contact, col, "Print Contact :: ");
    addContact(contact, row, col, 2);
    printContact(contact, col, "Print Contact :: ");
    removeContact(contact, row, col, 1);
    printContact(contact, col, "Print Contact :: ");
}

void printContact(string** arr, int col, string text)
{
    cout << text << endl;
    for (size_t i = 0; i < col; i++)
    {
        cout << "\t " << i + 1 << ". " << arr[0][i] <<(arr[0][i].size() <= 3 ? "\t\t" : "\t") << " :: " << arr[1][i] << endl;
    }
    cout << endl;
}

int findName(string** arr, int col, string key)
{
    for (size_t i = 0; i < col; i++)
    {
        if (arr[0][i] == key) {
            return i;
        }
    }
    return -1;
}

int findPhone(string** arr, int col, string key)
{
    for (size_t i = 0; i < col; i++)
    {
        if (arr[1][i] == key) {
            return i;
        }
    }
    return -1;
}

void replaceContact(string** arr, int index)
{
    cout << "Enter name :: ";
    cin >> arr[0][index];
    cout << "Enter phone :: ";
    cin >> arr[1][index];
}

void addContact(string** arr, int row, int& col, int index)
{
    for (size_t i = 0; i < row; i++)
    {
        string* tmp = new string[col + 1];
        for (size_t j = 0; j < col; j++)
        {
            if (j < index) {
                tmp[j] = arr[i][j];
            }
            else {
                tmp[j + 1] = arr[i][j];
            }
        }
        delete[] arr[i];
        arr[i] = tmp;
    }
    col++;
    replaceContact(arr, index);
}

void removeContact(string** arr, int row, int& col, int index)
{

    col--;
    for (size_t i = 0; i < row; i++)
    {
        string* tmp = new string[col];
        for (size_t j = 0; j < col; j++)
        {
            if (j < index) {
                tmp[j] = arr[i][j];
            }
            else {
                tmp[j] = arr[i][j+1];
            }
        }
        delete[] arr[i];
        arr[i] = tmp;
    }
}

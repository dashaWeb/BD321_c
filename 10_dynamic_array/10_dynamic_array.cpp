#include <iostream>
using namespace std;


//void Swap(int* a, int* b) {
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}


//void Swap(int& a, int& b) {
//    int tmp = a;
//    a = b;
//    b = tmp;
//}
//Написати функції для роботи з динамічним цілочисельним одновимірним масивом :
//Функція створення динамічного масиву вказаного розміру та занулення його елементів

int* createArray(size_t size) {
    if (size == 0) return nullptr;
    return new int[size] {};
}

//Заповнення масиву випадковими числами з вказаного користувачем діапазону.
void fillArray(int* arr, size_t length, int min = 1, int max = 10) {
    for (size_t i = 0; i < length; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }
}
//Виводу масиву
void printArray(int* arr, size_t length,string text = "") {
    cout << text;
    for (size_t i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
//Доповнення масиву одним елементом на початку.
void pushFront(int*& arr, int& size, int value) {
    
    int* tmp = new int[size + 1];
    for (size_t i = 0; i < size; i++)
    {
        tmp[i + 1] = arr[i];
    }
    tmp[0] = value;
    delete[]arr;
    arr = tmp;
    size++;
}


//Вставка нового елемента за вказаним індексом
void insert(int*& arr, int& size,int index, int value) {
    if (index < 0 || index > size) {
        cout << "Error index" << endl;
        return;
    }
    int* tmp = new int[size + 1];
    for (size_t i = 0; i < size; i++)
    {
        if (i < index)
            tmp[i] = arr[i];
        else
            tmp[i + 1] = arr[i];
    }
    tmp[index] = value;
    delete[]arr;
    arr = tmp;
    size++;
}
//Видалення елемента за позицією(індексом)
void remove(int*& arr, int& size, int index) {
    if (index < 0 || index >= size) {
        cout << "Error index" << endl;
        return;
    }
    int* tmp = new int[--size];
    for (size_t i = 0; i < size; i++)
    {
        if (i < index)
            tmp[i] = arr[i];
        else
            tmp[i] = arr[i + 1];
    }
    delete[] arr;
    arr = tmp;
}
//Доповнення масиву одним елементом в кінці. 
void pushBack(int*& arr, int& size, int value) {
    insert(arr, size, size, value);
}
//Видалення елемента на початку
void popFront(int*& arr, int& size) {
    remove(arr, size, 0);
}
//Видалення елемента в кінці
void popBack(int*& arr, int& size) {
    remove(arr, size, size-1);
}


int main()
{

    int size;
    cout << "Enter size array :: ";
    cin >> size;
    int* arr = createArray(size);
    fillArray(arr, size);
    printArray(arr, size, "Print Array ::  \t");
    pushFront(arr, size, 13);
    printArray(arr, size, "PushFront   ::  \t");
    insert(arr, size, 2, 33);
    printArray(arr, size, "Insert      ::  \t");
    remove(arr, size, 3);
    printArray(arr, size, "Remove      ::  \t");
    /*int a = 5, b = 7;
    cout << "A :: " << a << "\t B :: " << b << endl;
    Swap(a, b);
    cout << "A :: " << a << "\t B :: " << b << endl;*/

    // new 
    // delete
    // nullptr
    /*int counter = 0;
    while (true)
    {
        cout << counter++ << endl;
        int* ptr = new int[1000000];
        delete[] ptr;
    }*/

}

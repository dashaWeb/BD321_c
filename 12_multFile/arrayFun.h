#pragma once
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int* createArray(int size);
void fillArray(int* arr, int size, int min = 1, int max = 10);
void printArray(int* arr, int size, string text = "");
int* mergaArray(int* a, int* b, int size_a, int size_b, int& size_c);
bool isFind(int* arr, int size, int number);

int countRepeatElement(int* a, int* b, int size_a, int size_b);
int* createRepeatElement(int* a, int* b, int size_a, int size_b, int& size_c);
int countNoRepeatElement(int* a, int* b, int size_a, int size_b);
int* createNoRepeatElement(int* a, int* b, int size_a, int size_b, int& size_c);
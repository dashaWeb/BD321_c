#include <iostream>
#include <ctime>
#include "arrayFun.h"
using namespace std;


// функція створення динамічного масиву
// функція заповнення динамічного масиву
// функція вивід динамічного масиву
int main()
{
    srand(time(0));
    int* A, * B,*C,*D, *res, size_a = 5, size_b = 7, size_c, size_d,size_res;
    A = createArray(size_a);
    B = createArray(size_b);
    fillArray(A, size_a);
    fillArray(B, size_b);
    printArray(A, size_a, "Print A :: \t");
    printArray(B, size_b, "Print B :: \t");
    cout << countRepeatElement(B, A, size_b, size_a) << endl;
    cout << endl;
    C = mergaArray(A, B, size_a, size_b, size_c);
    printArray(C, size_c, "Print C :: \t");
    C = createRepeatElement(A, B, size_a, size_b, size_c);
    printArray(C, size_c, "Repeat Element C :: \t");
    //-Елементи масиву A, які не зустрічаються у B;
    C = createNoRepeatElement(A, B, size_a, size_b, size_c);
    printArray(C, size_c, "no Repeat Element C :: \t");
    //Елементи масиву В, які не зустрічаються у А;
    D = createNoRepeatElement(B, A, size_b, size_a, size_d);
    printArray(D, size_d, "no Repeat Element D :: \t");
    // -Елементи масивів A і B, які не є спільними для них
    res = mergaArray(C, D, size_c, size_d, size_res);
    printArray(res, size_res, "no Repeat All Element :: \t");
}





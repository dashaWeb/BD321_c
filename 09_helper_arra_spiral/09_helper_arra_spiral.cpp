#include <iostream>
using namespace std;


template <size_t COL>
void print(int arr[][COL], size_t row) {
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
template <size_t COL>
void fillSpiral(int arr[][COL], size_t col) {

    int counter = 1;
    int q = col - 1;
    for (size_t i = 0; i < col / 2; i++)
    {
        for (size_t j = i; j < q; j++) // right
        {
            arr[i][j] = counter++;
        }
        for (size_t j = i; j < q; j++) // down
        {
            arr[j][col - 1 - i] = counter++;
        }
        for (size_t j = i; j < q; j++) // left
        {
            arr[col - 1 - i][col - 1 - j] = counter++;
        }
        for (size_t j = i; j < q; j++) // up
        {
            arr[col - 1 - j][i] = counter++;
        }
        if (col % 2 != 0 && i==col/ 2 - 1) {
            arr[col / 2][col / 2] = counter++;
        }
        q--;
    }
}
int main()
{
    const int size = 3;
    int arr[size][size]{};
    fillSpiral(arr, size);
    print(arr, size);
}



/*
    [0][0],[0][1],[0][2] --> right
    [0][3],[1][3],[2][3] --> down
    [3][3],[3][2],[3][1] --> left
    [3][0],[2][0],[1][0] --> up

    [1][1] -> right
    [1][2] -> down
    [2][2] -> left
    [2][1] -> up

*/

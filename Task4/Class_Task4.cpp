//Create a two-dimensional array, filling it
//values should be performed by the rand() function.
//After filling with values, output the array
//in the form of a matrix.Perform multiplication by scalar and
//display on the screen in the form of a matrix.

#include <iostream>
using namespace std;

int main()
{
    //task4
    const int SIZE = 5;
    int arr[SIZE][SIZE] {};
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            int ran = rand() % 9 + 1;
            arr[i][j] = ran;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            int ran = rand() % 9 + 1;
            arr[i][j] = ran;
            arr[i][j] = arr[i][j] * 2;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
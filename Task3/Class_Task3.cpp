//Create two two-dimensional arrays and fill them
//random values using a function
//rand().Display matrices on the screen.Add the first one
//matrix to the second and output the result in the form
//matrices.

#include <iostream>
using namespace std;

int main()
{
    //task3
    const int SIZE = 5;
    int arr[SIZE][SIZE] {};
    int arr_two[SIZE][SIZE]{};
    srand(time(NULL));
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
            arr_two[i][j] = ran;
            cout << arr_two[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            arr_two[i][j] += arr[i][j];
            cout << arr_two[i][j] << " ";
        }
        cout << endl;
    }
}
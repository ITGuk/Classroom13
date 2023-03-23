//Create a two-dimensional array, filling it
//values should be performed by the rand() function.
//After filling with values, output the array
//in the form of a matrix.
#include <iostream>
using namespace std;

int main()
{
    //task1
    const int SIZE = 5;
    int arr[SIZE][SIZE]{};
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
}
//On the chessboard(two - dimensional
//an 8x8 array filled with zeros),
//standing turn(number 1).Write
//a program that checks all the boxes,
//which hits the turn(with the number 2), and outputs
//the resulting array as the response.
//When outputting an array, it is necessary
//follow a certain format.
//There is exactly one space between the numbers.

#include <iostream>
using namespace std;

int main()
{
    //task6
    const int SIZE = 8;
    int arr[SIZE][SIZE]{};
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            arr[i][j] = 0;

            if (i == 2)
            {
                arr[i][j] = 2;
            }
            if (j == 3)
            {
                arr[i][j] = 2;
            }
            if (i == 2 && j == 3)
            {
                arr[i][j] = 1;
            }
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
    cout << endl;
}
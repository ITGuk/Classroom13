//On the chessboard (two-dimensional
//an 8x8 array filled with zeros),
//standing horse(number 1).Write
//a program that marks all the fields that
//hits the elephant(number 2) and takes it out
//the resulting array as the response.Under
//array output time is necessary
//follow a certain format.
//There is exactly one space between the numbers.
//Hint: can be used
//the Pythagorean theorem.

#include <iostream>
using namespace std;

int main()
{

    //task8
    const int SIZE = 8;
    int arr[SIZE][SIZE]{};
    int x = 3;
    int y = 4;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            arr[i][j] = 0;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            arr[i][j] = 0;
            if (j == y - 2 || j == y)
            {
                if (i == x - 3 || i == x + 1)
                {
                    arr[i][j] = 2;
                }
            }
            if (j == y - 3 || j == y + 1)
                {
                if (i == x - 2 || i == x)
                {
                    arr[i][j] = 2;
                }
            }
            if (i == x - 1 && j == y - 1)
            {
                arr[i][j] = 1;
            }
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
}
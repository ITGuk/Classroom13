//On the chessboard(two - dimensional
//an 8x8 array filled with zeros),
//standing elephant(number 1).Write
//a program that checks all the boxes,
//which the elephant beats(with the number 2), and
//outputs the resulting array as
//answer.During withdrawal
//array must be followed
//certain format.Between the numbers -
//exactly one space.

#include <iostream>
using namespace std;

int main()
{
    //task6
    const int SIZE = 8;
    int arr[SIZE][SIZE] {};
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0 , a = -1, b = 5; j < SIZE; j++)
        {
            arr[i][j] = 0;

            if (i == a)
            {
                arr[i][j] = 2;
            }
            if (i == b)
            {
                arr[i][j] = 2;
            }

            if (i == 2 && j == 3)
            {
                arr[i][j] = 1;
            }
            cout << arr[i][j] << " ";
            a++;
            b--;

        }
        cout << endl;
    }
    cout << endl;
}
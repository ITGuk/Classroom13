//Create a two-dimensional array, filling it
//values should be performed by the rand() function.
//Display in the form of a matrix on the screen and find
//maximum, minimum and arithmetic mean as a whole
//matrix and each row.

#include <iostream>
using namespace std;

int main()
{

    //task2
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

    int ser_ar = 0;
    int con = 0;
    int max = arr[0][0];
    int min = arr[0][0];
    int min_regular = arr[0][0];
    int max_regular = arr[0][0];
    int con1 = 0;
    int ser_ar_reg = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0, k = 0; j < SIZE; j++, k++)
        {
            ser_ar += arr[i][j];
            con++;
            ser_ar_reg += arr[i][k];
            con1++;
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if (arr[i][j] < min_regular)
            {
                min_regular = arr[i][k];
            }
            if (arr[i][j] > max_regular)
            {
                max_regular = arr[i][k];
            }
        }
        ser_ar_reg = ser_ar_reg / con1;
        cout << "Minimum " << i << " row: " << min_regular << endl;
        cout << "Maximum " << i << " row: " << max_regular << endl;
        cout << "Arithmetic average of the " << i << " row " << ser_ar_reg << endl;
        min_regular = max;
        max_regular = min;
        ser_ar_reg = 0;
        con1 = 0;
    }
    cout << endl << endl << endl;
    ser_ar = ser_ar / con;
    cout << "Arithmetic average of the entire array: " << ser_ar << endl;
    cout << "Maximum num of the entire array: " << max << endl <<
        "Minimum num of the entire array: " << min << endl;
}
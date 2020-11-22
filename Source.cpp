#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    int rowCount, columnCount, i, j;
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];

    cout << "Simple C++ Example Program for 2 D (dimensional) Array Matrix Subtraction Example\n";

    cout << "Number of rows of matrices to be subtracted : ";
    cin >> rowCount;

    cout << "Number of columns matrices to be subtracted : ";
    cin >> columnCount;

    cout << "Elements of first matrix : \n";

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            cin >> firstMatrix[i][j];

    cout << "Elements of second matrix : \n";

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            cin >> secondMatrix[i][j];

    cout << "Difference of entered matrices : \n";

    for (i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
            cout << resultMatrix[i][j] << "\t";
        }
        cout << "\n";
    }


    return 0;
}
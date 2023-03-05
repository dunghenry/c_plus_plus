#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[3][3] = {{11, 2, 4},
                     {4, 5, 6},
                     {10, 8, -12}};
    int cheochinh = 0;
    int cheophu = 0;
    int size = sizeof(arr[0]) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                cheochinh += arr[i][j];
            }
            if (j == size - i - 1)
            {
                cheophu += arr[i][j];
            }
        }
    }
    cout << cheochinh << endl;
    cout << cheophu << endl;
    cout << abs(cheochinh - cheophu) << endl;
    return 0;
}

// for (int i = 0; i < sizeof(arr[0]) / sizeof(int); i++)
// {
//     for (int j = 0; j < sizeof(arr[0]) / sizeof(int); j++)
//     {
//         if (j == sizeof(arr[0]) / sizeof(int) - i - 1)
//         {
//             sum += arr[i][j];
//         }
//     }
// }
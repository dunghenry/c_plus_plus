#include <iostream>
using namespace std;
int main()
{
    string car[5] = {"Santafe",
                     "BMW",
                     "Mercedes",
                     "Honda",
                     "Toyota"};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << car[i] << " ";
    // }
    cout << sizeof(car) << endl; // 5 * 8byte
    for (int i = 0; i < sizeof(car) / sizeof(string); i++)
    {
        cout << car[i] << " ";
    }
}
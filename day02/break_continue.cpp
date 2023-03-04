#include <iostream>

using namespace std;

int main()
{
    int n = 10;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    for (int i = 0; i <= n; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << " ";
    }
}
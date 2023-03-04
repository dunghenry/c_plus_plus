#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter x: ";
    cin >> x;
    int i;
    while (i < x)
    {
        cout << i << endl;
        i++;
    }

    int a;
    cout << "Enter a: ";
    cin >> a;
    do
    {
        if (a <= 0)
        {
            cout << "Enter again a: ";
            cin >> a;
        }
    } while (a <= 0);
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    if (20 > 18)
    {
        cout << "20 is greater than 18" << endl;
    }
    int time = 20;
    if (time < 18)
    {
        cout << "Good day" << endl;
    }
    else
    {
        cout << "Good evening" << endl;
    }

    // else if

    // short hand if else(ternary operator)
    string msg = time < 18 ? "Goo day" : "Good evening";
    cout << msg << endl;
    return 0;
}
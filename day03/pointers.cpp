#include <iostream>
using namespace std;
int main()
{
    string food = "Pizza";
    string *ptr = &food;
    cout << &food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << food << endl;

    // change pointer
    *ptr = "Hamburger";
    cout << *ptr << endl;
    cout << food << endl;
}
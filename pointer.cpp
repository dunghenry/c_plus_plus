#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *b;
    b = &a;
    cout << b << endl;
    cout << *b << endl;
}
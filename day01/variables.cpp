#include <iostream>
#include <typeinfo>
using namespace std;
int main(int argc, char const *argv[])
{
    int i = 1;
    double d = 1.5;
    char c = 'D';
    string str = "Xin chao";
    bool b = false; // 0
    cout << b << endl;
    int x, y, z;
    x = y = z = 10;
    const float PI = 3.14;
    cout << typeid(x).name() << endl;
    return 0;
}

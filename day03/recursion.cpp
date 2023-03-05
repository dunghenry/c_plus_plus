#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int rs = sum(n);
    cout << "Tong tu 1 den " << n << " la : " << rs << endl;
}
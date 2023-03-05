#include <iostream>
using namespace std;
void nhap(int *n)
{
    cout << "Enter n : ";
    cin >> *n;
}
void nhapn(int &n)
{
    cout << "Enter n : ";
    cin >> n;
}
int main()
{
    int n;
    // nhap(&n);
    nhapn(n);
    cout << n;
}
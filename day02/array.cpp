#include <iostream>
using namespace std;
void nhapmang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu a"
             << "[" << i << "] = ";
        cin >> *(a + i);
    }
}
void xuatmang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << *(a + i) << "\t";
    }
}
int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int *a = new int[n];
    nhapmang(a, n);
    cout << "Xuat mang: ";
    xuatmang(a, n);
    delete[] a;
    return 0;
}
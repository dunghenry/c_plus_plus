#include <iostream>
using namespace std;
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu "
             << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void xoa(int a[], int &n, int vt)
{
    for (int i = vt; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void chen(int a[], int &n, int vt, int gt)
{
    for (int i = n; i > vt; i--)
    {
        a[i] = a[i - 1];
    }
    a[vt] = gt;
    n++;
}
bool checkarr(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= 0 || a[i + 1] <= 0 || (a[i] + a[i + 1]) <= 7)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int a[n];
    nhap(a, n);
    sort(a, n);
    int vt;
    cout << "Nhap vi tri muon xoa: ";
    cin >> vt;
    do
    {
        if (vt < 0 || vt >= n)
        {
            cout << "Nhap lai vi tri muon xoa: ";
            cin >> vt;
        }
    } while (vt < 0 || vt >= n);
    xoa(a, n, vt);
    int vtchen, gt;
    cout << "Nhap vi tri muon chen: ";
    cin >> vtchen;
    do
    {
        if (vtchen < 0 || vtchen >= n)
        {
            cout << "Nhap lai vi tri muon chen: ";
            cin >> vtchen;
        }
    } while (vtchen < 0 || vtchen >= n);
    cout << "Nhap gia tri muon chen: ";
    cin >> gt;
    chen(a, n, vtchen, gt);
    cout << "Xuat mang: ";
    xuat(a, n);
}
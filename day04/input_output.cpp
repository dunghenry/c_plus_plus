#include <iostream>
#include <iomanip>
using namespace std;

class SinhVien
{
    // field default private

    char HoTen[30];
    int Tuoi;
    float DiemTB;

public:
    char MaSV[10];
    void nhap();
    void xuat();
};

void SinhVien::nhap()
{
    cout << "Nhap ma sinh vien: ";
    fflush(stdin);
    gets(MaSV);
    cout << "Nhap ho ten sinh vien: ";
    fflush(stdin);
    gets(HoTen);
    cout << "Nhap tuoi sinh vien: ";
    cin >> Tuoi;
    cout << "Nhap diem trung binh: ";
    cin >> DiemTB;
}
void SinhVien::xuat()
{
    cout << setw(30) << "Xuat thong tin sinh vien" << endl;
    cout << "Ma sinh vien: " << MaSV << endl;
    cout << "Ho ten sinh vien: " << HoTen << endl;
    cout << "Tuoi sinh vien: " << Tuoi << endl;
    cout << "Diem trung binh sinh vien: " << DiemTB << endl;
}
int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    cout << a.MaSV;
    return 0;
}
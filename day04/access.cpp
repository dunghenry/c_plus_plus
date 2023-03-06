#include <iostream>

using namespace std;
class SinhVien
{
    string name;

public:
    int age;

protected:
    float diem;
};

int main()
{
    SinhVien sv;
    sv.age = 21;
    cout << sv.age << endl;
    return 0;
}
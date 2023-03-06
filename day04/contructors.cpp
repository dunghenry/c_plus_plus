#include <iostream>

using namespace std;
class Car
{
public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    };
    void xuat();
};
void Car::xuat()
{
    cout << brand << " " << model << " " << year << " " << endl;
}
int main()
{
    Car car("BMW", "X5", 1999);
    // cout << car.brand << endl;
    car.xuat();
    return 0;
}
#include <iostream>
using namespace std;
class Vehicle
{
public:
    string brand;
    void honk()
    {
        cout << "Tuut, tuut!\n";
    }
};
class Car : public Vehicle
{
public:
    string model;
};
int main()
{
    Car myCar;
    myCar.brand = "Ford";
    myCar.model = "Mustang";
    myCar.honk();
    cout << myCar.brand + " " + myCar.model << endl;
}
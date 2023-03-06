#include <iostream>

using namespace std;
class Car
{
public:
    string brand;
    string model;
    int year;
    void info()
    {
        cout << this->brand << " " << this->model << " " << this->year << endl;
    };
    int speed(int maxSpeed);
    // int speed(int maxSpeed)
    // {
    //     return maxSpeed;
    // }
};
int Car::speed(int maxSpeed)
{
    return maxSpeed;
}
int main()
{
    Car car;
    car.brand = "BMW";
    car.model = "X5";
    car.year = 1999;
    cout << car.brand << " " << car.model << " " << car.year << endl;
    car.info();
    cout << car.speed(200);
    return 0;
}
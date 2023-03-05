#include <iostream>
using namespace std;
struct Car
{
    string brand;
    string model;
    int year;
};
int main()
{
    Car car;
    car.brand = "BMV";
    car.model = "X5";
    car.year = 1999;
    cout << car.brand << endl;
    cout << car.model << endl;
    cout << car.year << endl;
    return 0;
}
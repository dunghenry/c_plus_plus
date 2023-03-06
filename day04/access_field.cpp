#include <iostream>
using namespace std;
class Employee
{
protected:
    int salary;
};
class Programer : public Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return this->salary;
    }
};
int main()
{
    Programer programer;
    programer.setSalary(100);
    programer.bonus = 35;
    cout << "Salary: " << programer.getSalary() << endl;
    cout << "Bonus: " << programer.bonus << endl;
    return 0;
}
#include <iostream>
using namespace std;

class MyClass
{
public:
    void myFunction()
    {
        cout << "Some content in parent class." << endl;
    }
};
class MyChild : public MyClass
{
};
class MyGrandChild : public MyChild
{
};
int main()
{
    MyGrandChild myGrandChild;
    myGrandChild.myFunction();
    return 0;
}
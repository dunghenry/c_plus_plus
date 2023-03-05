#include <iostream>
using namespace std;
void printMsg()
{
    cout << "Hello every one!" << endl;
}

// Parameters and Arguments
void printName(string name)
{
    cout << name << endl;
}

// default parameters
void printAge(int age = 18)
{
    cout << age << endl;
}

// returns value
int sum(int a, int b)
{
    return a + b;
}

// pass by reference
void swap(int &a, int &b)
{
    int z = a;
    a = b;
    b = z;
}
// pass arrays
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// overloading
float sum(float a, float b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}
int main()
{

    // called
    printMsg();
    printName("Dung");
    printAge();
    int arr[5] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    return 0;
}
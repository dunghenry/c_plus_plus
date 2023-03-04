#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    cout << "Enter n: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << i << " ";
    }
    int nums[5] = {7, 8, 9, 10, 11};
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Dung";
    string age = "21";
    cout << name + " " + age << endl;

    // append
    string firstName = "Tran";
    string lastName = "Dung";
    string fullName = firstName.append(lastName);
    cout << fullName << endl;
    // length

    cout << fullName.length() << endl;
    cout << fullName.size() << endl;

    string s;
    // cin >> s;
    getline(cin, s);
    cout << s << endl;
    return 0;
}

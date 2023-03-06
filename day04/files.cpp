#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string myString;
    // ofstream myFile("data.txt"); //	Creates and writes to files

    // Write to the file
    // myFile << "Files can be tricky, but it is fun enough!";

    ifstream myReadFile("data.txt");
    while (getline(myReadFile, myString))
    {
        cout << myString << endl;
    }

    // Close the file
    // myFile.close();

    myReadFile.close();
}
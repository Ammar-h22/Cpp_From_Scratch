// Some important points to note:
// The useful classes for working with files in C++ are:
// 1. fstreambase
// 2. ifstream --> derived from fstreambase
// 3. ofstream --> derived from fstreambase
// These are the 3 classes given by the fstream header file.

// In order to work with files in C++, you will need to open it.
// So there are two ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Example of Writing in a file:
    // Operating files using constructor and writing it.
    string s = "Hello India!!!";
    ofstream out("sample02.txt");
    out << s;
    out.close();

    // Example of reading a file:
    // Operating files using constructor and reading it.
    string s2;
    ifstream in("sample02b.txt");
    // in >> s2;   // If we will execute this line then only one word will be printed.
    getline(in, s2); // If we will execute this line then the whole line will be printed.
    cout << s2;
    in.close();

        return 0;
}

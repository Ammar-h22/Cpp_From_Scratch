#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample02.txt");
    out << "Hello this is me!" << endl;
    out << "Your friend Ammar..." << endl;
    out.close();

    // ifstream in;
    // string s;
    // in.open("sample02b.txt");
    // in >> s;
    // getline(in, s);
    // cout << s;
    // in.close();

    // Now if the file is very big and let us way there are 50 lines in the file
    // So for this there are two ways :
    // 1. Either we can print getline() function 50 times (because we know it prints only one line at a time).
    // 2. Or we can use the eof() function (eof: end of file).

    // So we will do the 2 options because 1 one is not a good pratice.
    ifstream in;
    string s;
    in.open("sample02b.txt");
    while (in.eof() == 0)
    {
        getline(in, s);
        cout << s << endl;
    }
    in.close();

    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // Here what we will give input name, that will be writen in the file and also we
    // can read it on the terminal.
    string name;
    cout << "Enter your name: ";
    cin >> name;
    ofstream write("sample03.txt");
    write << "Your name is " + name;
    write.close();

    string t1;
    ifstream in("sample03.txt");
    getline(in, t1);
    cout << t1;
    in.close();
    return 0;
}

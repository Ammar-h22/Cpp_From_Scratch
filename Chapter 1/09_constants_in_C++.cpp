#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // cout << "The value of a was " << a << endl;
    // a = 10;
    // cout << "The value of a is " << a << endl;
    // return 0;

    const int a = 5;
    //-->  Here we have fixed the value of a (Now the value of 'a' will be constant throughout the program).
    cout << "The value of a was " << a << endl;
    a = 10; //---> Now here we can't change the value of a (This will throw an error because a is constant).
    cout << "The value of a is " << a << endl;
    return 0;
}

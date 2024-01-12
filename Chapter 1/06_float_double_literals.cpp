#include <iostream>
using namespace std;

int main()
{
    float d = 45.9;
    long double e = 45.9;
    cout << "The value of float is " << d << endl;
    cout << "The value of long double is " << e << endl;
    //  By default compiler considers 45.9 as a double.
    //  So if we want to specify the number as float or long double then ,
    // we have to do 45.9f for float and 45.9l for long double.
    // we can also do 45.9F and 45.9L.
    // float d = 45.9f;
    // long double e = 45.9l;
    cout << "The size of 45.9 is " << sizeof(45.9) << endl;
    cout << "The size of 45.9f is " << sizeof(45.9f) << endl;
    cout << "The size of 45.9F is " << sizeof(45.9F) << endl;
    cout << "The size of 45.9l is " << sizeof(45.9l) << endl;
    cout << "The size of 45.9L is " << sizeof(45.9L) << endl;
}

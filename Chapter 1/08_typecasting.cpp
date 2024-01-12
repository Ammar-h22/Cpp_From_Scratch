// Typecasting :- Converting one datatype into another datatype.

#include <iostream>
using namespace std;

int main()
{
    int x = 45;
    float y = 45.57;
    cout << "The value of x is " << (float)x << endl;
    cout << "The value of x is " << (int)y << endl;
    // or
    cout << "The value of x is " << float(x) << endl;
    cout << "The value of x is " << int(y) << endl;

    int z = int(y);   //---> This statement is also valid

    cout << "The expreession is " << x + y << endl;
    cout << "The expreession is " << x + (int)y << endl;
    cout << "The expreession is " << x + int(y) << endl;

    return 0;
}

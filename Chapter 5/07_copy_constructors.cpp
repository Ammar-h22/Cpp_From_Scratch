#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() // Default Constructor
    {
        a = 0;
    }

    Number(int num) // Parameterized Constructor
    {
        a = num;
    }

    Number(Number &obj) //==> This is a Copy Constructor
    {
        cout << "Copy Constructor called !!!" << endl;
        a = obj.a;
    }

    void printData()
    {
        cout << "The value of this object is: " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z3;
    x.printData();
    y.printData();
    z.printData();

    Number z1(z); // Copy constructor invoked
    z1.printData();
    //==> z1 should exactly resemble x, y or z.

    Number z2 = z; // Copy constructor invoked
    z2.printData();

    z3 = z; // Copy constructor is will not be invoked
    z3.printData();
    return 0;
}

// Important Note:
// When no copy constructor is found in the program, compiler supplies its own copy constructor.

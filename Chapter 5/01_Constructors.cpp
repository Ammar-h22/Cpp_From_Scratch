// Constructor:
// Constructor is a special member function with the same name as of the class.
// It is used to initialize the objects of its class.
// Also it is automatically called (invoked) whenever an object is created.

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void); // Constructor Declaration

    void printData()
    {
        cout << "Your Complex number is: " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void) //==> This is a default constructor as it contains no parameters.
{
    a = 12;
    b = 4;
}
int main()
{
    complex c;

    c.printData();

    return 0;
}

// Characteristics of constructors:
// 1) It should only be declared in the public section of the class.
// 2) They are automatically invoked (called) whenever the object is created.
// 3) They cannot return values and do not have return types.
// 4) It can have default arguments.
// 5) We cannot refer to their address.

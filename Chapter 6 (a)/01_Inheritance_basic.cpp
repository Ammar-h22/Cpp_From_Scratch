// Derived class syntax:
/* class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

Important Note:
1) By default visibility mode is private.
2) Public Visibility mode: Public members of the base class becomes the
   Public members of the derived class.
3) Private Visibility mode: Public members of the base class becomes the
   Private members of the derived class.
4) Private members are never inherited.
*/

#include <iostream>
using namespace std;

// Base Class
class employee
{

public:
    int Id;
    float salary;

    employee(int empID)
    {
        Id = empID;
        salary = 2000.0;
    }
    employee() {} // Default constructor
};

class programmer : private employee // Here we have set visibility mode as private (means the public
                                    // members of the employee class will be treated as private members
                                    // in the programmer class).
{
public:
    int languageCode;

    programmer(int empId)
    {
        Id = empId;
        languageCode = 12;
    }
};
int main()
{
    employee rohan(101), harry(104);
    cout << rohan.Id << endl;
    cout << harry.Id << endl;
    cout << rohan.salary << endl;
    cout << harry.salary << endl;

    programmer p1(305);
    cout << p1.languageCode << endl;

    // cout<<p1.Id;   // Will throw an error
    // The above line, We can't do this even Id variable is declared as public in the employee class,
    // but the Id variable has became a private member in the programmer class because we have done
    // private inheritance and not public inheritance.

    return 0;
}

// Important Note:
// We need to write blank default constructor in the base class because whenever an object of derived class is created (called),
// compiler automatically calls the base class and always tries to
// find the default constructor, so always we should make a default constuctor for the base class.

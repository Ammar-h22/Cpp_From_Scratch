#include <iostream>
using namespace std;
class Baseclass
{
public:
    int var_base;
    void display(void)
    {
        cout << "1) Displaying Base class variable var_base = " << var_base << endl;
    }
};

class DerivedClass : public Baseclass
{
public:
    int var_derived;
    void display(void)
    {
        cout << "2) Displaying Base class variable var_base = " << var_base << endl;
        cout << "2) Displaying Derived class variable var_derived = " << var_derived << endl;
    }
};

int main()
{
    Baseclass *base_class_pointer;

    Baseclass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Base class pointer is pointing to the Derived class object. (And this is valid in C++)
                                       // And we can also do this (base_class_pointer = &obj_base;)

    base_class_pointer->var_base = 34;
    base_class_pointer->display();
    // In the obve line Note that we have called the display() function and as display() function is in both the classes, but the compiler
    // will print the Base class function and not the Derived class because the pointer that we have generated is of the base class.

    // base_class_pointer->var_derived = 134;
    // base_class_pointer->display();
    // We cannot assign the (var_derived) data member a value because it is not defined in the Base class.
    // (As it is defined in the Derived class and the pointer is of the Base class , so compiler will throw an error).

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived; // Derived class pointer pointing to the Derived class object.
                                          // (Now here we cannot point the derived class pointer to the Base class object, it is not valid.)

    derived_class_pointer->var_base = 102;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    // Now here in the above line, Derived class display() function will be executed beacuse here we have made a derived class pointer.
    return 0;
}

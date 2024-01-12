#include <iostream>
using namespace std;
class Baseclass
{
public:
    int var_base = 45;
    void display(void)
    {
        cout << "1) Displaying Base class variable var_base = " << var_base << endl;
    }
};

class DerivedClass : public Baseclass
{
public:
    int var_derived = 95;
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
    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}

// Virtual Function:
// As we know that if we make a Base class pointer and then even it is pointing to the Derived class
// object, only the Base class functions are executed and not of the derived class.
// So by adding "Virtual" before the function name of the Base class, hence just by doing this
// instead of Base class function, Derived class function is executed.

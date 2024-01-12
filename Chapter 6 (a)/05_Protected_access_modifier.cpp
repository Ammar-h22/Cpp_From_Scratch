#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};

class Derived : protected Base // class is being derived protectedly
{
public:
    Derived()
    {
        a = 10;
    }
    void Display()
    {
        cout << a;
    }
};

int main()
{
    Base b;
    Derived d;
    d.Display();

    // cout<<a;
    // This will not work since 'a' is protected in both base as well as derived class.

    return 0;
}

// Protected mode:
// Basically protected mode is little similar like private mode, means in protected mode also
// we cannot access the members directly, but here we can inherit them (that means we can
// use the protected members in the derived class inherited from the base class but cannot
// directly print them in the (int main) section like we do in public mode.)

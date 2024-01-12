// syntax for inheriting in multiple inheritance:
// class Derived: visibility-mode Base1, visibility-mode Base2
// {
//     (Body);
// };

#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show(void)
    {
        cout << "The value of Base1 is: " << base1int << endl;
        cout << "The value of Base2 is: " << base2int << endl;
        cout << "The sum of these values is: " << base1int + base2int << endl;
    }
};
int main()
{
    Derived ammar;
    ammar.set_base1int(12);
    ammar.set_base2int(34);
    ammar.show();

    return 0;
}

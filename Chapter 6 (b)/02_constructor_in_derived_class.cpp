/* Order of Execution of Constructors:

1) Case 1:
class B : public A
{
    // Order of execution of constructor --> first A() then B()
};
2) Case 2:
class A : public B, public C
{
    // Order of execution of constructor --> B() then C() and A()
};
3) Case 3:
class A : public B, virtual public C
{
    // Order of execution of constructor --> C() then B() and A()
};
*/

#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called!" << endl;
    }
    void printData1(void)
    {
        cout << "The value of Data1 is: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called!" << endl;
    }
    void printData2(void)
    {
        cout << "The value of Data2 is: " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class Constructor called!" << endl;
    }
    void printData3(void)
    {
        cout << "The value of derived1 and derived2 is: " << derived1 << " and " << derived2 << endl;
    }
};
int main()
{
    Derived ammar(1, 2, 3, 4);
    ammar.printData1();
    ammar.printData2();
    ammar.printData3();

    return 0;
}
 
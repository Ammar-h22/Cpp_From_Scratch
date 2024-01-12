#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};
class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base1 ::greet();
    }
};
int main()
{
    Base1 b1;
    b1.greet();
    Base2 b2;
    b2.greet();
    Derived d;
    d.greet();
    return 0;
}

// What is Ambiguity Resolution?
// So basically the problem is that when we use the same function name in both
// the classes i.e greet(), so if we make an object 'd' of the derived class and do
// d.greet() , so the compiler will not understand that which greet() function to print
// i.e either of Base1 or of Base2 , so to resolve this problem we write something
// like this inside the function greet() of the derived class..
// Base1 :: greet()  --> if we want to print greet() function of Base1
// Base2 :: greet()  --> if we want to print greet() function of Base2
// In this way the problem gets solved , and so this is known as Ambiguity resolution
// in inheritance.

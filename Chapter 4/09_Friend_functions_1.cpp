#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {

        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }

    friend complex sumNumber(complex x1, complex x2);
    // The above line means that the non member i.e (sumNumber function) is allowed to do anything
    // with the private data (variables) of class.
};

complex sumNumber(complex x1, complex x2)
{
    complex x3;
    x3.setNumber((x1.a + x2.a), (x1.b + x2.b));
    return x3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(7, 4);
    c1.printNumber();

    c2.setNumber(1, 2);
    c2.printNumber();

    sum = sumNumber(c1, c2);
    sum.printNumber();

    return 0;
}

// Properties of friend function:
// 1) Friend function is not in the scope of class, means this function is out of the class.
// 2) Since it is not in the scope of the class, it cannot be called from the object of that class.
//    For ex. c1.sumNumber() ==> This is invalid.
// 3) Usually contains the objects as arguments.
// 4) It can be declared inside both the sections i.e in public as well as private section.
// 5) It cannot access the members directly by their names, it needs Object_name.member_name
// to access any member.
// Ex: (cout<<a;) ==> as 'a' is a member function we cannot directly access like this , inside a friend function.

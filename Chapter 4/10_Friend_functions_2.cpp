#include <iostream>
using namespace std;

// Forward Declaration:
class complex;

class calculator
{
public:
    int add(int x, int y)
    {
        return (x + y);
    }

    int sumRealComplex(complex m1, complex m2);
};

class complex
{
    int a, b;
    friend int calculator ::sumRealComplex(complex m1, complex m2);

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
};
int calculator ::sumRealComplex(complex m1, complex m2)
{
    return (m1.a + m2.a);
}
int main()
{
    complex c1, c2;
    c1.setNumber(5, 3);
    c2.setNumber(5, 8);
    calculator calc;
    int result = calc.sumRealComplex(c1, c2);
    cout << "The sum of the real part of complex number is: " << result << endl;

    return 0;
}

// Ek class ke function ko dusre class ka friend kaise banate hai ye humne iss program me dekha.

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
    int sumImgComplex(complex n1, complex n2);
};

class complex
{
    int a, b;
    friend int calculator ::sumRealComplex(complex m1, complex m2);
    friend int calculator ::sumImgComplex(complex n1, complex n2);

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

int calculator ::sumImgComplex(complex n1, complex n2)
{
    return (n1.b + n2.b);
}

int main()
{
    complex c1, c2;
    c1.setNumber(5, 3);
    c2.setNumber(5, 1);

    calculator calc;
    int result_1 = calc.sumRealComplex(c1, c2);
    cout << "The sum of the Real part of complex number is: " << result_1 << endl;

    int result_2 = calc.sumImgComplex(c1, c2);
    cout << "The sum of the Imaginary part of complex number is: " << result_2 << endl;

    return 0;
}

// // This is the same program as (10_Friend_Function_2), but in the above program we have made individual
// // functions as friend, but this becomes a little lengthy if we have to make large number of functions as friend.
// // So instead of making individual functions as friend we can make the whole class as a friend of another class.
// // For example:

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
    int sumImgComplex(complex n1, complex n2);
};

class complex
{
    int a, b;
    friend class calculator;
    // ==> Here in the above line we have made class calculator as friend of class complex.
    // Means class complex is saying that class calculator is my friend and he can use my private data (variables).

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

int calculator ::sumImgComplex(complex n1, complex n2)
{
    return (n1.b + n2.b);
}

int main()
{
    complex c1, c2;
    c1.setNumber(5, 3);
    c2.setNumber(5, 1);

    calculator calc;
    int result_1 = calc.sumRealComplex(c1, c2);
    cout << "The sum of the Real part of complex number is: " << result_1 << endl;

    int result_2 = calc.sumImgComplex(c1, c2);
    cout << "The sum of the Imaginary part of complex number is: " << result_2 << endl;

    return 0;
}

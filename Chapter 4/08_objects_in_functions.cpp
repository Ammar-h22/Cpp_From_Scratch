#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setNumber(void)
    {

        cout << "Enter the values of complex number: " << endl;
        cin >> a >> b;
    }
    void printNumber()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
    void sumNumber(complex x1, complex x2)
    {
        a = x1.a + x2.a;
        b = x1.b + x2.b;
        cout << "The sum of your complex number is: " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setNumber();
    c1.printNumber();

    c2.setNumber();
    c2.printNumber();

    c3.sumNumber(c1, c2);

    return 0;
}

// #include <iostream>
// using namespace std;
// class complex
// {
//     int a;
//     int b;

// public:
//     void setData(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void printNumber()
//     {
//         cout << "The complex number is " << a << " + " << b << "i" << endl;
//     }
//     void setDataBySum(complex x1, complex x2) //--> x1 and x2 are the two objects of class complex.
//     {
//         a = x1.a + x2.a;
//         b = x1.b + x2.b;
//         cout << "The sum of your complex number is: " << a << "+" << b << "i" << endl;
//     }
// };

// int main()
// {
//     complex c1, c2, c3;
//     c1.setData(3, 5);
//     c1.printNumber();

//     c2.setData(1, 7);
//     c2.printNumber();

//     c3.setDataBySum(c1, c2);

//     return 0;
// }

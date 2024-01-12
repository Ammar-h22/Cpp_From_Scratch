/* Syntax for templates with multiple parameters:
template <class T1, class T2, class T3 .....>
class NameOfClass
{
    (Body);
};
*/

// // Example 1:
// #include <iostream>
// using namespace std;

// template <class T1, class T2>
// class myClass
// {
// public:
//     T1 data1;
//     T2 data2;
//     myClass(T1 a, T2 b)
//     {
//         data1 = a;
//         data2 = b;
//     }
//     void display(void)
//     {
//         cout << "Data1 is: " << data1 << endl;
//         cout << "Data2 is: " << data2 << endl;
//     }
// };
// int main()
// {
//     // myClass<int, char> obj(21, 'F');
//     // myClass<int, float> obj(21, 1.6);
//     myClass<char, float> obj('S', 1.6);
//     obj.display();
//     return 0;
// }

// Example 2:
#include <iostream>
using namespace std;

template <class A1, class A2>
class Calculator
{
public:
    A1 data1;
    A2 data2;
    Calculator(A1 num1, A2 num2)
    {
        data1 = num1;
        data2 = num2;
    }
    void display(void)
    {
        cout << "The Addition of Data1 and Data2 is: " << data1 + data2 << endl;
        cout << "The Substraction of Data1 and Data2 is: " << data1 - data2 << endl;
        cout << "The Multiplication of Data1 and Data2 is: " << data1 * data2 << endl;
    }
};
int main()
{
    Calculator<int, int> c1(4, 7);
    Calculator<float, float> c2(4.3, 7.2);
    c1.display();
    c2.display();
    return 0;
}

// IMPORTANT:
// The main reason to use or main advantage of template is that initially we can just assign any
// letter instead of declaring a datatype and then while making the object of the class we can give
// any datatype we want.
// So basically we can use a single program for all the datatypes(int, float, char, double, etc.)
// Or we can say that we can perform different operations with different datatypes on just a single program.

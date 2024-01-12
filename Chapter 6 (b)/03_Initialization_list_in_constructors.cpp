/* Syntax for initialization list in constructor:
constructor(argument-list) : initialization-section
{
    (Body of the constructor);
}
*/

#include <iostream>
using namespace std;
class Test
{
    int a, b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)

    // Test(int i, int j) : b(j), a(i + b)
    // The above line will not show the correct value (it will throw a garbage value) because we have
    // declared 'a' variable first and then 'b' variable, so always 'a' will be initialized first.
    // So this line will execute properly if we initialize 'b' variable first and then 'a' variable.

    {
        cout << "Constructor executed! " << endl;
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};
int main()
{
    Test t(4, 6);

    return 0;
}

/* Test (int i, int j) : a(i), b(j) 
              
This is just similar to ..
              
   Test (int i, int j)
    {
        a = i;
        b = j;
    }              
*/
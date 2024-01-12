#include <iostream>

using namespace std;

int main()
{
    int a = 4, b = 3;

    cout << "Following are the types of operators in C++" << endl;
    // endl is just used to print the statement on the new line.
    // Arithmetic operators:
    cout << "The value of a + b is : " << a + b << endl;
    cout << "The value of a - b is : " << a - b << endl;
    cout << "The value of a * b is : " << a * b << endl;
    cout << "The value of a / b is : " << (float)a / b << endl;
    cout << "The value of a % b is : " << a % b << endl;
    cout << "The value of a++ is : " << a++ << endl;
    cout << "The value of a-- is : " << a-- << endl;
    cout << "The value of ++a is : " << ++a << endl;
    cout << "The value of --a is : " << --a << endl;

    // Assignment operators:  ---> Used to assign values to variables
    int m = 10, n = 4;
    char c = 'A';

    // Comparison operators:  ---> Used to compare 2 values

    cout << "Following are the comaprison operators: " << endl;
    cout << " The value of a==b is " << (a == b) << endl;
    cout << " The value of a!=b is " << (a != b) << endl;
    cout << " The value of a>b is " << (a > b) << endl;
    cout << " The value of a<b is " << (a < b) << endl;
    cout << " The value of a>=b is " << (a >= b) << endl;
    cout << " The value of a<=b is " << (a <= b) << endl;

    // Logical operators:
    cout << " The value of this logical and operator ((a == b) && (a<b)) is : " << ((a != b) && (a < b)) << endl;
    cout << " The value of this logical or operator ((a == b) || (a<b)) is : " << ((a != b) || (a < b)) << endl;
    cout << " The value of this logical not operator (!(a == b)) is : " << (!(a == b)) << endl;

    return 0;
}

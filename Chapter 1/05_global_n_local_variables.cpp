#include <iostream>
using namespace std;
int c = 43;    //---> Global variable

int main()
{
    int c = 15;   //---> Local variable
    cout << "The value of c is " << c << endl;
    cout << "The value of global variable c is " << c << endl;
    // The above line will still print the value of c as 15 ,
    // because local variables takes precedence over global variables.
    // So if we want to print the global variable then we can do it in this way:
    cout << "The value of global variable c is " << ::c << endl;
    // :: --> This symbol is known as Scope Resolution Operator.
    return 0;
}


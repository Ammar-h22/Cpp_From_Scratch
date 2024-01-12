// #include <iostream>
// using namespace std;
// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }
// int main()
// {
//     int num1, num2;
//     cout << "Enter the first number: " << endl;
//     cin >> num1;
//     cout << "Enter the second number: " << endl;
//     cin >> num2;

//     cout << "The sum is: " << sum(num1, num2) << endl;
//     return 0;
// }

// // Now we can also write the program using function prototype:
// // For Example:

// #include <iostream>
// using namespace std;

// int sum(int a, int b); //---> Function prototype
// // int sum(int , int);  //---> This will also work
// // int sum(int a, b);  //---> This will throw an error(we can't write like this)

// int main()
// {
//     int num1, num2;
//     cout << "Enter the first number: " << endl;
//     cin >> num1;
//     cout << "Enter the second number: " << endl;
//     cin >> num2;
//     // num1 and num2 are Actual parameters
//     cout << "The sum is: " << sum(num1, num2) << endl;
//     return 0;
// }
// int sum(int a, int b)
// {
//     // a and b are Formal parameters (a and b will be taking values from Actual parameters num1 and num2)
//     int c = a + b;
//     return c;
// }

// If we want to print a particular statement again and again then we use void function.
#include <iostream>
using namespace std;
void greeting()
{
    cout << "Hello, Good Morning ";
}

int main()
{
    greeting();
    return 0;
}

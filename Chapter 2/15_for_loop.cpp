// #include <iostream>
// using namespace std;

// int main()
// {
//     // Syntax for (for loop)
//     // for (intialization; condition; updation)
//     // {
//     //     loop body(C++ code);
//     // }

//     for (int i = 0; i <= 15; i++)
//     {
//         cout << i << endl;
//     }
//     return 0;
// }


// Program to print Multiplication table of any number:

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "****The Multplication Table of " << num << " is**** "<<endl;
    for (int i = 1; i <= 10; i++)
    {

        cout << num << " X " << i << " = " << num * i << endl;
    }
    return 0;
}


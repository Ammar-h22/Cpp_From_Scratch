// // Program to find the factorial of a number:
// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main()
// {
//     int num;
//     cout << "Enter the number: " << endl;
//     cin >> num;
//     cout << "The factorial of " << num << " is " << factorial(num);
//     return 0;
// }

// Step by step calculation of factorial 4:
// factorial(4) = 4 * factoria(3);
// factorial(4) = 4 * 3 * factoria(2);
// factorial(4) = 4 * 3 * 2 * factoria(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

// Program to find the term in the finbonacci sequnce:
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "The term in fibonacci sequence at position " << num << " is: " << fibonacci(num) << endl;
    return 0;
}

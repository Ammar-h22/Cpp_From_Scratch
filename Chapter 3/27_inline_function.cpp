#include <iostream>
using namespace std;
int product(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and value of b " << endl;
    cin >> a >> b;
    cout << "The product of a and b is: " << product(a, b) << endl;

    return 0;
}

// Inline funciton:
// This function will not change any output of the code, the only use
// of this inline funtion is that it reduces the time and memory of the code.
// Note that we should use inline function only on small programs ,
// not on big and lenghty programs.

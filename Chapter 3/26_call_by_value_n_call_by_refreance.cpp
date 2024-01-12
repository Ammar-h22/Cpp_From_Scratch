
// This is an example of (Call by value) :

// #include <iostream>
// using namespace std;
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int a = 3, b = 5;
//     cout << "The value of a is " << a << " and the value of b is " << b << endl;
//     swap(a, b);
//     cout << "Now after swaping, the value of a is " << a << " and the value of b is " << b << endl;
//     return 0;
// }

// Here as we can see that in the above code the numbers did not swap because we have done Call by value and not Call by refrence
// Now we will do (Call by Refrence) using pointers:

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 3, b = 5;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swap(&a, &b);
    cout << "Now after swaping, the value of a is " << a << " and the value of b is " << b << endl;
    return 0;
}

// // Call by Reference using C++ reference Variables:
// #include <iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int a = 3, b = 5;
//     cout << "The value of a is " << a << " and the value of b is " << b << endl;
//     swap(a, b);
//     cout << "Now after swaping, the value of a is " << a << " and the value of b is " << b << endl;

//     return 0;
// }

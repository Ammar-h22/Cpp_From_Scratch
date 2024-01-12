// What is pointer ?  ---> Data type which holds the address of other data types.
// &  ---> (Address of) operator
// *  ---> (value at) Dereference operator

#include <iostream>
using namespace std;

int main()
{
    int a = 19;
    int *ptr = &a;

    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << ptr << endl;
    cout << "The value of a is " << *ptr << endl;

    return 0;
}


// pointer to pointer:

#include <iostream>
using namespace std;

int main()
{
    int a = 19;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << ptr1 << endl;
    cout << "The address of a is " << *ptr2 << endl;
    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << *ptr1 << endl;
    cout << "The value of a is " << **ptr2 << endl;
    return 0;
}

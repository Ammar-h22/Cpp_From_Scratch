// Function objects:
// Firstly, function object is also known as Functor.
// Function is wrapped in a class so that it is available like an object.
// Function Object basically ek object hai jo function jaise kaam karega.
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 9, 5, 2, 6};
    // sort(arr, arr + 5);                 // This will print the array in ascending order
    sort(arr, arr + 5, greater<int>()); // This will print the array in descending order
    // Here greater<int>() is a function object, and there are also many other function objects under
    // the functional header file.
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

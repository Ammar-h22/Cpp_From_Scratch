#include <iostream>
using namespace std;

int main()
{
    // // Basic example of pointer:
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is: " << *ptr << endl;

    // // new keyword/operator:
    int *ptr1 = new int(45);
    float *ptr2 = new float(66.4);
    cout << "The value at address ptr1 is: " << *ptr1 << endl;
    cout << "The value at address ptr2 is: " << *ptr2 << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;

    // delete keyword/operator:
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr; //--> This will clear/delete the whole dynamically allocated array.
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;
    // As we have deleted the array ,so these 3 above statements will throw any garbage value.

    return 0;
}

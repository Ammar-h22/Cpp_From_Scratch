// Example 1: (Simple example of Template)
#include <iostream>
using namespace std;

template <class A>
class Citizen
{
public:
    A height;
    Citizen(A data)
    {
        height = data;
    }
    void display(void)
    {
        cout << "Your Height is: " << height << endl;
    }
};

int main()
{
    // Citizen<int> c1(5);
    Citizen<float> c1(5.76);
    c1.display();
    return 0;
}

// Example 2:  (Normal Program without template)
// #include <iostream>
// using namespace std;
// class vector
// {
// public:
//     int *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new int[size];
//     }
//     int DotProduct(vector v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//        //   d += arr[i] * v.arr[i];  // This will also work.
//         }
//         return d;
//     }
// };
// int main()
// {
//     // vector v1(3);
//     // v1.arr[0] = 4;
//     // v1.arr[1] = 5;
//     // v1.arr[2] = 2;
//     // vector v2(3);
//     // v2.arr[0] = 1;
//     // v2.arr[1] = 2;
//     // v2.arr[2] = 7;
//     // int a = v1.DotProduct(v2);
//     // cout << a << endl;

//     vector v1(3);
//     v1.arr[0] = 4.2;
//     v1.arr[1] = 5.4;
//     v1.arr[2] = 2.1;
//     vector v2(3);
//     v2.arr[0] = 1.6;
//     v2.arr[1] = 2.2;
//     v2.arr[2] = 7.9;
//     float a = v1.DotProduct(v2);
//     cout << a << endl;
// This whole calculation will come out to be wrong, because in the above class
// we have done all the declarations in 'int' datatype. So we can't do float calculations unless we
// make an another class with all the same functions as in this class , just with float datatype.
// But why to make again the whole class if we have the Template concept in C++.

// // Example 2: (This is a complex example)
// #include <iostream>
// using namespace std;

// template <class T>
// class vector
// {
// public:
//     T *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new T[size];
//     }
//     T DotProduct(vector v)
//     {
//         T d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//             //  d += arr[i] * v.arr[i];  // This will also work.
//         }
//         return d;
//     }
// };
// int main()
// {
//     // vector<int> v1(3);
//     // v1.arr[0] = 4;
//     // v1.arr[1] = 5;
//     // v1.arr[2] = 2;
//     // vector<int> v2(3);
//     // v2.arr[0] = 1;
//     // v2.arr[1] = 2;
//     // v2.arr[2] = 7;
//     // int a = v1.DotProduct(v2);
//     // cout << a << endl;

//     // vector<float> v1(3);
//     // v1.arr[0] = 1.4;
//     // v1.arr[1] = 3.3;
//     // v1.arr[2] = 0.1;
//     // vector<float> v2(3);
//     // v2.arr[0] = 0.1;
//     // v2.arr[1] = 1.90;
//     // v2.arr[2] = 4.1;
//     // float a = v1.DotProduct(v2);
//     // cout << a << endl;
//     // Now here ṭhe calculaton will work properly as we have used template

//     // Now we can also this for double:
//     vector<double> v1(3);
//     v1.arr[0] = 1.4;
//     v1.arr[1] = 3.3;
//     v1.arr[2] = 0.1;
//     vector<double> v2(3);
//     v2.arr[0] = 0.1;
//     v2.arr[1] = 1.90;
//     v2.arr[2] = 4.1;
//     double a = v1.DotProduct(v2);
//     cout << a << endl;

//     return 0;
// }

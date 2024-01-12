// Function overloading is not a big concept , it is just that we can assign
//  the same function name n number of times to perform different tasks.

#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout << "The sum of 4 and 5 is " << sum(4, 5) << endl;
    cout << "The sum of 4, 2 and 5 is " << sum(4, 2, 5) << endl;

    return 0;
}

// One more example of function overloading: 

#include <iostream>
using namespace std;
// Function to calculate the volume of cylinder
int volume(int r, int h)
{
    return (3.14 * r * r * h);
}
// Function to calculate the volume of cube
int volume(int a)
{
    return (a * a * a);
}
// Function to calculate the volume of rectangle
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The volume of cylinder of radius 3 and height 5 is: " << volume(3, 5) << endl;
    cout << "The volume of cube of side 5 is: " << volume(5) << endl;
    cout << "The volume of rectangle of lenght 8 breath 4 and height 5 is: " << volume(8, 4, 5) << endl;
    return 0;
}

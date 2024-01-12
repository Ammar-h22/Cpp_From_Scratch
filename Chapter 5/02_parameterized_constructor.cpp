// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;

// public:
//     complex(int x, int y); // Constructor declaration

//     void printData()
//     {
//         cout << "Your complex number is: " << a << " + " << b << "i" << endl;
//     }
// };
// complex ::complex(int x, int y) // This is a Parameterized constructor
// {
//     a = x;
//     b = y;
// }
// int main()
// {
//     // Implicit call
//     complex c1(5, 3);
//     c1.printData();

//     // Explicit call
//     complex c2 = complex(4, 6);
//     c2.printData();

//     return 0;
// }

// One more example on Parameterized constructor:

#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b) //==> Here we have done constructor declaration as well as definition
    {
        x = a;
        y = b;
    }

    void printPoint()
    {
        cout << "The point is: (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    point p(1, 1);
    p.printPoint();

    point q(4, 6);
    q.printPoint();

    return 0;
}

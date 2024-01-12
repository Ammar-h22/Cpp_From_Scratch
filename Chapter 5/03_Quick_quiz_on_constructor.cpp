// Program to find the distance between two points using Parameterized constructor:

#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;
    friend int pointDistance(point, point);

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
int pointDistance(point p, point q)
{
    cout << "The Distance is: " << sqrt(pow(q.x - p.x, 2) + pow(q.y - p.y, 2));
}

int main()
{
    point p(1, 1);
    p.printPoint();

    point q(2, 4);
    q.printPoint();

    pointDistance(p, q);

    return 0;
}

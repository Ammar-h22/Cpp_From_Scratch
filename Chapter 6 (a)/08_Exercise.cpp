#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
public:
    int a, b;
    void getData1()
    {

        cout << "Enter the two numbers: " << endl;
        cin >> a >> b;
    }
    void SimpleOperations()
    {
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << (float)a / b << endl;
    }
};
class ScintificCalculator
{
public:
    int a, b;
    void getData2()
    {
        cout << "Enter the two numbers: " << endl;
        cin >> a >> b;
    }
    void ScintificOperations()
    {
        cout << "The value of cos(a) is: " << cos(a) << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of exp(a) is: " << exp(a) << endl;
        cout << "The value of tan(a) + tan(b) is: " << tan(a) + tan(b) << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScintificCalculator
{
public:
    void Result()
    {
        getData1();
        SimpleOperations();
        getData2();
        ScintificOperations();
    }
};
int main()
{

    HybridCalculator h1;
    h1.Result();
    return 0;
}

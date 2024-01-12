#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Ammar
{
public:
    T1 a;
    T2 b;
    T3 c;
    Ammar(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void Display(void)
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << endl;
    }
};
int main()
{
    Ammar<> obj(21, 44.6, '9'); // Here we have not defined any datatype because as
                                // we have already declared it while making the template.
    obj.Display();
    Ammar<float, char, char> obj2(11.56, 'B', 'O'); // Now here instead of default parameters(datatypes),
                                                    //  we have set some another datatypes.
    obj2.Display();
    return 0;
}

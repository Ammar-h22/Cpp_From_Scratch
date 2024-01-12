// Example 1:
#include <iostream>
using namespace std;

template <class T>
class Ammar
{
public:
    T data;
    Ammar(T a)
    {
        data = a;
    }
    void Display(void);
};
template <class T>
void Ammar<T>::Display(void) // If we want to declare a function later, then we declare it in this way.
{
    cout << data;
}
int main()
{
    Ammar<int> o1(34);
    cout << o1.data << endl; // Method 1
    o1.Display();            // Method 2
    return 0;
}

// Example 2:
// Template Overloading Concept:
#include <iostream>
using namespace std;

void func1(int a) // Original function
{
    cout << "I am first func1(), "
         << "a: " << a << endl;
}

template <class A> // Template function
void func1(A a)
{
    cout << "I am Templatised func1(), "
         << "a: " << a << endl;
}

template <class A> // Template function
void func2(A a)
{
    cout << "I am Templatised func2(), "
         << "a: " << a << endl;
}
int main()
{
    func1(4);
    // Now here which function will be executed, the original function or the template function?
    // So always remember that the original function (without Template) will be executed first.

    func2(6);
    // Now here the template function will be executed because there is only one function i.e
    // there is no other function that has func2().

    // Note:
    // 1) As there are 2 func1() function, so in such case the exact match function(without template) will be executed.
    // 2) And as there is only one func2() function, so in such case the template function will be executed.
    return 0;
}

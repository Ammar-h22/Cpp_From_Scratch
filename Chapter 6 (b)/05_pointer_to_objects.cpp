#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData(void)
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
        cout << "Hence, the complex number is: " << real << " + " << imaginary << "i" << endl;
    }
};
int main()
{
    complex c; // --> Method 1
    c.setData(12, 56);
    c.getData();

    complex *ptr = &c; // --> Method 2
    (*ptr).setData(12, 56);
    (*ptr).getData();

    complex *ptr = new complex; // --> Method 3
    (*ptr).setData(12, 56);
    (*ptr).getData();

    return 0;
}

// Arrow operator:
// Instead to writing like this ---> (*ptr).setData(12, 56)
// We can also write like this --->  ptr->setData(12, 56)
// This is known as arrow operator.

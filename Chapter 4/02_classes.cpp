#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1);   //--->  Here we have just done the declaration of function
    void getData()                         //--> Here we have declared as well as defined the function   
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;  
}

int main()
{
    Employee roshan;
    // roshan.a = 23;   ---> This will throw an error as 'a' is private, and similarly this goes for 'b' and 'c'
    roshan.d = 45;
    roshan.e = 68;
    roshan.setData(23, 36, 58);
    roshan.getData();

    return 0;
}


// If we define the variables in private, then we can access them only using class function.
// If we define the variables in public, then we can directly access them without using any function.
// We can see in the above program.

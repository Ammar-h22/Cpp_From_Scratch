// // A simple example on Friend function:

// #include <iostream>
// using namespace std;

// // Forward Declaration:
// class Y;

// class X
// {
//     int data;

//     friend void add(X, Y);

// public:
//     void setValue(int value)
//     {
//         data = value;
//     }
// };
// class Y
// {
//     int num;
//     friend void add(X, Y);

// public:
//     void setValue(int value)
//     {
//         num = value;
//     }
// };
// void add(X x1, Y y1)
// {
//     cout << "The sum of two objects of two classes X and Y is: " << (x1.data + y1.num) << endl;
// }

// int main()
// {
//     X a;
//     a.setValue(5);

//     Y b;
//     b.setValue(2);

//     add(a, b);

//     return 0;
// }

// // A Complex example on Friend function:

#include <iostream>
using namespace std;

// Forward Declaration:
class c2;

class c1
{
    int val1;
    friend void swap(c1 &, c2 &);

public:
    void inData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1;
    }
};

class c2
{
    int val2;
    friend void swap(c1 &, c2 &);

public:
    void inData(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2;
    }
};
void swap(c1 &x, c2 &y)
{

    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 m;
    m.inData(34);
    c2 n;
    n.inData(87);

    cout << "The value of c1 is: ";
    m.display();
    cout << endl;
    cout << "The value of c2 is: ";
    n.display();
    cout << endl;

    swap(m, n);

    cout << "The value of c1 after Swaping is: ";
    m.display();
    cout << endl;
    cout << "The value of c2 after Swaping is: ";
    n.display();
    cout << endl;

    return 0;
}

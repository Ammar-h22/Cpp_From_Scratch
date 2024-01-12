#include <iostream>
using namespace std;
class base
{
    int data1; // private by default and is not inheritable

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void base ::setData()
{
    data1 = 10;
    data2 = 20;
}

int base ::getData1()
{
    return data1;
}

int base ::getData2()
{
    return data2;
}

class derived : private base // class is being derived privately
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    setData();
    data3 = data2 * getData1();
}

void derived ::display()
{

    cout << "Value of data1 is: " << getData1() << endl;
    cout << "Value of data2 is: " << data2 << endl;
    cout << "Value of data3 is: " << data3 << endl;
}
int main()
{
    derived d1;

    // d1.setData();
    // Here we can't write directly like this because setData() has now
    // became a private member in the derived class.
    // Instead we can write it inside some function of the derived class,
    // like here we have wrote it in the process() function.
    d1.process();
    d1.display();

    return 0;
}

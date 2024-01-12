#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 65, int c = 90)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};
void simple :: printData()
{
    cout << "The value of data1, data2 and data3 are: " << data1 << ", " << data2 << " and " << data3 << endl;
}

int main()
{
    simple s1(11, 12, 13); // This will print values as 11, 12 and 13
    simple s2(10);         // This will print values as 10, 65 and 90 because we have set default value of b as 65 and c as 90
    s1.printData();
    s2.printData();
    return 0;
}

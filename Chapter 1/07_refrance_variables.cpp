#include <iostream>
using namespace std;

int main()
{
    int x = 434; //---> Original variable
    int &y = x;  //---> Reference variable
    cout << x << endl;
    cout << y << endl;
    return 0;
}

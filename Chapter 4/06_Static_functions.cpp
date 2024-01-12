#include <iostream>
using namespace std;
class employee
{
    int Id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter your Id: " << endl;
        cin >> Id;
        count++;
    }
    void getData(void)
    {
        cout << "This is Employee No. " << count << endl;
        cout << "The Id of this Employee is: " << Id << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};
int employee ::count; //--> Default value is 0
int main()
{
    employee rohan, raj, suraj;

    rohan.setData();
    rohan.getData();
    rohan.getCount();
    // employee::getCount();

    raj.setData();
    raj.getData();
    employee::getCount();

    suraj.setData();
    suraj.getData();
    employee::getCount();
    return 0;
}

// Important Note:
// Static functions only have access to print values of static variables, they cannot
// print the values of some other variables.
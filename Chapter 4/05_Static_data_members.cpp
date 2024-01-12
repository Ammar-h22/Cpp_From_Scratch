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
};
int employee ::count; //--> Default value is 0
int main()
{
    employee rohan, raj, suraj;
    // rohan.Id = 101;
    // rohan.count = 1;
    // This above both lines will throw an error as Id and count are private.

    rohan.setData();
    rohan.getData();

    raj.setData();
    raj.getData();

    suraj.setData();
    suraj.getData();
    return 0;
}

// Whenever we declare a variable as static then there
// is no need to initialize it with 0, its value is by default taken as 0.

// Static Variable:
// For example , in the above code we have made count variable as static , that means
// count variable will remain same for all the objects that we have made in this program.
// If we do not make count variable as static then we cannot take the count of no. of
// employees because if we do not make it static, then all the objects will start counting from 0
// and we will not be able to see the count. So in order to share the variable with all the objects
// we make that variable as static.
// So in this case all 3 variables (rohan, raj, suraj) are sharing the count variable.

// Important Statement:
// count (variable) is the Static data member of class employee.

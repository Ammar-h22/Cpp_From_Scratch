#include <iostream>
using namespace std;
class employee
{
    int Id;
    int salary;

public:
    void setId(void)
    {
        salary = 200000;
        cout << "Enter your Id: " << endl;
        cin >> Id;
    }
    void getId(void)
    {
        cout << "The Id of this Employee is: " << Id << endl;
    }
};

int main()
{

    employee google[4];
    for (int i = 0; i < 4; i++)
    {
        google[i].setId();
        google[i].getId();
    }

    return 0;
}

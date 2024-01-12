#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    if (age < 18)
    {
        cout << "You cannot come to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "You can come if you have the kid's pass" << endl;
    }
    else
    {
        cout << "You can come to my party" << endl;
    }

    return 0;
}

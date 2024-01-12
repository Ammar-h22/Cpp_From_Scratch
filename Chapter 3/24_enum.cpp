// Enum is just used to give the datatypes a number or we can say an integer.
// According to the sequence it allocates 0,1,2,3,4.....

#include <iostream>
using namespace std;

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    //  Or we can also do in this way:
    Meal m1 = breakfast;
    cout << m1;
    return 0;
}

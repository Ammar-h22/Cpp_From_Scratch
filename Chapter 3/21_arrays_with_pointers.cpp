#include <iostream>
using namespace std;

int main()
{
    int marks[] = {55, 75, 87, 53};
    int *ptr = marks;
    cout << "The value of marks[1] is " << *ptr << endl;
    cout << "The value of marks[2] is " << *(ptr + 1) << endl;
    cout << "The value of marks[3] is " << *(ptr + 2) << endl;
    cout << "The value of marks[4] is " << *(ptr + 3) << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int marks[] = {55, 75, 87, 53};
    int *ptr = marks;
    cout << *(ptr++) << endl; //---> This will point to first element , that is 55 then it will increment .
    cout << *ptr << endl;     //---> Now as in the above line we have incremented this will point to 75.
    cout << *(++ptr);         //---> As the current value was 75 in the above line , here we have first incremented i.e we have done (++ptr) , so it will print 87.
    return 0;
}

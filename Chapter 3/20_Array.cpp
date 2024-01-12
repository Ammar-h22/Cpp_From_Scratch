#include <iostream>
using namespace std;

int main()
{
    int marks[] = {25, 34, 56, 42, 76}; //---> One type of declaration
    int percentage[4];                  //---> Another type of declaration
    percentage[0] = 45;
    percentage[1] = 65;
    percentage[2] = 68;
    percentage[3] = 78;

    cout << "These are marks of students: " << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    cout << "These are percentage of students: " << endl;

    cout << percentage[0] << endl;
    cout << percentage[1] << endl;
    cout << percentage[2] << endl;
    cout << percentage[3] << endl;

    // We can also change the value of an array
    // For example:
    percentage[2] = 89;
    cout << percentage[0] << endl;
    cout << percentage[1] << endl;
    cout << percentage[2] << endl;
    cout << percentage[3] << endl;
    // Now the value of percentage[2] will be changed to 89 (initially it was 68)

    return 0;
}

// Printing the elements of an array using loops:

#include <iostream>
using namespace std;

int main()
{
    int marks[] = {44, 75, 56, 42, 77};
    for (int i = 0; i < 5; i++)
    {
        cout << "The marks of student " << i + 1 << " is " << marks[i] << endl;
    }
    return 0;
}


// Union is also exactly same as structures but in union
//  there is a main differece that here we can use only one item at a time.
// For example: In the below code in b/w rice, car and pound we can only
// print one item, not all because in union it uses the same memory for all items,
// So we can't print all items at a time.

#include <iostream>
using namespace std;
union money
{
    int rice;
    char car;
    int pounds;
};
int main()
{
    union money m1;
    m1.rice = 45;
    cout << m1.rice << endl;

    return 0;
}

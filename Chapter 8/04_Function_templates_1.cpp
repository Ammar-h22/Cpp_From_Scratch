// #include <iostream>
// using namespace std;

// float funcAverage1(int a, int b)
// {
//     float avg = (float)(a + b) / 2;
//     return avg;
// }

// float funcAverage2(int a, float b)
// {
//     float avg = (float)(a + b) / 2;
//     return avg;
// }

// int main()
// {

//     cout << "The Average of these two numbers is: " << funcAverage1(5, 2) << endl;
//     cout << "The Average of these two numbers is: " << funcAverage2(5, 2.4) << endl;
//     return 0;
// }

// Now here instead of making n number of function for different datatypes, we can directly make just a
// single function for all datatypes by using templates.

// Example:
#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}
int main()
{
    cout << "The Average of These two numbers is: " << funcAverage(25, 5.22) << endl;
    return 0;
}
// Now as we can see that by just making a single program, now we can give any datatype we want on the same program.

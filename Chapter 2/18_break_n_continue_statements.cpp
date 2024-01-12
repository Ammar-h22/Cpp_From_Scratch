// Example of break statement:

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i <= 5; i++)
//     {
//         cout << i << endl;
//         if (i == 3)
//         {
//             break;
//         }

//     }
//     return 0;
// }

// Example of continue statement:

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 5; i++)
    {

        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}

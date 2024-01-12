// #include <iostream>
// using namespace std;

// float moneyReceived(int currentMoney, float factor = 1.04)
// //--> Here we have initialized float factor with 1.04 value so now this has became a default argument in this program
// {
//     return currentMoney * factor;
// }
// int main()
// {
//     int money = 100000;
//     cout << "If you have Rs. " << money << " in your bank account, then you will receive Rs. " << moneyReceived(money) << " after 1 year. " << endl;

//     return 0;
// }



// If we want to change the value of default argument then we have to write the new value when we will call the funciton:
// For example:
#include <iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor = 1.04)
//--> Here we have initialized float factor with 1.04 value so now this has became a default argument in this program
{
    return currentMoney * factor;
}
int main()
{
    int money = 100000;
    cout << "If you have Rs. " << money << " in your bank account, then you will receive Rs. " << moneyReceived(money, 1.1) << " after 1 year. " << endl;

    return 0;
}
// So in the above program we have changed the value of factor(default argument) to 1.1

#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; };
    void setData(void);
    void displayData(void);
};
void shop ::setData(void)
{
    cout << "Enter the Id of your item No. " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item No. " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayData(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of your item having Id:" << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop Tiptop;
    Tiptop.initCounter();
    Tiptop.setData();
    Tiptop.setData();
    Tiptop.setData();
    Tiptop.displayData();
    return 0;
}

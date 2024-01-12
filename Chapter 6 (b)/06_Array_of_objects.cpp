#include <iostream>
using namespace std;
class ShopItem
{
    int Id;
    float price;

public:
    void setData(int a, float b)
    {
        Id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Id of this item is: " << Id << endl;
        cout << "Price of this item is: " << price << endl;
    }
};
int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptr2 = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Id and price of item no. " << i + 1 << endl;
        cin >> p >> q;

        (*ptr).setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        (*ptr2).getData();
        *ptr2++;
    }

    return 0;
}

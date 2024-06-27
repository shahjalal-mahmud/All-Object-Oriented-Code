#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setPrice(int a, int b)
    {
        id = a;
        price = b;
    }
    void getPrice()
    {
        cout << "The price of " << id << " id product is: " << price << endl;
    }
};
int main()
{
    int size = 4;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p, q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the product ID and Price: " << endl;
        cin >> p >> q;
        ptr->setPrice(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        ptrTemp->getPrice();
        ptrTemp++;
    }

    return 0;
}
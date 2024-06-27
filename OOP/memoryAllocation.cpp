#include <iostream>
using namespace std;

class shop
{
    int productID[100];
    int productPrice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};
void shop ::setPrice()
{
    cout << "Enter ID of your product No. " << counter + 1 << " : " << endl;
    cin >> productID[counter];
    cout << "Enter price of your product No. " << counter + 1 << " : " << endl;
    cin >> productPrice[counter];
    counter++;
}
void shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of " << productID[i] << " ID is " << productPrice[i] << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the product number: " << endl;
    cin >> n;
    if (n > 100)
    {
        cout << "The number of products cannot exceed 100." << endl;
        return 1;
    }
    shop xyz;
    xyz.initcounter();
    for (int i = 0; i < n; i++)
    {
        xyz.setPrice();
    }
    xyz.displayPrice();
    return 0;
}
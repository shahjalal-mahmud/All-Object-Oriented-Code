#include <iostream>

using namespace std;

void swap(int *x, int *y)
{

    int temp = *x;

    *x = *y;

    *y = temp;
}
int main()
{
    int a, b;
    cout << "Enter 1st value: ";
    cin >> a;
    cout << "Enter 2nd value: ";
    cin >> b;
    cout << "Before swapping: ";
    cout << "a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "After swapping: ";
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

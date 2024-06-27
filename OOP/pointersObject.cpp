#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "The Complex number is: " << real << " + " << imaginary << "i" << endl;
    }
};
int main()
{
    Complex c1;
    c1.setData(3, 4);
    c1.getData();

    // Pointers in Objects
    Complex *ptr = new Complex;
    (*ptr).setData(4, 5);
    (*ptr).getData();

    // Arrow operator
    Complex *ptr1 = new Complex;
    ptr1->setData(6, 7);
    ptr1->getData();

    Complex *ptr2 = new Complex[4];
    ptr2->setData(9, 10);
    ptr2->getData();

    return 0;
}
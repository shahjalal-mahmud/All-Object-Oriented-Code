#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex() // Default constructor
    {
        a = 0;
        b = 0;
    }
    complex(int x) // Parameterized Constractor
    {
        a = x;
        b = 0;
    }
    complex(int x, int y) // Parameterized constructor
    {
        a = x;
        b = y;
    }
    void printvalue()
    {
        cout << "The point is: (" << a << ", " << b << ")" << endl;
    }
};

int main()
{
    complex c1(2, 3);
    c1.printvalue();

    complex c2(5);
    c2.printvalue();

    complex c3;
    c3.printvalue();

    return 0;
}
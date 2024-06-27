#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int); // Constractor declaration
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(int x, int y) // This is the Parameterized constructor
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    complex c1(4, 5);
    c1.printNumber();

    // Explicit call
    complex c2 = complex(5, 4);
    c2.printNumber();

    return 0;
}
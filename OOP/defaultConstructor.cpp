#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y=5) // Default constructor
    {
        a = x;
        b = y;

    }
    void printvalue()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(4);
    c1.printvalue();
    return 0;
}
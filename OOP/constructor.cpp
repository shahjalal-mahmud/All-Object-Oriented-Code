#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(); // Constractor declaration
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};
complex ::complex() // This is the default constructor , cannot accept parameterized constructor
{
    a = 10;
    b = 9;
}
int main()
{
    complex c1;
    c1.printNumber();
    return 0;
}
#include <iostream>
using namespace std;

template <class T1, class T2>

class Complex
{
public:
    T1 realNumber;
    T2 imaginaryNumber;

    Complex(T1 r, T2 ima) : realNumber(r), imaginaryNumber(ima) {}

    void Display()
    {
        cout << "Your complex Number is: " << realNumber << " + " << imaginaryNumber << "i" << endl;
    }
};
int main()
{
    Complex<int, double> c1(5, 8.9);
    c1.Display();
    return 0;
}
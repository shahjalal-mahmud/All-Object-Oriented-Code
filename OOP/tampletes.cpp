#include <iostream>
using namespace std;

template <class T>

class Complex
{
public:
    T realNumber;
    T imaginaryNumber;

    Complex(T r, T ima) : realNumber(r), imaginaryNumber(ima){}

    void Display()
    {
        cout << "Your complex Number is: " << realNumber << " + " << imaginaryNumber << "i" << endl;
    }
};
int main()
{
    Complex<double> c1(5.5, 8.9);
    c1.Display();
    return 0;
}
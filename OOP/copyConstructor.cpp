#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int value)
    {
        a = value;
    }
    //when no copy constructor is found, the compiler supplier its own copy constructor
    Number(Number &obj)
    {
        a = obj.a;
        cout << "Copy Constructor called." << endl;
    }
    void display()
    {
        cout << "The number is: " << a << endl;
    }
};

int main()
{
    Number c1, c5;
    c1.display();

    Number c2(5);
    c2.display();

    Number c3(c2); // Copy constructor invoked
    c3.display();

    Number c4(c3); // Copy constructor invoked
    c4.display();

    c5 = c1; // Copy constructor not invoked
    c5.display();

    return 0;
}
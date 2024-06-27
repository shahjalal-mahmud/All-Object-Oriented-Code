#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i) // Base1 Constructor
    {
        data1 = i;
        cout << "Base1 Constructor is called." << endl;
    }
    void print_data1()
    {
        cout << "The value of data1 is: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i) // Base2 Constructor
    {
        data2 = i;
        cout << "Base2 Constructor is called." << endl;
    }
    void print_data2()
    {
        cout << "The value of data2 is: " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    // Syntex for constructor Inheritance

    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived Constructor is called." << endl;
    }
    void display()
    {
        print_data1();
        print_data2();
        cout << "The value of derived1 is: " << derived1 << endl;
        cout << "The value of derived2 is: " << derived2 << endl;
    }
};

int main()
{
    Derived shahjalal(1, 2, 3, 4);
    shahjalal.display();
    return 0;
}
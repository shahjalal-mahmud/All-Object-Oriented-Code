#include <iostream>
using namespace std;

class base1
{
protected:
    int data1;

public:
    void set_data1(int a)
    {
        data1 = a;
    }
    void get_data1()
    {
        cout << "The data1 is: " << data1 << endl;
    }
};

class base2
{
protected:
    int data2;

public:
    void set_data2(int a)
    {
        data2 = a;
    }
    void get_data2()
    {
        cout << "The data2 is: " << data2 << endl;
    }
};

// Exmaple of a multiple inheritance

class derived : public base1, public base2
{
    int data3;

public:
    void display()
    {
        get_data1();
        get_data2();
        cout << "The sum of data1 and data2 is: " << data1 + data2 << endl;
    }
};

int main()
{
    derived d1;
    d1.set_data1(4);
    d1.set_data2(5);
    d1.display();
    return 0;
}
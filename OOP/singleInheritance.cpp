#include <iostream>
using namespace std;

class Base // The Base case
{
    int data1; // data1 cannot be Inheritance

public:
    int data2; // This section can be inheritance
    void setdata(void)
    {
        data1 = 10;
        data2 = 20;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};
class Derived : public Base // The Derived case
{
    int data3;

public:
    void process();
    void display();
};
void Derived ::process()
{
    data3 = data2 * getdata1(); // data2 inheritance
}
void Derived ::display()
{
    cout << "The value of data1 is: " << getdata1() << endl;
    cout << "The value of data2 is: " << data2 << endl;
    cout << "The value of data1 * data2 is: " << data3 << endl;
}
int main()
{
    Derived d1;
    d1.setdata();
    d1.process();
    d1.display();
    return 0;
}
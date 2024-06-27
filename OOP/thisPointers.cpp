#include <iostream>
using namespace std;

class Base
{
    int a;

public:
    void setData(int a)
    {
        this->a = a; // this pointers example
    }
    void getData()
    {
        cout << "The value of a is: " << a << endl;
    }
};
int main()
{
    Base a;
    a.setData(5);
    a.getData();
    return 0;
}
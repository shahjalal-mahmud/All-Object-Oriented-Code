#include <iostream>
using namespace std;
class c2; // forward declaration of class c2
class c1
{
    int val1;

public:
    friend void exchange(c1 &, c2 &);
    void indata(int a)
    {
        val1 = a;
    }
    void displaydata()
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;

public:
    friend void exchange(c1 &, c2 &);
    void indata(int a)
    {
        val2 = a;
    }
    void displaydata()
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
};
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(54);
    oc2.indata(78);

    cout << "Before exchange:" << endl;
    cout << "c1: ";
    oc1.displaydata();
    cout << "c2: ";
    oc2.displaydata();

    exchange(oc1, oc2);

    cout << "After exchange:" << endl;
    cout << "c1: ";
    oc1.displaydata();
    cout << "c2: ";
    oc2.displaydata();

    return 0;
}
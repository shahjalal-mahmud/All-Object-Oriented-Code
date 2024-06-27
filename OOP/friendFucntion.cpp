#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int x, int y);
    void getdata();
    friend complex sumcomplex(complex m, complex n);
};
void complex ::setdata(int x, int y)
{
    a = x;
    b = y;
}
complex sumcomplex(complex m, complex n)
{
    complex p;
    p.setdata((m.a + n.a), (m.b + n.b));
    return p;
}
void complex ::getdata()
{
    cout << "The complex number is: " << a << " + " << b << "i" << endl;
}
int main()
{
    complex c1, c2, sum;
    c1.setdata(2, 5);
    c1.getdata();

    c2.setdata(1, 4);
    c2.getdata();

    sum = sumcomplex(c1, c2);
    sum.getdata();
    return 0;
}
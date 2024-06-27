#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int x, int y);
    void setdataBysum(complex m, complex n);
    void getdata();
};
void complex ::setdata(int x, int y)
{
    a = x;
    b = y;
}
void complex ::setdataBysum(complex m, complex n)
{
    a = m.a + n.a;
    b = m.b + n.b;
}
void complex ::getdata()
{
    cout << "The complex number is: " << a << " + " << b << "i" << endl;
}
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 3);
    c1.getdata();
    c2.setdata(2, 4);
    c2.getdata();
    c3.setdataBysum(c1, c2);
    c3.getdata();
    return 0;
}
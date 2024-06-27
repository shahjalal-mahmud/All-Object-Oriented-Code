#include <iostream>
using namespace std;
// sum of two numbers function
int sum(int a, int b)
{
    return a + b;
}
// sum of three numbers function
int sum(int a, int b, int c)
{
    return a + b + c;
}
// volume of a cube
double vol(int a)
{
    return a * a * a;
}
// volume of a cylinder
double vol(int r, int h)
{
    return 3.14 * r * r * h;
}
// volume of a recktengular box
double vol(int a, int b, int c)
{
    return a * b * c;
}
int main()
{
    int a, b, c;
    cout << "Sum of two numbers: " << sum(2, 3) << endl;
    cout << "Sum of three numbers: " << sum(2, 3, 4) << endl;
    cout << "Volume of a cylinder: " << vol(3, 5) << endl;
    cout << "Volume of a cube: " << vol(3) << endl;
    cout << "Volume of a rectengular box: " << vol(3, 5, 7) << endl;
    return 0;
}
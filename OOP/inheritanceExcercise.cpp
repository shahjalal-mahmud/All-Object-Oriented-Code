#include <iostream>
#include <cmath>
using namespace std;

class simpleCalculator
{
protected:
    double a, b;

public:
    void setValue1(double, double);
    void getValue1();
};

void simpleCalculator ::setValue1(double x, double y)
{
    a = x;
    b = y;
}
void simpleCalculator ::getValue1()
{
    cout << "The sum of this values: " << a + b << endl;
    cout << "The sub of this values: " << a - b << endl;
    cout << "The multiple of this values: " << a * b << endl;
    cout << "The div of this values: " << a / b << endl;
}

class scintificCalculator
{
protected:
    double c, d;

public:
    void setValue2(double, double);
    void getValue2();
};

void scintificCalculator ::setValue2(double m, double n)
{
    c = m;
    d = n;
}
void scintificCalculator ::getValue2()
{
    cout << "The square sum of this values: " << (c * c) + (d * d) << endl;
    cout << "The square Root sum of this values: " << sqrt(c) + sqrt(d) << endl;
    cout << "The qube sum of this values: " << (c * c * c) + (d * d * d) << endl;
    cout << "The avarage of this values: " << (c + d) / 2 << endl;
}

class hybridCalculator : public simpleCalculator, public scintificCalculator
{
public:
    void display_result()
    {
        cout << "The result of simple calculator: " << endl;
        getValue1();
        cout << "The result of scintific calculator: " << endl;
        getValue2();
    }
};

int main()
{
    double num1, num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;

    hybridCalculator hc1;
    hc1.setValue1(num1, num2);
    hc1.setValue2(num1, num2);

    hc1.display_result();

    return 0;
}
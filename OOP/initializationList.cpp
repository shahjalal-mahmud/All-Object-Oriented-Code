#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int x, int y) : a(x), b(y) // Initialization Section
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};

int main()
{
    Test Shahjalal(3, 4);
    return 0;
}
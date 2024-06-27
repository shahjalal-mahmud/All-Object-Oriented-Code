#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "enter the a number : ";
    cin >> n;
    cout << factorial(n);
    return 0;
}
/*

factorial(n) = n*fact(n-1)

*/
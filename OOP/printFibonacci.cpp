#include<iostream>
using namespace std;
void printFibonacci(int n){
    int a=0, b=1, nextTerm;
    cout<<"Fibonacci Series: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a<<" + ";
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    printFibonacci(num);
    return 0;
}
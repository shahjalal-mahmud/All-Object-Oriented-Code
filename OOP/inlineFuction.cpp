#include <iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}
float moneyrecived(int currentmoney, float rate=1.06){
    return currentmoney*rate;
}
int main()
{
    /* int a,b;
    cout << "Enter rwo numbers: ";
    cin >> a>>b;
    cout << "The product of a and b is: "<<product(a,b)<<endl; */
    int money;
    cout << "Enter your money: ";
    cin>>money;
    cout<<"If you have "<< money <<"tk than you will get: "<<moneyrecived(money)<<endl;
    cout<<"For VIP: If you have "<< money <<"tk than you will get: "<<moneyrecived(money,1.08)<<endl;

    return 0;
}
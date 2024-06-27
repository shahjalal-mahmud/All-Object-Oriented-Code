#include <iostream>
using namespace std;

class BankDeposit
{
    int principle, year;
    float interestRate, returnAmount;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r)
    {
        principle = p;
        year = y;
        interestRate = r;
        returnAmount = principle;
        for (int i = 0; i < y; i++)
        {
            returnAmount = returnAmount * (1 + interestRate);
        }
    }
    BankDeposit(int p, int y, int r)
    {
        principle = p;
        year = y;
        interestRate = float(r) / 100;
        returnAmount = principle;
        for (int i = 0; i < y; i++)
        {
            returnAmount = returnAmount * (1 + interestRate);
        }
    }
    void displayAmount();
};
void BankDeposit ::displayAmount()
{
    cout << "Your principle amount was: " << principle << endl
         << "Now your return value is: " << returnAmount << endl;
}
int main()
{
    int p, y;
    float r;
    cout << "Enter your Principle amount, years and rate of interest: ";
    cin >> p >> y >> r;
    if (r <= 1)
    {
        BankDeposit bd1(p, y, r); // constructor for decimal interest rate
        bd1.displayAmount();
    }
    else{
        BankDeposit bd1(p, y, int(r)); // constructor for percentage interest rate
        bd1.displayAmount();
    }
    return 0;
}
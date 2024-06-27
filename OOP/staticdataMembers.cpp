#include <iostream>
using namespace std;

class Employe
{
    int id;
    static int count;

public:
    void setData();
    void getData() const;
};

// Define and initialize the static member outside the class
int Employe::count = 0;

void Employe::setData()
{
    cout << "Enter your ID: " << endl;
    cin >> id;
    count++;
}

void Employe::getData() const
{
    cout << "The ID of the employee is " << id << " and the employee number is " << count << endl;
}

int main()
{
    Employe jalal, hafsa, munna;

    jalal.setData();
    jalal.getData();

    hafsa.setData();
    hafsa.getData();

    munna.setData();
    munna.getData();

    return 0;
}

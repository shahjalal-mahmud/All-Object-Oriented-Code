#include <iostream>
using namespace std;

// Also an Example of Abstract Base Class

class Department
{
protected:
    int roll;
    string Name;

public:
    Department(int r, string n) : roll(r), Name(n) {}
    virtual void display() = 0; // Pure virtual function
};

class CSE : public Department
{
    int semester;
    char section;

public:
    CSE(int r, string n, int sem, char sec)
        : Department(r, n), semester(sem), section(sec) {}

    void display()
    {
        cout << "You are in CSE Department." << endl;
        cout << "Your Name is: " << Name << endl;
        cout << "Your ID is: " << roll << endl;
        cout << "Your Section: " << semester << section << endl;
    }
};

class ECSE : public Department
{
    int semester;
    char section;

public:
    ECSE(int r, string n, int sem, char sec)
        : Department(r, n), semester(sem), section(sec) {}
    void display()
    {
        cout << "You are in ECSE Department." << endl;
        cout << "Your Name is: " << Name << endl;
        cout << "Your ID is: " << roll << endl;
        cout << "Your Section: " << semester << section << endl;
    }
};

int main()
{
    string name1 = "Mahmud";
    int Roll_Number1 = 1539;
    int semester1 = 2;
    char section1 = 'J';
    CSE cse_info(Roll_Number1, name1, semester1, section1);

    string name2 = "Munna";
    int Roll_Number2 = 1540;
    int semester2 = 2;
    char section2 = 'J';
    ECSE ecse_info(Roll_Number2, name2, semester2, section2);

    Department *yup[2];
    yup[0] = &cse_info;
    yup[1] = &ecse_info;

    yup[0]->display();
    yup[1]->display();
    return 0;
}

/*
Rules for virtual functions:

    1. They cannot be static
    2. They are accessed by object pointers
    3. Virtual functions can be a friend of another class
    4. A virtual function in the base class might not be used.
    5. If a virtual function is defined in a base class, 
        there is no necessity of redefining it in the derived class
*/
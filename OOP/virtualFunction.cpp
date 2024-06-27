#include <iostream>
using namespace std;

class Baseclass
{
public:
    int data1;
    void virtual display()
    {
        cout << "Displaying Base class Variable " << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int data2;
    void display()
    {
        cout << "Displaying Derived class variable" << endl;
    }
};
int main()
{
    Baseclass *base_class_prt;
    Baseclass base_class_obj;
    Derivedclass derived_class_obj;
    base_class_prt = &derived_class_obj; // pointing base class pointer to derived class object
    base_class_prt->display();

    return 0;
}
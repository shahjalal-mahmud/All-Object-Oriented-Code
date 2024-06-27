#include <iostream>
using namespace std;

class Student // Base class for class test and class Sports
{
protected:
    int roll_Number;

public:
    void set_roll_Number(int r)
    {
        roll_Number = r;
    }
    void print_roll_Number()
    {
        cout << "Your roll number is: " << roll_Number << endl;
    }
};

// An Example of Virtual Base Class

class test : virtual public Student
{
protected:
    double maths, physics;

public:
    void set_Marks(double m1, double m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_Marks()
    {
        cout << "Your obtained mark in Maths: " << maths << endl;
        cout << "Your obtained marks in Physics: " << physics << endl;
    }
};

// An Example of Virtual Base Class

class Sports : virtual public Student
{
protected:
    double score;

public:
    void set_Score(int s)
    {
        score = s;
    }
    void print_Score()
    {
        cout << "Your Score is: " << score << endl;
    }
};

class result : public test, public Sports // Inherited from class test and sports
{
protected:
    double res;

public:
    void Display()
    {
        print_roll_Number();
        print_Marks();
        cout << "Your test's marks are: " << maths + physics << endl;
        print_Score();
        cout << "Your final Score is: " << maths + physics + score << endl;
    }
};

int main()
{
    result shahjalal;
    int r, m1, m2, s;
    cout<<"Input roll numbers and marks in maths and physics: ";
    cin>>r>>m1>>m2>>s;
    shahjalal.set_roll_Number(r);
    shahjalal.set_Marks(m1, m2);
    shahjalal.set_Score(s);
    shahjalal.Display();
    return 0;
}
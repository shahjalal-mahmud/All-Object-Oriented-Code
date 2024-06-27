#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_Number;

public:
    void set_roll_Number(int);
    void get_roll_Number();
};

void Student ::set_roll_Number(int r)
{
    roll_Number = r;
}
void Student ::get_roll_Number()
{
    cout << "The roll number is: " << roll_Number << endl;
}

class Marks : public Student
{
protected:
    float math, physics;

public:
    void set_Marks(float, float);
    void display_Marks(void)
    {
        cout << "Math's marks: " << math << endl;
        cout << "Physics's marks: " << physics << endl;
    }
};

void Marks ::set_Marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}

class Result : public Marks
{
    float percentage;

public:
    void Display_Result()
    {
        get_roll_Number();
        display_Marks();
        cout << "The result is: " << (math + physics) / 2 << "%" << endl;
    }
};
int main()
{
    Result shahjalal;
    shahjalal.set_roll_Number(1539);
    shahjalal.set_Marks(97, 88);
    shahjalal.Display_Result();
    return 0;
}
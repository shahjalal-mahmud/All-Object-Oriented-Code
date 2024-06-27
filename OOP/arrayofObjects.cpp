#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setid();
    void getid();
};
void employee :: setid(){
    salary = 100000;
    cout<<"Enter your ID: "<<endl;
    cin>>id;
}
void employee :: getid(){
    cout<<"The Id of employee is: "<<id<<endl;
}
int main()
{
    employee xyz[5];
    for (int i = 0; i < 5; i++)
    {
        xyz[i].setid();
        xyz[i].getid();
    }
    
    return 0;
}
#include<iostream>
using namespace std;

class student{
    private:
    int id;
    public:
    int section;
    void setdata(int id1);
    void getdata(){
        cout<< "The student ID is:"<<id<<endl;
        cout<<"The student section is: "<<section <<endl;
    }
};
void student :: setdata(int id1){
    id = id1;
}
int main()
{
    student shahjalal;
    shahjalal.section = 2;
    shahjalal.setdata(1539);
    shahjalal.getdata();

    return 0;
}
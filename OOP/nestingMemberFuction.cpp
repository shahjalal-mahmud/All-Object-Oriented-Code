#include <iostream>
using namespace std;

class binary
{
    //private by default
    string s;

public:
    void read();
    void chk_bin();
    void ones();
    void display();
};
void binary ::read()
{
    cout << "Enter a binary Number: " << endl;
    cin >> s;
}
void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary :: ones(){
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
    
}
void binary :: display(){
    cout<<"Displaying your binary number in inverse format:"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}

int main()
{
    binary b;
    b.read();
    b.ones();
    b.display();
    return 0;
}
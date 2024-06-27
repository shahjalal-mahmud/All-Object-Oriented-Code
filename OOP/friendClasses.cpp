#include<iostream>
using namespace std;

// forward declaration
class complex;

class calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sumrealComplex(complex , complex );
    int sumcomplex(complex , complex);
};

class complex{
    int a,b;
    public:
    void setnumbers(int x, int y){
        a=x;
        b=y;
    }
    void printnumbers(){
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
    // friend class example
    friend class calculator;
    // alternative 
    // friend int calculator :: sumrealComplex(complex , complex );
    // friend int calculator :: sumcomplex(complex , complex);
};

int calculator :: sumrealComplex(complex m, complex n){
    return (m.a + n.a);
}
int calculator :: sumcomplex(complex m, complex n){
    return (m.b + n.b);
}

int main()
{
    complex c1,c2;
    c1.setnumbers(2,3);
    c1.printnumbers();

    c2.setnumbers(3,4);
    c2.printnumbers();
    // sum of real part of a complex number
    calculator c3;
    int res = c3.sumrealComplex(c1,c2);
    cout<<"the sum of real part of c1 and c2 is: "<<res<<endl;

    // sum of imaginary number of a complex number
    int resc = c3.sumcomplex(c1,c2);
    cout<<"The sum of imaginary number of c1 and c2 is: "<<resc<<endl;
    return 0;
}
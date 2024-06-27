#include <iostream>
using namespace std;

template <class T1, class T2>
class Section
{
public:
    T1 semester;
    T2 batch;
    Section(T1 s, T2 b) : semester(s), batch(b) {}
    void display()
    {
        cout << "Your Section is: " << semester << batch << endl;
    }
};

int main()
{
    Section<int, char> c1(2, 'J');
    c1.display();
    return 0;
}
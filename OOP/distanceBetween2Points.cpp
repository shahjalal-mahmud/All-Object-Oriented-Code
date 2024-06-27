#include <iostream>
#include <cmath>
using namespace std;

class points
{
    int x, y;

public:
    void setvalue(int a, int b)
    {
        x = a;
        y = b;
    }
    void printvalue()
    {
        cout << "The point is: (" << x << ", " << y << ")" << endl;
    }
    friend double distance(points, points); // Friend function to access private members
};
double distance(points p1, points p2)
{
    int dx = p1.x - p2.x;
    int dy = p1.y - p2.y;
    int result = sqrt(dx * dx + dy * dy);
    return result;
}

int main()
{
    points a;
    a.setvalue(2, 3);

    points b;
    b.setvalue(5, 6);

    a.printvalue();
    b.printvalue();

    cout << "The distance between two points: " << distance(a, b) << endl;

    return 0;
}
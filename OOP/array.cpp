#include <iostream>

using namespace std;

int main()

{

    int arr[] = {10, 20, 30, 40, 50};

    int *ptr;

    ptr = arr;

    cout << "Elements of the array accessed using pointers:" << endl;

    for (int i = 0; i < 5; i++)

    {

        cout << "Element " << i + 1 << ": " << *ptr << endl;

        ptr++;
    }

    return 0;
}

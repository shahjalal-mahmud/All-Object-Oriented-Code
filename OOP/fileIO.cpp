#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "Shahjalal Mahmud";

    // Writing to the file
    ofstream out("File1.txt");
    out << st;
    out.close(); // Always good practice to close the file after writing

    string st1;

    // Reading from the file
    ifstream in("File1.txt");
    getline(in, st1); // Read the entire line into st1
    cout << st1;      // Print the content of the file
    in.close();       

    return 0;
}

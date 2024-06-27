#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Writing something in a file

    ofstream out;
    out.open("File1.txt");
    for (int i = 0; i < 1; i++)
    {
        out << "Munna Sardar " <<"\n"<< endl;
    }
    out.close();

    // Reading those text line that is just created.

    ifstream hin;
    string content;
    hin.open("File1.txt");
    while (hin.eof() == 0)
    {
        getline(hin, content);
        cout << content<<endl;;
    }
    hin.close();

    return 0;
}
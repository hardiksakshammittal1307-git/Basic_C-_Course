#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st;
    ofstream out;
    out.open("sample53.txt");
    out << "Hello!! \n";
    out << "My Name is Hardik Mittal \n";
    out << "This is Sample Text to Check Program \n";
    out.close();
    ifstream in;
    in.open("sample53.txt");
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    return 0;
}
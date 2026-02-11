#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "Hardik Mittal";
    string st2;
    ofstream out("sample-51.txt");
    out << st;
    ifstream in("sample-51b.txt");
    in >> st2;
    cout << st2 << endl;
    getline(in, st2);
    cout << st2 << endl;
    return 0;
}
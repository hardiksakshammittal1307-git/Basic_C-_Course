#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name, read;
    cout << "Enter The Name Which can be Pushed in file: " << endl;
    cin >> name;
    ofstream out("sample52.txt");
    out << name + " is my Name.";
    out.close();
    ifstream in("sample52.txt");
    getline(in, read);
    cout << read << endl;
    in.close();
    return 0;
}
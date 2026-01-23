#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class binary
{

private:
    string s;
    void chk_bin(void);
    void ones_complement(void);

public:
    void read(void){
    cout << "Enter The Binary No." << endl;
    cin >> s;
    }
    void display(void);
};

// void binary::read(void)
// {
//     cout << "Enter The Binary No." << endl;
//     cin >> s;
// }

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Wrong Binary Encoding" << endl;
            exit(0);
        }
    }
}

void binary::ones_complement(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    ones_complement();
    cout << "Displaying Your Binary No." << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    // b.ones_complement();
    b.display();

    return 0;
}
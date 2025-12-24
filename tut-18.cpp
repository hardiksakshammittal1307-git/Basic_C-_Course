#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "the value of a is: " << a << endl;
        cout << "the value of b is: " << b << endl;
        cout << "the value of c is: " << c << endl;
        cout << "the value of d is: " << d << endl;
        cout << "the value of e is: " << e << endl;
    }
};
void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee Hardik;
    // harry.a = 134; -->This will throw error as a is private
    Hardik.d = 65;
    Hardik.e = 57;
    Hardik.setdata(1, 56, 89);
    Hardik.getdata();
    return 0;
}
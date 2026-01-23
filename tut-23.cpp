#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    friend complex sumcomplex(complex o1, complex o2);
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printcomplex(void)
    {
        cout << "the complex is: " << a << "+" << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex a, b, sum;

    a.setdata(2, 4);
    a.printcomplex();

    b.setdata(5, 8);
    b.printcomplex();

    sum = sumcomplex(a, b);
    sum.printcomplex();

    return 0;
}
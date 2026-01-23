#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void complex_add(complex v1, complex v2)
    {
        a = v1.a + v2.a;
        b = v1.b + v2.b;
    }

    void printNumber(void)
    {
        cout << "The complex number is: " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex p, q, r;
    p.setdata(1, 2);
    p.printNumber();

    q.setdata(3, 4);
    q.printNumber();

    r.complex_add(p, q);
    r.printNumber();
    return 0;
}
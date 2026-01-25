#include <iostream>
using namespace std;

// forward declaration
class complx;

class calculator
{
public:
    int sumrealcomplx(complx, complx);
    int sumcompcomplx(complx, complx);
};

class complx
{
    int a, b;
    friend class calculator;
    // friend int calculator::sumrealcomplx(complx, complx);
    // friend int calculator::sumcompcomplx(complx, complx);

public:
    void setnumbr(int x, int y)
    {
        a = x;
        b = y;
    }
    void prtnumbr()
    {
        cout << "the compex is: " << a << "+" << b << "i" << endl;
    }
};

int calculator::sumrealcomplx(complx o1, complx o2)
{
    return (o1.a + o2.a);
}

int calculator::sumcompcomplx(complx o1, complx o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complx o1, o2;
    o1.setnumbr(1, 4);
    o2.setnumbr(5, 7);
    calculator calc;
    int res = calc.sumrealcomplx(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumcompcomplx(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}
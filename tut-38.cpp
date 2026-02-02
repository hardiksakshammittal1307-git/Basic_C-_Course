#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int a, b;

public:
    void set_simplevalue(int x, int y)
    {
        a = x;
        b = y;
    }
    void get_simpleops()
    {
        cout << "Sum: " << a + b << endl;
        cout << "Difference: " << a - b << endl;
        cout << "Product: " << a * b << endl;
        cout << "Division: " << a / b << endl;
    }
};

class ScientificCalculator
{
protected:
    int a, b;

public:
    void set_scivalue(int x, int y)
    {
        a = x;
        b = y;
    }
    void get_sciops()
    {
        cout << "sin(a+b): " << sin(a + b) << endl;
        cout << "cos(a+b): " << cos(a + b) << endl;
        cout << "tan(a+b): " << tan(a + b) << endl;
        cout << "a^b: " << pow(a, b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void setvalues(int x, int y)
    {
        set_simplevalue(x, y);
        set_scivalue(x, y);
    }
    void calcfunc()
    {
        get_simpleops();
        get_sciops();
    }
};

int main()
{
    int x, y;
    cout << "enter first number " << endl;
    cin >> x;
    cout << "enter second number " << endl;
    cin >> y;
    HybridCalculator calc1;
    calc1.setvalues(x, y);
    calc1.calcfunc();
    return 0;
}

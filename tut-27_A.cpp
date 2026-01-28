#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printcomplex()
    {
        cout << "The complex No. is: " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    // implicit call
    complex c1(2, 4);
    c1.printcomplex();
    // explicit call
    complex c2 = complex(5, 8);
    c2.printcomplex();
    return 0;
}
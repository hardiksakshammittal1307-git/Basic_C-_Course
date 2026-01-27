#include <iostream>
using namespace std;
class point
{
    int a, b;

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void DisplayPoint()
    {
        cout << "The Point is: (" << a << "," << b << ")" << endl;
    }
};
int main()
{
    point a(2, 4), b(8, 10);
    a.DisplayPoint();
    b.DisplayPoint();
    return 0;
}
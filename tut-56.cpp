#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Myclass
{
public:
    T1 a;
    T2 b;
    T3 c;
    Myclass(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The Value of a is: " << a << endl;
        cout << "The Value of b is: " << b << endl;
        cout << "The Value of c is: " << c << endl;
    }
};
int main()
{
    Myclass<> X(5, 6.9, 'y');
    X.display();
    cout << endl;
    Myclass<bool, char, double> Y(false, 'F', 78945612);
    Y.display();
    return 0;
}
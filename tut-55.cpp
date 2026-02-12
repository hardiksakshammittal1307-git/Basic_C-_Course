#include <iostream>
using namespace std;
template <class T, class P>
class Myclass
{
public:
    T data1;
    P data2;
    Myclass(T a, P b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};

int main()
{
    Myclass<int, char> x(5, 'C');
    x.display();

    Myclass<bool, float> y(true, 1.54);
    y.display();
    return 0;
}
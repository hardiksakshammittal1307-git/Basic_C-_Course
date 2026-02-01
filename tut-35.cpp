#include <iostream>
using namespace std;
class base
{
protected:
    int a = 100;

private:
    int b;
};
class derived : protected base
{
public:
    void show()
    {
        cout << a << endl;
    }
};
int main()
{
    derived der;
    der.show();
    // cout<<der.a<<endl; Protected members are accessible inside the class and its derived classes, but cannot be accessed directly through objects outside the class.
    return 0;
}
#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // A &setdata(int a)
    void setdata(int a)
    {
        this->a = a;
        // return *this;
    }
    void getdata()
    {
        cout << "value of a is: " << a << endl;
    }
};
int main()
{
    A b;
    // b.setdata(4).getdata();
    b.setdata(4);
    b.getdata();
    return 0;
}
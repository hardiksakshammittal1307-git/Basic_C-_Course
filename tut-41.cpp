#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Base1 class constructor is called!!" << endl;
    }
    void printdatabase1(void)
    {
        cout << "the value of data1 is: " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int b)
    {
        data2 = b;
        cout << "Base2 class constructor is called!!" << endl;
    }
    void printdatabase2(void)
    {
        cout << "the value of data2 is: " << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived Class Constructor is Called !!" << endl;
    }
    void printdataderived(void)
    {
        cout << "The value of derived 1 is: " << derived1 << endl;
        cout << "the value of derived 2 is: " << derived2 << endl;
    }
};
int main()
{
    derived d1(8, 9, 6, 5);
    d1.printdatabase1();
    d1.printdatabase2();
    d1.printdataderived();
    return 0;
}
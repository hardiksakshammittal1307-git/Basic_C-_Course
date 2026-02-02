#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};
class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "the value of base1 is: " << base1int << endl;
        cout << "the value of base2 is: " << base2int << endl;
        cout << "the value of base3 is: " << base3int << endl;
        cout << "the sum of values of bases int are: " << base1int + base2int + base3int << endl;
    }
};
int main()
{
    derived hardik;
    hardik.set_base1int(85);
    hardik.set_base2int(5);
    hardik.set_base3int(10);
    hardik.show();
    return 0;
}
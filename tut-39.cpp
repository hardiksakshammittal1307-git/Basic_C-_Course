#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "Hello, How are you?" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Welcome!! to the Hardik Coding Library." << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1 ::greet();
    }
};

class b1
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};
class b2
{
public:
    void say()
    {
        cout << "Hello everyone!!" << endl;
    }
};
class derives : public b1, public b2
{
public:
    void say()
    {
        cout << "Hello everyone my name is Hardik" << endl;
    }
};
int main()
{

    // ambiguity-1
    // base1 b1;
    // b1.greet();
    // base2 b2;
    // b2.greet();
    // derived d1;
    // d1.greet();

    // ambiguity-2
    derives d2;
    d2.say();

    return 0;
}
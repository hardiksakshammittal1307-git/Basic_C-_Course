#include <iostream>
using namespace std;
class number
{
    int num;

public:
    number()
    { // We create a default constructor so that objects can be created without passing arguments. If we define a parameterized constructor and do not define a default constructor, creating an object without arguments will cause a compile-time error.
        num = 0;
    }
    number(int a)
    {
        num = a;
    }
    void display()
    {
        cout << "The Number is: " << num << endl;
    }
    number(number &obj)
    {
        cout << "The Copy Constructor was Called !!" << endl;
        num = obj.num;
    }
};
int main()
{
    number n1(85), n2, n4;
    n1.display();
    n2.display();
    number n3(n1); // Copy constructor is invoked because a new object is being created and initialized using an existing object.
    n3.display();
    n4 = n2; // assignment, not initialization
    // Copy constructor is NOT invoked because the object already exists; the copy assignment operator is used instead.
    n4.display();
    number n5 = n1; // Copy constructor is invoked because a new object is being created and initialized using an existing object.
    n5.display();
    return 0;
}
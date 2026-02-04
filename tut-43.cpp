#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *p = &a;
    cout << "the address of a is: " << &a << endl;
    cout << "the value at p is: " << *p << endl;

    int *ptr = new int(40);
    cout << "the address of a is: " << ptr << endl;
    cout << "the value at p is: " << *ptr << endl;
    delete ptr;

    int *b = new int[5];
    b[0] = 00;
    b[1] = 10;
    b[2] = 20;
    b[3] = 30;
    b[4] = 40;
    cout << "The value of b[0] is " << b[0] << endl;
    cout << "The value of b[1] is " << b[1] << endl;
    cout << "The value of b[2] is " << b[2] << endl;
    cout << "The value of b[3] is " << b[3] << endl;
    cout << "The value of b[4] is " << b[4] << endl;
    delete[] b;

    return 0;
}
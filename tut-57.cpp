#include <iostream>
using namespace std;

// ================= FUNCTION TEMPLATE =================
// This is a function template that works with two different data types.
// t1 and t2 are template parameters.
// The compiler will generate the correct function based on arguments passed.

template <class t1, class t2>
float function(t1 a, t2 b)
{
    // Calculates average of two numbers of possibly different types
    float avg = (a + b) / 2.0;
    return avg;
}

// ================= FUNCTION OVERLOADING =================
// This is a normal function (not a template).
// It is specifically written for three parameters.
float function(float a, int b, int c)
{
    float avg = (a + b + c) / 2.0;
    return avg;
}

// ================= TEMPLATE FUNCTION (SWAP) =================
// Generic swap function that works with any data type.
// '&' means parameters are passed by reference,
// so original variables will be swapped.

template <class t>
void swapp(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

int main()
{
    // Calling function template (t1=int, t2=double)
    float average = function(5, 8.489);
    cout << "the average of the numbers is: " << average << endl;

    // Calling overloaded normal function
    float average2 = function(6.9561, 7, 3);
    cout << "the average of the numbers is: " << average2 << endl;

    // Using template swap function
    int x = 9;
    int y = 15;

    swapp(x, y);   // template deduces type automatically (t = int)

    cout << "the swapped numbers are: " << x << endl;
    cout << "the swapped numbers are: " << y << endl;

    return 0;
}

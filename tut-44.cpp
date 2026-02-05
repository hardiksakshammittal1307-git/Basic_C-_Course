/*Pointers to Object and Arrow Operator*/
#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void setdata(int i, int j)
    {
        real = i;
        imaginary = j;
    }
    void getdata()
    {
        cout << "the real part of complex is: " << real << endl;
        cout << "the imaginary part of complex is: " << imaginary << endl;
    }
};
int main()
{
    // complex c1;
    // complex *ptr=&c1;
    complex *ptr = new complex;
    // (*ptr).setdata(4,5); /* it is same as*/
    ptr->setdata(4, 6);
    ptr->getdata();

    return 0;
}
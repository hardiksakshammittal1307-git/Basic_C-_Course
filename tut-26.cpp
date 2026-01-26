#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(void);

    void DisplayNum(void){
        cout<<"the complex number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};

    complex::complex(void){
        a=10;
        b=5;
        cout<<"Hello World"<<endl;
    }

int main(){
complex o1,o2,o3;
o1.DisplayNum();
o2.DisplayNum();
o3.DisplayNum();
return 0;
}
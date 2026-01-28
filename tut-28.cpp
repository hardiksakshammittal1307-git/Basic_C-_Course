#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x,int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    complex(){
        a=0;
        b=0;
    }
    void printcomplex(void){
        cout<<"The Complex is: "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
complex c1(4,5),c2(4),c3;
c1.printcomplex();
c2.printcomplex();
c3.printcomplex();
return 0;
}
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
 complex(int x,int y);
 void display();
};
complex::complex(int x,int y=0){
    a=x;
    b=y;
}
void complex::display(){
    cout<<"The Complex is: "<<a<<"+"<<b<<"i"<<endl;
}
int main(){
complex c1(4),c2(5,6);
c1.display();
c2.display();
return 0;
}
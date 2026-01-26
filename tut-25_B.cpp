#include<iostream>
using namespace std;

class B;

class A{
    int value;
    public:
    friend void ExchangeNum(A &,B &);
    void setdata(int x){
        value=x;
    }
    void display(){
        cout<<value<<endl;
    }
};

class B{
    int value;
    public:
    friend void ExchangeNum(A &,B &);
    void setdata(int y){
        value=y;
    }
    void display(){
        cout<<value<<endl;
    }
};

void ExchangeNum(A &a,B &b){
    int temp=a.value;
    a.value=b.value;
    b.value=temp;
}
int main(){
A x;
x.setdata(45);

B y;
y.setdata(54);

ExchangeNum(x,y);
cout<<"value of Class A object x after Changing is: ";
x.display();

cout<<"value of Class B object y after Changing is: ";
y.display();

return 0;
}
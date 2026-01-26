#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
    void value(int a){
        data=a;
    }
    friend void add(X,Y);
};

class Y{
    int data;
    public:
    void value(int b){
        data=b;
    }
        friend void add(X,Y);

};

void add(X o1,Y o2){
    cout<<"the sum of X and Y objects: "<<o1.data+o2.data<<endl;
}

int main(){

    X o1;
    o1.value(98);
    
    Y o2;
    o2.value(2);

    add(o1,o2);
return 0;
}
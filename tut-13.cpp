#include<iostream>
using namespace std;

int sum(int,int);
void g();

int main(){
    int num1,num2;
    cout<<"the first number is: "<<endl;
    cin>>num1;    
    cout<<"the second number is: "<<endl;
    cin>>num2;
    cout<<"the sum is: "<<sum(num1,num2);
    g();
    return 0;   
}

int sum(int a, int b){
    int c=a+b;
    return c;
}

void g(){
    cout<<"\nHello World"<<endl;
}
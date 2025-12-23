#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
     return 1;
    }
    return n*factorial(n-1);
}


int fib(int m){
    if (m<2){
        return 1;
    }
    return fib(m-2)+fib(m-1);
}

int main(){
    int a,s;
    // cout<<"Enter The Number"<<endl;
    // cin>>a;
    // cout<<"The Factorial Of "<<a<<"! is: "<<factorial(a)<<endl;

    cout<<"Enter The Number"<<endl;
    cin>>s;
    cout<<"The Term in Fibonacci Series At Position "<<s<<" is: "<<fib(s)<<endl;
return 0;
}
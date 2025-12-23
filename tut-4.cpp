#include<iostream>
using namespace std;
 
int main(){

    int a=15,b=25;
        cout<< "the value of a+b is: "<<a+b<<endl;
        cout<< "the value of a-b is: "<<a-b<<endl;
        cout<< "the value of a*b is: "<<a*b<<endl;
        cout<< "the value of a/b is: "<<a/b<<endl;
        cout<< "the value of a%b is: "<<a%b<<endl;
        cout<< "the value of a++ is: "<<a++<<endl;
        cout<< "the value of --a is: "<<--a<<endl;
        cout<< "the value of a-- is: "<<a--<<endl;
        cout<< "the value of ++a is: "<<++a<<endl;
        cout<<endl;

        cout<<"the value of a==b is "<<(a==b)<<endl;
        cout<<"the value of a!=b is "<<(a!=b)<<endl;
        cout<<"the value of a<=b is "<<(a<=b)<<endl;
        cout<<"the value of a>=b is "<<(a>=b)<<endl;
        cout<<"the value of a>b is "<<(a>b)<<endl;
        cout<<"the value of a<b is "<<(a<b)<<endl;
        cout<<endl;

        cout<<"the value of ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
        cout<<"the value of ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
        cout<<"the value of (!(a==b)) is "<<(!(a==b))<<endl; 

    return 0;
}
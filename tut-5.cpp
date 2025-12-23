#include<iostream>
using namespace std;

int c=786;

int main(){

    float d=34.4f;
    long double e=34.4l;
    cout<<"the size of 34.4 is: "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is: "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4l is: "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4F is: "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4L is: "<<sizeof(34.4L)<<endl;

    float x=455;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;

    int c=45;
    float b=56.48;
    cout<<"the value of b is: "<<int(b)<<endl;
    cout<<"the value of a is: "<<(float)c<<endl;
    cout<<"the value of c is: "<<c<<endl;
    cout<<"the value of global c is: "<<::c<<endl; 

    cout<<"the value of expression is:"<<c + int(b)<<endl;
    cout<<"the value of expression is:"<<c+(int)b<<endl;
    cout<<"the value of expression is:"<<c+b<<endl;
    cout<<"the value of expression is:"<<x+y<<endl;
    
    return 0;
}
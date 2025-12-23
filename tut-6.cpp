#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
     int a=4,b=56,c=457,d=9856;
    cout<<"the value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"the value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"the value of c with setw is: "<<setw(4)<<c<<endl;
    cout<<"the value of d with setw is: "<<setw(4)<<d<<endl;

    cout<<"the value of a without setw is: "<<a<<endl;
    cout<<"the value of b without setw is: "<<b<<endl;
    cout<<"the value of c without setw is: "<<c<<endl;
    cout<<"the value of d without setw is: "<<d<<endl;
    
    int a=34,b=4;
    int c=((((((a*15)+b)-85)+89)+356.26)+a);
    cout<<c<<endl;

    return 0;
}
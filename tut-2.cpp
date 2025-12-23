#include<iostream>

using namespace std;

bool is_true=true;
int glo =6;
void sum(){
    int a;
    cout<< glo;
}
int main(){

    int glo=78;
    glo =9;
    int a=2, b=3;
    float pi=3.14;
    char HIM='H';
    double deci=3.123456789;

        sum();

    cout<<glo<<is_true;
    cout<<::glo;
    cout<<"\nHello my name is HARDIK.\n"
    <<"Here the value of a is "<<a
    <<"\nHere the value of b is "<<b
    <<"\nThe value of pi is "<<pi
    <<"\nThe value of HIM is "<<HIM
    <<"\nThe value of deci is "<<deci;

    return 0;
}
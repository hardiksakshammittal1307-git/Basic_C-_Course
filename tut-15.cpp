#include<iostream>
using namespace std;

// int product(int a,int b){
//     return a*b;
// }

float moneyreceived(int currentmoney, float factor=1.04){
    return currentmoney*factor;
}

// int strlen(const char *p){

// }

int main(){
    // int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money;
    cin>>money;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyreceived(money)<< " Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyreceived(money, 1.1)<< " Rs after 1 year";
return 0;
}
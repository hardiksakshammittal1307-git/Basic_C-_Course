#include<iostream>
using namespace std;
class BankAccount{
    int principal;
    int years;
    float interestrate;
    float returnvalue;
    public:
    BankAccount(){}
    BankAccount(int p,int y,float r);
    BankAccount(int p,int y,int r);
    void show();
};
BankAccount::BankAccount(int p ,int y,float r){
    principal=p;
    years=y;
    interestrate=r;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+interestrate);
    }
}
BankAccount::BankAccount(int p ,int y,int r){
    principal=p;
    years=y;
    interestrate=float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+interestrate);
    }
}
void BankAccount :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnvalue<<endl;
}

int main(){
BankAccount BD1,BD2;
int p,y,R;
float r;

cout<<"Enter the value of p,y,r"<<endl;
cin>>p>>y>>r;
BD1 = BankAccount(p,y,r);
BD1.show();

cout<<"Enter the value of p,y,R"<<endl;
cin>>p>>y>>R;
BD1 = BankAccount(p,y,R);
BD1.show();

return 0;
}
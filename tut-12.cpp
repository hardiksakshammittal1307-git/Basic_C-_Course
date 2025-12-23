#include<iostream>
using namespace std;

// struct employee 
// {
//     int Eid;
//     char favchar;
//     float salary;
// };

typedef struct employee
{
    int Eid;
    char favchar;
    float salary;
}ep;

union money
{
    int rice;//4
    char car;//1
    float pound;//4
};

int main(){
    
// struct employee hardik;
// hardik.Eid = 1;
// hardik.favchar = 'c';
// hardik.salary = 12000000;
// cout<<"the value is "<<hardik.Eid<<endl;
// cout<<"the value is "<<hardik.favchar<<endl;
// cout<<"the value is "<<hardik.salary<<endl;

ep hardik;
struct employee harry;
struct employee himanshu;
hardik.Eid = 1;
hardik.favchar = 'c';
hardik.salary = 12000000;
cout<<"the value is "<<hardik.Eid<<endl;
cout<<"the value is "<<hardik.favchar<<endl;
cout<<"the value is "<<hardik.salary<<endl;

union money E1;
// E1.rice = 34;
E1.car = 'c';
cout<<E1.car<<endl;

enum meal {breakfast, lunch, dinner};
meal m0 = breakfast;
cout<<(m0==1)<<endl;

return 0;
}
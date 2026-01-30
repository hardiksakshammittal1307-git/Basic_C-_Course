#include<iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"The time when the constructor was called for object number "<<count<<endl;
    }
    ~num(){
        cout<<"The time when the destructor was called for object number "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"we are inside main"<<endl;
    cout<<"Creating first object "<<endl;
    num n1;
    {
        cout<<"Entering block"<<endl;
        cout<<"Others Objects are created"<<endl;
        num n2,n3;
        cout<<"exiting block"<<endl;
    }
    cout<<"back to main"<<endl;
return 0;
}
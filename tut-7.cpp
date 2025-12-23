#include<iostream>
#include<iomanip>

using namespace std;
int main(){

    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    if ((age<18) && (age>0)){
    cout<<"You can't come to the party"<<endl;
    }

    else if (age==18){
        cout<<"You are a kid"<<endl;
    }

    else if (age<1){
        cout<<"you are not yet born"<<endl;
    }

    else{
        cout<<"you can come to the party"<<endl;
    }

    switch (age)
    {
    case 18:
    cout<<"you are 18"<<endl;

    break;

    case 2:
    cout<<"you are 2"<<endl;
    
    break;

    case 22:
    cout<<"you are 22"<<endl;
    
    break;
    
    default:
    cout<<"no more such case"<<endl;
        break;
    }

    cout<<"bye bye"<<endl;

    return 0;
}

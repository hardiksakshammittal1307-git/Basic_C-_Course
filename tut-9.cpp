#include<iostream>
using namespace std;

int main(){

        for (int i = 0; i < 40; i++)
    {
        if(i==5){
        continue;
    }
        else if(i==25){
        break;
    }
        cout<<i<<endl;
    }
        return 0;
}
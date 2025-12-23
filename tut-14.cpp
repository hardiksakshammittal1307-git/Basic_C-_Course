#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}

//this will not swap a and b 
void swap(int a,int b){ //temp  a  b
    int temp=a;         // 4    4  5
    a=b;                // 4    5  5 
    b=temp;             // 4    5  4
}

// Call by reference using pointers
void swappointer(int* a,int* b){
    int temp = *a;
    *a = *b; 
    *b = temp;
}

// Call by reference using C++ reference Variables
void swapreference(int &a,int &b){
    int temp = a;
    a = b; 
    b = temp;
}

// int &swapreference(int &a,int &b){
//     int temp = a;
//     a = b; 
//     b = temp;
//     return b;
// }

int main(){
    int x=4,y=5;
    // cout<<"the sum of a and b is: "<<sum(4,5)<<endl;
    cout<<"the value of x is: "<<x<<endl<<"the value of y is: "<<y<<endl;
    //  swap(x,y);//this will not swap a and b 
    // swappointer(&x,&y);//this will swap a and b using pointer reference
     swapreference(x,y);//this will swap a and b using reference variables
    //  swapreference(x,y) = 766;//this will swap a and b using reference variables
    cout<<"the value of x is: "<<x<<endl<<"the value of y is: "<<y<<endl;
return 0;
}
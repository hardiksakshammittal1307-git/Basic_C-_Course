#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    public:
    // test(int i,int j): a(i),b(j){
    // test(int i,int j): a(i),b(i+j){
    // test(int i,int j): a(i),b(a+j){
    test(int i,int j): b(j),a(i+b){ /*this will throw an error because a was initialized first so it will throw a garbage value */
        cout<<"constructor was executed!!"<<endl;
        cout<<"the value of a is: "<<a<<endl;
        cout<<"the value of b is: "<<b<<endl;
    }
};
int main(){
test t1(4,6);
return 0;
}
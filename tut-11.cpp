#include<iostream>
using namespace std;

    int main(){

    int marks[] = {23, 56, 89, 45};

    int mathMarks[4];
    mathMarks[0] = 25;
    mathMarks[1] = 895;
    mathMarks[2] = 7225;
    mathMarks[3] = 255;

    cout<<"These are mathMarks:"<<endl;
    cout<<mathMarks[0]<<endl;    
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    cout<<"These are marks:"<<endl;
    marks[2] = 45658;

    for (int i = 0; i < 4; i++)
    {
            cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
    }

//     int i = 0 ;
//     while(i<4){
//         cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
//         i++;
//     }
// // 
//     int i = 0;
//     do{
//         cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
//         i++;
//     } while (i<4);
    
    for(int a = 0; a < 4; a++){
    int *p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*p<<endl;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;
    // cout<<*(--p)<<endl;
    // cout<<*(++p)<<endl;
    // cout<<"the value of *p is: "<<*(p+a)<<endl;
    // cout<<"the value of *p is: "<<*(p+a)<<endl;
    // cout<<"the value of *p is: "<<*(p+a)<<endl;
    cout<<"the value of *p is: "<<*(p+a)<<endl;
    }

    return 0;
}
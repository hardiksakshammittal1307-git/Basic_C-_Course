#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; /* it will share memory of count with employee class and have an initial value=0 */

public:
    void setdata(void)
    {
        cout << "enter the id: " << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "the id of employee is: " << id << endl
             << "the number of employee is: " << count << endl;
    }

    static void getcount(void)
    {
        // cout<<"id"<<id; /*it will show an error because it is a non static data member */
        cout << "the value of count is " << count << endl;
    }
};
int employee::count;

int main()
{

    employee hardik, aditya, mukesh;

    hardik.setdata();
    hardik.getdata();
    employee::getcount();

    aditya.setdata();
    aditya.getdata();
    employee::getcount();

    mukesh.setdata();
    mukesh.getdata();
    employee::getcount();

    return 0;
}
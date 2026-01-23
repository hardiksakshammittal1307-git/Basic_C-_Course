#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 100000;
        cout << "enter the id of employee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "the id of the employee is: " << id << endl;
    }
};
int main()
{
    employee insta[4];
    for (int i = 0; i < 4; i++)
    {
        insta[i].setid();
        insta[i].getid();
    }

    return 0;
}
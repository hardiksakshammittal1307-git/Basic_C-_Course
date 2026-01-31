#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    float salary;
    employee(int inpID)
    {
        id = inpID;
        salary = 34.0;
    }
    employee()
    {
        id = 0;
        salary = 0;
    }
};
class programmer : public employee
{
public:
    int languagecode;
    programmer(int inpID, int x)
    {
        id = inpID;
        languagecode = x;
    }
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    employee paras, hardik(1), Aditya(2);
    cout << paras.salary << endl;
    cout << hardik.salary << endl;
    cout << Aditya.salary << endl;
    programmer Skill(101, 9);
    Skill.getdata();
    return 0;
}
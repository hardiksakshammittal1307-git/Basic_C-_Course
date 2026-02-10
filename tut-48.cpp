#include <iostream>
using namespace std;
class BaseClass
{
public:
    int Var_Base;
    virtual void Display()
    {
        cout << "Displaying the Base Class Variable Var_Base " << Var_Base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int Var_Derived=999;
    void Display()
    {
        cout << "Displaying the Base Class Variable Var_Base " << Var_Base << endl;
        cout << "Displaying the Derived Class Variable Var_Derived " << Var_Derived << endl;
    }
};
int main()
{
    BaseClass *Base_Class_Pointer;
    BaseClass Obj_Base;
    DerivedClass Obj_Derived;
    Base_Class_Pointer = &Obj_Derived;
    Base_Class_Pointer->Var_Base = 34;
    Base_Class_Pointer->Display();
    return 0;
}
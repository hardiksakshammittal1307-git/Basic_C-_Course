#include <iostream>
using namespace std;
class BaseClass
{
public:
    int Var_Base;
    void Display()
    {
        cout << "Displaying the Base Class Variable Var_Base " << Var_Base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int Var_Derived;
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
    // cout<<Base_Class_Pointer<<endl;
    // cout<<&Obj_Derived<<endl;
    Base_Class_Pointer->Var_Base = 3400;
    Base_Class_Pointer->Display();
    DerivedClass *Derived_Class_Pointer;
    Derived_Class_Pointer = &Obj_Derived;
    Derived_Class_Pointer->Var_Base = 98900;
    Derived_Class_Pointer->Var_Derived = 989;
    Derived_Class_Pointer->Display();
    return 0;
}
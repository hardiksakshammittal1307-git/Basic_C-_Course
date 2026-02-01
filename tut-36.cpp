#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int a)
    {
        roll_no = a;
    }
    void get_roll_no()
    {
        cout << "Student Roll no. is: " << roll_no << endl;
    }
};
class exam : public student
{
protected:
    float maths, science;

public:
    void set_marks(float a, float b)
    {
        maths = a;
        science = b;
    }
    void get_marks()
    {
        cout << "the marks obtained in maths subject are: " << maths << endl;
        cout << "the marks obtained in science subject are: " << science << endl;
    }
};
class result : public exam
{
    float percentage;

public:
    void set_percentage()
    {
        percentage = (maths + science) / 2;
    }
    void display_result()
    {
        set_percentage();
        get_roll_no();
        get_marks();
        cout << "the percentage obtained is: " << percentage << endl;
    }
};
int main()
{
    result s1;
    s1.set_roll_no(2227);
    s1.set_marks(98.5, 78.9);
    s1.display_result();
    return 0;
}
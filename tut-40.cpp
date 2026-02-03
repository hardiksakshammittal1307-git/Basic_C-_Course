#include <iostream>
using namespace std;
class Student
{
protected:
    int Roll_No;

public:
    void set_Roll_No(int num)
    {
        Roll_No = num;
    }
    void Display_Roll_No()
    {
        cout << "The Roll No. of the student is:" << Roll_No << endl;
    }
};
class Test : virtual public Student
{
protected:
    int Maths, Physics;

public:
    void Set_Marks(int m1, int m2)
    {
        Maths = m1;
        Physics = m2;
    }
    void Display_Marks()
    {
        cout << "The Test Marks are Here:" << endl;
        cout << "The Marks Obtained in Maths subject: " << Maths << endl;
        cout << "The Marks Obtained in Physics Subject: " << Physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    int score;

public:
    void Set_Score(int sc)
    {
        score = sc;
    }
    void Display_Score()
    {
        cout << "The Score of Sports is: " << score << endl;
    }
};
class Result : virtual public Test, virtual public Sports
{
private:
    int total;

public:
    void Display()
    {
        total = Maths + Physics + score;
        Display_Roll_No();
        Display_Marks();
        Display_Score();
        cout << "Your Total Score is: " << total << endl;
    }
};
int main()
{
    Result Hardik;
    Hardik.set_Roll_No(252227);
    Hardik.Set_Marks(98, 75);
    Hardik.Set_Score(99);
    Hardik.Display();
    return 0;
}
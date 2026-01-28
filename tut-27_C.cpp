#include <iostream>
#include<math.h>
using namespace std;
class point
{
    int a, b;

public:
friend void Distance(point p1,point p2);
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void DisplayPoint()
    {
        cout << "The Point is: (" << a << "," << b << ")" << endl;
    }
};
void Distance(point p1,point p2){
    int X=p1.a-p2.a;
    int Y=p1.b-p2.b;
    int Diff=sqrt(pow(X,2)+pow(Y,2));
    cout<<"The Distance Between Points is:"<<Diff<<endl;
}
int main()
{
    point a(2, 4), b(8, 10);
    a.DisplayPoint();
    b.DisplayPoint();
    Distance(a,b);
    return 0;
}
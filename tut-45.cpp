/* Array of Objects Using Pointers in C++ */
#include <iostream>
using namespace std;
class items
{
    int id, price;
    char ItemInitial;

public:
    void setdata(int a, int b, char c)
    {
        id = a;
        price = b;
        ItemInitial = c;
    }
    void getdata()
    {
        cout << "the id of item is: " << id << endl;
        cout << "the price of item is: " << price << "/-" << endl;
        cout << "the initial of item is: '" << ItemInitial << "'" << endl;
    }
};
int main()
{
    int a, b;
    char c;
    int size = 3;
    items *ptr = new items[size];
    items *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item no. " << i + 1 << endl;
        cin >> a >> b >> c;
        ptr->setdata(a, b, c);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "item no. " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}
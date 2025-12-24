#include <iostream>
using namespace std;

class Order
{
private:
    string Oid;
    int Amount;
    string Address;

public:
    string Platform;
    string Discount;
    void setdata(string a1, int b1, string c1);
    void getdata()
    {
        cout << "The Oid is: " << Oid << endl;
        cout << "The Amount is: " << Amount << endl;
        cout << "The Address is: " << Address << endl;
        cout << "The Platform is: " << Platform << endl;
        cout << "The Discount is: " << Discount << endl;
    }
};
void Order ::setdata(string a1, int b1, string c1)
{
    Oid = a1;
    Amount = b1;
    Address = c1;
}

int main()
{
    Order Skincare;
    Skincare.Platform = "Dermaco";
    Skincare.Discount = "30%";
    Skincare.setdata("462-55252625", 1000, "Tower-c Green Meadows Jaipur");
    Skincare.getdata();
    return 0;
}
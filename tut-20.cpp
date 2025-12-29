#include <iostream>
using namespace std;

class shop
{
    int ItemId[100];
    int ItemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void SetPrice(void);
    void DisplayPrice(void);
};

void shop::SetPrice(void)
{
    cout << "Enter Id of your Item No." << counter + 1 << endl;
    cin >> ItemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void shop::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << ItemId[i] << " is: " << ItemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.SetPrice();
    dukaan.SetPrice();
    dukaan.SetPrice();
    dukaan.DisplayPrice();
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    const float itemOnePrice = 20.12f;
    const float itemTwoPrice = 22.94f;
    const float itemThreePrice = 16.35f;
    const float itemFourPrice = 17.95f;
    const float totalPrice = itemOnePrice + itemTwoPrice + itemThreePrice + itemFourPrice;
    const float averagePrice = totalPrice / 4.0f;

    cout << "Price of item 1 is $" << itemOnePrice << "\n";
    cout << "Price of item 2 is $" << itemTwoPrice << "\n";
    cout << "Price of item 3 is $" << itemThreePrice << "\n";
    cout << "Price of item 4 is $" << itemFourPrice << "\n";
    cout << "Total price is $" << totalPrice << "\n";
    cout << "Average price is $" << averagePrice;
}

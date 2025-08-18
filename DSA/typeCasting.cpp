#include <iostream>

using namespace std;

int explicitTypeCasting(double price)
{
    return (int)price;
}

int implicitTypeCasting(double price)
{
    return price;
}

int main()
{
    double price;
    cout << "Enter the price: ";
    cin >> price;
    // this is implicit type casting
    int roundedPrice = price;
    cout << "Rounded Price: " << explicitTypeCasting(price) << endl;

    return 0;
}
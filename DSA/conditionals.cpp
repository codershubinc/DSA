#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    if (a > 0)
    {
        cout << "a is positive" << endl;
    }
    else if (a < 0)
    {
        cout << "a is negative" << endl;
    }
    else
    {
        cout << "a is zero" << endl;
    }

    return 0;
}
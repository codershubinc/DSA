#include <iostream>
using namespace std;

int whileLoop()
{
    int cnt = 0;
    while (cnt < 10000)
    {
        ++cnt;
        cout << "CNT is now : " << cnt << endl;
    }
    return 0;
}

int forLoop()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "CNT in for loop : " << i << endl;
    }
    return 0;
}

int main()
{
    forLoop();
    return 0;
}

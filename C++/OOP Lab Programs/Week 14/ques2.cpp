#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number";
    cin >> a;
    try
    {
        throw(a);
    }
    catch (int j)
    {
        if (j == 0)
        {
            cout << "zero entered";
        }
        else if (j < 0)
        {
            cout << "negative exception";
        }
        else
        {
            cout << "positive exception";
        }
    }
}
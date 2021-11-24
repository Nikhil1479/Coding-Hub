#include <iostream>
using namespace std;
void input()
{
    int n;
    cout << "enter the number";
    cin >> n;
    throw(n);
}
int main()
{
    try
    {
        input();
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
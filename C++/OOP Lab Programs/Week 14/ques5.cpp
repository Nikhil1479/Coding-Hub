#include <iostream>
using namespace std;
void input()
{
    int n;
    cout << "Enter your age : ";
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
        if (j < 1)
        {
            cout << "Invalid age";
        }
        if (j > 100)
        {
            cout << "Invalid age";
        }
    }
}
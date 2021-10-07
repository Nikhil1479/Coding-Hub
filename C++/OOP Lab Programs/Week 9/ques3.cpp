#include <iostream>
using namespace std;

void ChangeHigherValue(int& a, int& b)
{
    if(a > b)
    {
        a = -1;
    }
    else
    if(a < b)
    {
        b = -1;
    }
}

int main()
{
    int a, b;
    cout << "Input for two integers: ";
    cin >> a >> b;

    if(!cin)
    {
        cout << "Error: invalid data\n";
        return 1;
    }

    ChangeHigherValue(a, b);

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    return 0;    
}
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number";
    cin >> num;
    try
    {
        if (num == 0)
        {
            throw(float) num;
        }
        else if (num > 0)
        {
            throw('p');
        }
        else
            throw num;
    }
    catch (float n)
    {
        cout << "zero entered";
    }
    catch (char q)
    {
        cout << "positive exception";
    }
    catch (...)
    {
        cout << "negative exception";
    }
}
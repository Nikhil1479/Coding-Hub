#include <iostream>
using namespace std;

class Rect
{
public:
    int l;
    int b;
    int getarea()
    {
        return l * b;
    }
    int getperi()
    {
        return 2 * (l + b);
    }
};

int main()
{
    Rect rect;
    cin >> rect.l;
    cin >> rect.b;
    int t, x;
    t = rect.getarea();
    cout << t << endl;
    x = rect.getperi();
    cout << x << endl;
    return 0;
}
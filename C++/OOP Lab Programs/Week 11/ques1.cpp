#include <iostream>
using namespace std;
class A
{
    int n;

public:
    void input()
    {
        cout << "Enter number: ";
        cin >> n;
    }
    void output()
    {
        cout << "value of n is: " << n;
    }
    void operator-()
    {
        n = -n;
    }
};
int main()
{
    A obj;
    obj.input();
    -obj;
    obj.output();
    cout << endl;
    return 0;
}
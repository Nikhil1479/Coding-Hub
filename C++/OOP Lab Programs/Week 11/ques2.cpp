#include <iostream>
using namespace std;
class A
{
    int n;

public:
    void input()
    {
        cout << "Enter number:";
        cin >> n;
    }
    void output()
    {
        cout << "Value of n is:  " << n;
    }
    void friend operator-(A &a);
};
void operator-(A &a)
{
    a.n = -a.n;
}
int main()
{
    A obj;
    obj.input();
    -obj;
    obj.output();
    cout << endl;
    return 0;
}
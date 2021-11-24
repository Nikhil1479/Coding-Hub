#include <iostream>
using namespace std;
#define size 5
template <class T1, class T2>
class stack
{
    T1 x;
    T2 y;

public:
    void push()
    {
        cout << "Enter two numbers: ";
        cin >> x >> y;
    }
    void display();
};
template <class T1, class T2>
void stack<T1, T2>::display()
{
    cout << "\n numbers entered by user :\n";
    cout << "\t" << x << "\n\t" << y;
}
int main()
{
    stack<int, int> x;
    x.push();
    x.display();
    return 0;
}
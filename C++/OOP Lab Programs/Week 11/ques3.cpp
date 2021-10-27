#include <iostream>
using namespace std;

class unaryInDec
{
    int a, b;

public:
    void accept()
    {
        cout << "\nEnter Two Numbers : \n";
        cin >> a >> b;
    }
    void operator--()
    {
        a--;
        b--;
    }
    void operator++()
    {
        a++;
        b++;
    }
    void display()
    {
        cout << "\n A = " << a;
        cout << "\n B = " << b;
    }
};
int main()
{
    unaryInDec object;
    object.accept();
    --object;
    cout << "\nAfter Decrementing : ";
    object.display();
    ++object;
    ++object;
    cout << "\nAfter Incrementing : ";
    object.display();
    return 0;
}
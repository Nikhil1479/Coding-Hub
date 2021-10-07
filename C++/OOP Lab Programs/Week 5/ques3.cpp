#include <iostream>
using namespace std;

class addNum
{
private:
    int n1, n2, sum;

public:
    void input()
    {
        cout << "Enter the numbers : ";
        cin >> n1 >> n2;
    }

    friend int add(addNum a);
};

int add(addNum a)
{
    a.sum = a.n1 + a.n2;
    return a.sum;
}
int main(void)
{
    addNum ob;
    ob.input();
    cout << "The sum of the two numbers = " << add(ob);
}
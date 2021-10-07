#include <iostream>
using namespace std;

class simpleInt
{
    int t_yr, p;
    float rate;
    float SI;

public:
    void input()
    {
        cout << "Enter Rate : ";
        cin >> rate;
        cout << "Enter time in years : ";
        cin >> t_yr;
        cout << "Enter principal amount : ";
        cin >> p;
    }

    void calculate()
    {
        SI = (p * rate * t_yr) / 100;
        cout << "Simple Interest : " << SI;
    }
};

int main(void)
{
    simpleInt ob;
    ob.input();
    ob.calculate();
}
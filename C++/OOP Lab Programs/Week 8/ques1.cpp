#include <iostream>
using namespace std;
class number
{
public:
    int a;
    void in()
    {
        cout << "Enter Value-";
        cin >> a;
    }
};
class prime : public number
{
public:
    void pn()
    {
        int i, j = 0;
        for (i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                j++;
            }
        }
        if (j == 0)
        {
            cout << "no. is a prime no." << endl;
        }
        else
        {
            cout << "no. is not a prime no." << endl;
        }
    }
};
class armstrong : public number
{
public:
    void arm()
    {
        int i, sum = 0, b;
        for (i = a; i != 0; i = i / 10)
        {
            b = i % 10;
            sum = sum + (b * b * b);
        }
        if (sum == a)
        {
            cout << " it is a armstrong no." << endl;
        }
        else
        {
            cout << " it is not a armstrong no." << endl;
        }
    }
};
int main()
{
    int ch;
    cout << "1>>to find prime number" << endl;
    cout << "2>>to check armstrong number" << endl;
    prime a;
    armstrong b;
    cout << "enter choice->";
    cin >> ch;
    switch (ch)
    {
    case 1:
        a.in();
        a.pn();
        break;
    case 2:
        b.in();
        b.arm();
        break;
    default:
        cout << "invalid choice" << endl;
    }
    return 0;
}
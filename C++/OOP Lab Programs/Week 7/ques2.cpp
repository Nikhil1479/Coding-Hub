#include <iostream>
using namespace std;
class number
{
public:
    int num1;
    int num2;
    void getdata()
    {
        cout << "Enter First Number: ";
        cin >> num1;
        cout << "Enter Second Number: ";
        cin >> num2;
    }
};
class calculate : public number
{
public:
    void gcd()
    {

        while (num1 != num2)
        {
            if (num1 > num2)
            {
                num1 -= num2;
            }
            else
            {
                num2 -= num1;
            }
        }

        cout << "Calculated GCD is: " << num1 << endl;
    }
};
int main()
{
    calculate obj;
    obj.getdata();
    obj.gcd();
    return 0;
}
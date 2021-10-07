#include <iostream>
using namespace std;

class Number
{
public:
    int n;
    Number()
    {
        cout << "Enter the number to be checked : " << endl;
        cin >> n;
    }
};
class Perfect : public virtual Number
{
public:
    void perfectChecker()
    {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        if (sum == n)
        {
            cout << " The given number is a perfect number " << endl;
        }
        else
        {
            cout << " The given number is not a perfect number " << endl;
        }
    }
};
class Strong : public virtual Number, public Perfect
{
public:
    int factorial(int k)
    {
        int fact = 1;
        for (int i = 1; i <= k; i++)
        {
            fact *= i;
        }
        return fact;
    }
    void strongChecker()
    {
        int n_copy = n;
        int sum = 0;
        while (n_copy != 0)
        {
            int m = n_copy % 10;
            sum += factorial(m);
            n_copy /= 10;
        }
        if (sum == n)
        {
            cout << " The given number is a strong number " << endl;
        }
        else
        {
            cout << " The given number is not a strong number " << endl;
        }
    }
};
int main()
{
    Strong obj;
    obj.perfectChecker();
    obj.strongChecker();
    return 0;
}
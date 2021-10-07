#include <iostream>
using namespace std;

void Armstrong(int a)
{
    int x;
    int sum = 0;
    int temp = a;
    while (a > 0)
    {
        x = a % 10;
        sum = sum + (x * x * x);
        a = a / 10;
    }
    if (temp == sum)
        cout << "Armstrong Number: " << temp << endl;
}
int main()
{
    int i = 100;
    for (i = 100; i++; i < 1000)
    {
        Armstrong(i);
    }
    return 0;
}
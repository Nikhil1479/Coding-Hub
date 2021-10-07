#include <iostream>
using namespace std;
int main()
{
    int i, j, s = 0;
    cout << "Enter the 2 numbers" << endl;
    cin >> i >> j;
    int &a = i;
    int &b = j;
    s = a + b;
    cout << "the sum is =" << s;
}
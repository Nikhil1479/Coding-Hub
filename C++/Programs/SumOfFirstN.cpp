#include <iostream>
using namespace std;

int main()
{
    int sum, n;
    cout << "Enter Value of N:" << endl;
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "Sum of First n Numbers is: " << sum;

    return 0;
}
#include <iostream>
using namespace std;

float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{

    float p, t, r, interest;
    cout << "Enter Principal Amount, Time, Rate: ";
    cin >> p >> t >> r;
    interest = simpleInterest(p, t, r);
    cout << "Interest = " << interest << endl;
    return 0;
}

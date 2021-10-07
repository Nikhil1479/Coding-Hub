#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
struct complex
{
    float r;
    float i;
} s1, s2;

int main()
{
    float a, b;
    cout << "Enter the first complex number with real and imaginary part";
    cin >> s1.r >> s1.i;
    cout << "Enter the first complex number with real and imaginary part:";
    cin >> s2.r >> s2.i;

    a = (s1.r) + (s2.r);
    b = (s1.i) + (s2.i);
    cout << "Addition: " << a << "+" << b << "i" << endl;

    a = (s1.r) - (s2.r);
    b = (s1.i) - (s2.i);
    cout << "Subtraction: " << a << "+" << b << "i" << endl;

    a = ((s1.r)(s2.r)) - ((s1.i)(s2.i));
    b = ((s1.r)(s2.i)) + ((s2.r)(s1.i));
    cout << "Multiplication: " << a << "+" << b << "i" << endl;

    a = (((s1.r)(s2.r)) + ((s1.i)(s2.i))) / (pow(s2.r, 2) + pow(s2.i, 2));
    b = (((s2.r)(s1.i)) - ((s1.r)(s2.i))) / (pow(s2.r, 2) + pow(s2.i, 2));
    cout << "Division: " << a << "+" << b << "i" << endl;

    return 0;
}
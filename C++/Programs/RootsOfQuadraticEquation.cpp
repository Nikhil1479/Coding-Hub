#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    float root1, root2;
    int a, b, c;
    cout << "Enter Value of a: " << endl;
    cin >> a;
    cout << "Enter Value of b: " << endl;
    cin >> b;
    cout << "Enter Value of c" << endl;
    cin >> c;

    root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Roots of Quadratic Equation " << a << "x^2+" << b << "x+" << c << "is: "
         << "Root 1: " << root1 << "\nRoot 2:" << root2;
    return 0;
}
#include <iostream>
#include <stdexcept>
using namespace std;

double Division(double num, double den)
{
    if (den == 0)
    {
        throw runtime_error("Denominator Contains Zero\n");
    }
    return (num / den);
}

int main()
{
    double numerator, denominator, result;
    printf("Enter the numerator : ");
    scanf("%lf", &numerator);
    printf("Enter the denominator : ");
    scanf("%lf", &denominator);
    try
    {
        result = Division(numerator, denominator);
        cout << "The quotient is " << result << endl;
    }
    catch (runtime_error &e)
    {
        cout << "Exception occurred" << endl
             << e.what();
    }
}
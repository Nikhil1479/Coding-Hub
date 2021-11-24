#include <iostream>
using namespace std;

int main()
{
    int eno, esal;
    char ename[20];
    cout << "Enter Employee details: ";
    cin >> eno >> ename >> esal;

    try
    {
        if (esal <= 0)
            throw "Invalid Salary";

        else
        {
            int hra = esal * 15 / 100;
            int ta = esal * 9 / 100;
            int gross = esal + hra * ta;
            cout << "Employee Details " << endl;
            cout << "Employee No:" << eno << endl;
            cout << "Employee Name" << ename << endl;
            cout << "Employee Gross Salary" << gross << endl;
        }
    }
    catch (const char *e)
    {
        cout << e << endl;
    }
    return 0;
}
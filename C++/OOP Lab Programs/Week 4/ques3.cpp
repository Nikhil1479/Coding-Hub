#include <iostream>
#include <string>

using namespace std;

class Employee
{
    int e_no, e_sal;
    string e_name;
    double gross_Sal;

public:
    void input_No()
    {
        cout << "Enter Employee Number: " << endl;
        cin >> e_no;
    }
    void input_Name()
    {
        cout << "Enter Employee Name: " << endl;
        cin >> e_name;
    }
    void input_Sal()
    {
        cout << "Enter Employee Salary: " << endl;
        cin >> e_sal;
    }
    void calculateGrossSal()
    {
        gross_Sal = e_sal + (e_sal * 0.07) + (e_sal * 0.09);
    }
    void displayInfo()
    {
        cout << "Employee Name : " << e_name << endl;
        cout << "Employee Number : " << e_no << endl;
        cout << "Employee Gross Salary : " << gross_Sal << endl;
    }
};

int main()
{
    Employee emp[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Employee " << i + 1 << endl;

        emp[i].input_Name();

        emp[i].input_No();

        emp[i].input_Sal();
        emp[i].calculateGrossSal();
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Employee " << i + 1 << endl;
        emp[i].displayInfo();
    }
    return 0;
}
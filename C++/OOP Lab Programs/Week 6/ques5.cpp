#include <iostream>
using namespace std;

class emp
{
public:
    string ename;
    int eno;
    float esal, gross;

    emp(string n, int no, float sal)
    {
        ename = n;
        eno = no;
        esal = sal;
    }
    void calc()
    {
        gross = esal + 0.15 * esal + 0.17 * esal;
    }
    void display()
    {
        cout << "\nGross Salary : " << gross;
    }
};

int main(void)
{
    string n;
    int no;
    float sal;
    cout << "\nEnter the name, emp no, salary :";
    cin >> n >> no >> sal;
    emp ob(n, no, sal);
    ob.calc();
    ob.display();
}
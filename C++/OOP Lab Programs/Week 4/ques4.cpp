#include <iostream>
using namespace std;
class stud
{
    double roll;
    char name[100];
    int marks[3];

public:
    void in()
    {

        cout << "enter roll-  ";
        cin >> roll;
        cout << "enter name- ";
        cin >> name;
        for (int i = 0; i < 3; i++)
        {
            cout << "enter marks of " << i + 1 << " -";
            cin >> marks[i];
        }
    }
    void avg()
    {
        int a = marks[0] + marks[1] + marks[2];
        float b = a / 3;
        cout << "average-" << b << endl;
    }
    void out()
    {

        cout << "enter roll - " << roll << endl;

        cout << "enter roll - " << name << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << "enter marks of " << i + 1 << " -" << marks[i] << endl;
        }
        avg();
    }
};
int main()
{
    stud a[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "student" << i + 1 << endl;
        a[i].in();
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "student" << i + 1 << endl;
        a[i].out();
    }

    return 0;
}
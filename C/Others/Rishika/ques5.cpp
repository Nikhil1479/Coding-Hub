#include <iostream>
#include <string>
using namespace std;
struct Student
{

    char Name[100];
    int salary;
    int date;
};

int main()
{
    int n;
    cout << "The no of Inputs" << endl;
    cin >> n;
    Student A[5];

    for (int i = 0; i < n; i++)
    {
        cout << "Name : ";
        cin >> A[i].Name;
        cout << "salary : ";
        cin >> A[i].salary;
        cout << "Date : ";
        cin >> A[i].date;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Name : " << A[i].Name << " ";
        cout << "salary : " << A[i].salary << " ";
        cout << "Date : " << A[i].date << " ";
        cout << endl;
    }
}
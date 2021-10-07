#include <iostream>
using namespace std;
class student
{
public:
    string name;
    double roll;
    float marks[3];
    void getdata()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll no: ";
        cin >> roll;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter Marks " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};
class result : public student
{
public:
    void display()
    {
        int i, sum = 0, avg;
        for (i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        avg = sum / 3;
        cout << " Name: " << name << endl;

        cout << " Roll no: " << roll << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << "Enter " << i + 1 << "marks: " << marks[i] << endl;
        }
        if (avg >= 91 && avg <= 100)
        {
            cout << "You have got 'O' grade" << endl;
        }
        else if (avg >= 81 && avg < 91)
        {
            cout << "You have got 'E' grade" << endl;
        }
        else if(avg >= 71 && avg < 81)
        {
            cout << "You have got 'A' grade" << endl;
        }
        else if(avg >= 61 && avg < 71)
        {
            cout << "You have got 'B' grade" << endl;
        }
        else if(avg >= 51 && avg < 61)
    }
};
int main()
{
    result obj;
    obj.getdata();
    obj.display();
    return 0;
}
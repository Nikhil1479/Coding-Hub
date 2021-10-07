#include <iostream>
using namespace std;
class Telephone
{
    string name[100];
    int phone[100];

public:
    int pos = 0;
    void entry(int n)
    {
        cout << "Enter the name :";
        cin >> name[n];
        cout << "Enter the phone number :";
        cin >> phone[12];
    }
    void search(string n)
    {
        int flag = 0;
        for (int i = 0; i < pos; i++)
        {
            if (n == name[i])
            {
                cout << "The searched entry is:" << endl;
                cout << "Name   : " << name[i] << endl;
                cout << "Number : " << phone[i] << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Invalid search element not found 404" << endl;
        }
    }
    void search(int p)
    {
        int flag = 0;
        for (int i = 0; i < pos; i++)
        {
            if (p == phone[i])
            {
                cout << "The searched entry is:" << endl;
                cout << "Name   : " << name[i] << endl;
                cout << "Number : " << phone[i] << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Invalid search element not found 404" << endl;
        }
    }
    void display()
    {
        cout << "The full directory is : " << endl;
        for (int i = 0; i < pos; i++)
        {
            cout << "Name   : " << name[i] << endl;
            cout << "Number : " << phone[i] << "\n"
                 << endl;
        }
    }
};
int main()
{
    Telephone obj;
    cout << "Telephone directory :" << endl;
    int choice;
    do
    {
        cout << "\t-----Directory Menu-------\t " << endl;
        cout << "1. Add entry to directory " << endl;
        cout << "2. Search by name " << endl;
        cout << "3. Search by number " << endl;
        cout << "4. Display directory " << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Your choice->";
        cin >> choice;
        string na;
        switch (choice)
        {
        case 1:
            int n;
            cout << "How many entries do you wish to make:";
            cin >> n;
            for (int i = obj.pos; i < obj.pos + n; i++)
            {
                obj.entry(i);
            }
            obj.pos += n;
            break;
        case 2:
            cout << "Enter the name to be searched :";
            cin >> na;
            obj.search(na);
            break;
        case 3:
            int p;
            cout << "Enter the number to be searched :";
            cin >> p;
            obj.search(p);
            break;
        case 4:
            obj.display();
            break;
        case 5:
            cout << "Exiting....." << endl;
            exit(0);
            break;
        default:
            cout << "Invalid choice !!" << endl;
            break;
        }
    } while (choice != 5);
    return 0;
}
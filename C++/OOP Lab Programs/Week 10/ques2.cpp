#include <iostream>
using namespace std;

class Father
{
public:
    string fname;
    Father()
    {
        cout << "Enter the name of the Father : " << endl;
        cin >> fname;
    }
};
class Son : public Father
{
public:
    string sname;
    Son()
    {
        cout << "Enter the name of the Son : " << endl;
        cin >> sname;
    }
};
class Grandson : public Son
{
public:
    string gname;
    Grandson()
    {
        cout << "Enter the name of the Grandson : " << endl;
        cin >> gname;
    }
    void display()
    {
        string name = gname + " " + sname + " " + fname;
        cout << "The three concatenated names are : " << name;
    }
};
int main()
{
    Grandson obj;
    obj.display();
    return 0;
}
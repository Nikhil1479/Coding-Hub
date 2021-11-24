#include <iostream>
#include <stdexcept>

using namespace std;
class Father
{
public:
    string fname;
    int fage;
    Father()
    {
        cout << "Enter the father's name : ";
        cin >> fname;
        cout << "Enter the father's age : ";
        cin >> fage;
    }
};
class Son
{
public:
    string sname;
    int sage;
    Son()
    {
        cout << "Enter the son's name : ";
        cin >> sname;
        cout << "Enter the son's age : ";
        cin >> sage;
    }
};
class Exception : public runtime_error
{
public:
    Exception()
        : runtime_error("Son age is exceed than father")
    {
    }
};
int main(void)
{
    Father obj1;
    Son obj2;
    try
    {
        if (obj1.fage < obj2.sage)
        {
            throw Exception();
        }
    }
    catch (Exception &e)
    {
        cout << "Exception occurred" << endl
             << e.what();
    }
}
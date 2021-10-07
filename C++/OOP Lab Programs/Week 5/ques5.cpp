#include <iostream>
using namespace std;
class acc
{
    static int a, b;

public:
    static void display()
    {
        cout << "1st no. is->" << a << endl
             << "2nd no. is->" << b;
    }
};

int acc::a = 5;
int acc::b = 6;
int main()
{
    acc a;
    a.display();
    return 0;
}
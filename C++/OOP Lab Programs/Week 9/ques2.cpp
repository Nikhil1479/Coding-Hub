#include <iostream>
using namespace std;
int x = 5; //!Global variable
int main()
{
    cout << "The variable value is : " << x << endl;
    int n = 4; //!local Variable
    if (n == 4)
    {
        x = 10;
        cout << "The variable value is : " << x << endl;
    }
    x = 40;
    cout << "The variable value is : " << x << endl;
}
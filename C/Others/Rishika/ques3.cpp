#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    string t = s1;
    s1 = s2;
    s2 = t;
    cout << s1 << "\n";
    cout << s2 << "\n";
    return 0;
}
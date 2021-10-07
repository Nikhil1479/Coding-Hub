#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;
    int j;
    cout << "string\n ";
    cin >> s;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        while (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == '\0'))
        {
            for (j = i; s[j] != '\0'; ++j)
            {
                s[j] = s[j + 1];
            }
            s[j] = '\0';
        }
    }

    cout << s;
    return 0;
}
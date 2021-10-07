#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    char c;
    cout << "Enter char to find frequency: ";
    cin >> c;
    int freq = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
        {
            freq++;
        }
    }
    cout << "frequency of " << c << " is: " << freq;
    return 0;
}

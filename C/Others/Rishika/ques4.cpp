#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[100];
    cout << "STRING : ";

    cin >> s;
    char temp;
    int i, j, siz = strlen(s);
    for (i = 0; i < siz - 1; i++)
    {
        for (j = i + 1; j < siz; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    cout << "After Sorting : " << s;
    return 0;
}
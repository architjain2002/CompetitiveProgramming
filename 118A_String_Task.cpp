#include <iostream>
#include <string.h>
#include <math.h>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char str[100];
    cin >> str;
    for (int i = 0; i < strlen(str); i++)
    {
        char ch = tolower(str[i]);
        if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'y'))
        {
            continue;
        }
        else
        {
            cout << '.' << ch;
        }
    }

    return 0;
}

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
    char str1[100], str2[100];
    cin >> str1 >> str2;
    bool flag = false;
    for (int i = 0; i < strlen(str1); i++)
    {
        char ch1 = tolower(str1[i]);
        char ch2 = tolower(str2[i]);
        if (ch1 == ch2)
        {
            flag = true;
        }
        else if (ch1 > ch2)
        {
            flag = false;
            cout << 1;
            break;
        }
        else
        {
            flag = false;
            cout << -1;
            break;
        }
    }
    if (flag == true)
    {
        cout << 0;
    }
    return 0;
}

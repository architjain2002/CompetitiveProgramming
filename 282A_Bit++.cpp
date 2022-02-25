#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    char str[20];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] == '+')
            {
                count++;
                break;
            }
            if (str[j] == '-')
            {
                count--;
                break;
            }
        }
    }
    cout << count;
}

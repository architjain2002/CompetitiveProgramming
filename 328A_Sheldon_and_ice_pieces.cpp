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
    char t[10000];
    char seq[201];
    cin >> t >> seq;
    bool flag = true;
    int count = 0;
    for (int i = 0; flag == true; i++)
    {
        if (strlen(t) == i)
        {
            count++;
            i = 0;
            // cout << seq << endl;
        }
        for (int j = 0; j < strlen(seq); j++)
        {
            if ((t[i] == '2') || (t[i] == '5'))
            {
                if ((seq[j] == '2') || (seq[j] == '5'))
                {
                    flag = true;
                    seq[j] = 'x';
                    break;
                }
                else
                {
                    flag = false;
                    continue;
                }
            }
            else if ((t[i] == '6') || (t[i] == '9'))
            {
                if ((seq[j] == '6') || (seq[j] == '9'))
                {
                    flag = true;
                    seq[j] = 'x';
                    break;
                }
                else
                {
                    flag = false;
                    continue;
                }
            }
            else
            {
                if (seq[j] == t[i])
                {
                    flag = true;
                    seq[j] = 'x';
                    break;
                }
                else
                {
                    flag = false;
                    continue;
                }
            }
        }
        if (flag == true)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    cout << count;
    return 0;
}
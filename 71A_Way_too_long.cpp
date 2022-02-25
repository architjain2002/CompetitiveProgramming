#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    char str[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (strlen(str) > 10)
        {
            cout << str[0] << strlen(str) - 2 << str[strlen(str) - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
    return 0;
}

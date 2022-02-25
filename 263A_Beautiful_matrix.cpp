#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int arrofarr[5][5];
    int row_f, col_f;
    int final;
    // int val;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arrofarr[i][j];
            if (arrofarr[i][j] == 1)
            {
                row_f = i + 1;
                col_f = j + 1;
            }
        }
    }
    final = abs(row_f - 3) + abs(col_f - 3);
    cout << final;
    return 0;
}

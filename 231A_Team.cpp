#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n;
    cin >> n;
    int count_1 = 0;
    for (int i = 0; i < n; i++)
    {
        int count_2 = 0;
        for (int j = 0; j < 3; j++)
        {
            int flag;
            cin >> flag;
            if (flag == 1)
            {
                count_2++;
            }
        }
        if (count_2 >= 2)
        {
            count_1++;
        }
    }
    cout << count_1;
    return 0;
}

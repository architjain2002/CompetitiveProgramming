#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n, m, a;
    long long int x, y;
    cin >> n >> m >> a;
    float l = (float)m / a - (int)m / a;
    float b = (float)n / a - (int)n / a;
    if (l > 0)
    {
        x = (int)m / a + 1;
    }
    else
    {
        x = m / a;
    }
    if (b > 0)
    {
        y = (int)n / a + 1;
    }
    else
    {
        y = n / a;
    }
    long long int ans = x * y;
    cout << fixed;
    cout << ans;
    return 0;
}

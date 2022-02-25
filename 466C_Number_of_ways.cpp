#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define ll long long

// driver function
int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, i;
    while (cin >> n)
    {
        ll a[n + 2], sum[n + 2];
        sum[0] = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }
        if (sum[n] % 3 != 0)
        {
            cout << "0\n";
            return 0;
        }
        ll s = sum[n] / 3;
        ll ss = s + s;
        ll cnt = 0, ans = 0;
        for (i = 1; i < n; i++)
        {
            if (sum[i] == ss)
                ans += cnt;
            if (sum[i] == s)
                cnt++;
        }
        cout << ans << endl;
    }
    return 0;
}
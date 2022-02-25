#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int x;
    cin >> x;
    if (x == 2)
    {
        cout << "NO" << endl;
    }
    else if (x % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
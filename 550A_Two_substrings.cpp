#include <iostream>
#include <vector>
#include <string>
using namespace std;

int TwoSubstring(string str, int n);
int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    string str;
    cin >> str;
    TwoSubstring(str, str.length());
    return 0;
}
int TwoSubstring(string str, int n)
{
    int x1 = str.find("AB");
    int x2 = str.find("BA", x1 + 2);
    int y1 = str.find("BA");
    int y2 = str.find("AB", y1 + 2);
    if ((x1 != -1 && x2 != -1) || (y1 != -1 && y2 != -1))
    {
        cout << "YES" << endl;
        return 1;
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
}

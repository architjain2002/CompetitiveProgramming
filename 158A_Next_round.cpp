#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n;
    int k;
    cin >> n;
    cin >> k;
    int *arr;
    arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k - 1] && arr[i] > 0)
        {
            count++;
        }
        if (arr[i] < arr[k - 1])
        {
            break;
        }
    }
    cout << count;

    return 0;
}
#include <iostream>
#include <vector>

int solution(vector<int> &A, int B)
{
    int n = A.size();
    int count = 0;
    int i = 0;
    bool bulbfound = false;
    while (i < n)
    {
        int r = min(i + B - 1, n - 1);
        int l = max(i - B + 1, 0);
        while (r >= l)
        {
            if (A[r] == 1)
            {
                count++;
                i = B + r;
                bulbfound = true;
                break;
            }
            r--;
        }
        if (!bulbfound)
            return -1;

        bulbfound = false;
    }
    return count;
}

using namespace std;

int main(int argc, char const *argv[])
{
    // 0 0 1 0 1 1 0 1

    return 0;
}

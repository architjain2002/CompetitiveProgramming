#include <iostream>
#include <string.h>
#include <math.h>
#include <cctype>
#include <vector>
#include <climits>
using namespace std;

int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    scanf("%d", &n);
    int choice;
    scanf("%d", &choice);
    if ((n > 10) && ((choice != 1) && (choice != 2)))
    {
        printf("WRONG INPUT AND INVALID CHOICE");
        return 0;
    }
    else if ((n > 10) && ((choice == 1) || (choice == 2)))
    {
        printf("WRONG INPUT");
    }
    else
    {
        if (choice == 1)
        {
            int sum = n * (n + 1) / 2;
            printf("SUM:%d", sum);
        }
        else if (choice == 2)
        {
            int prod = 1;
            for (int i = 1; i <= n; i++)
            {
                prod = i * prod;
            }
            printf("PRODUCT:%d", prod);
        }

        else
        {
            printf("INVALID CHOICE");
        }

        return 0;
    }
}

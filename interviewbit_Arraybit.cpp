#include <iostream>
#include <vector>
using namespace std;

// vector<vector<int>> performOps(vector<vector<int>> &A)
// {
//     vector<vector<int>> B;
//     B.resize(A.size());
//     for (int i = 0; i < A.size(); i++)
//     {
//         B[i].resize(A[i].size());
//         for (int j = 0; j < A[i].size(); j++)
//         {
//             B[i][A[i].size() - 1 - j] = A[i][j];
//         }
//     }
//     return B;
// }

int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    vector<vector<int>> A(10, 2);
    cout << A[0][0] << endl;
    // int k = 1;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         A[i][j] = k;
    //         k++;
    //         cout << A[i][j];
    //     }
    // }
    // cout << A[2][1] << endl;
    // vector<vector<int>> B = performOps(A);
    // for (int i = 0; i < B.size(); i++)
    // {
    //     for (int j = 0; j < B[i].size(); j++)
    //         cout << B[i][j] << " ";
    // }

    return 0;
}
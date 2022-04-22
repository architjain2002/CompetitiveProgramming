#include <iostream>
#include <vector>

using namespace std;

int shortestPath(vector<int> &A, vector<int> &B)
{
    int sum = 0;

    for (int i = 0; i < A.size() - 1; i++)
    {

        sum = sum + max(abs(A[i] - A[i + 1]), abs(B[i] - B[i + 1]));
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    vector<int> A = {0, 1, 3};
    vector<int> B = {0, 1, 2};
    int result = shortestPath(A, B);
    cout << result << endl;
    return 0;
}

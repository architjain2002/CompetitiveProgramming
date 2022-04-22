#include <iostream>
using namespace std;

int peakElement(int arr[], int n);
int findPeak(int arr[], int st, int end);

int peakElement(int arr[], int n)
{
    return findPeak(arr, 0, n - 1);
}

int findPeak(int arr[], int st, int end)
{

    if (st == end)
        return st;

    int mid = (st + end) / 2;

    if (arr[mid] < arr[mid + 1])

    {
        return findPeak(arr, mid + 1, end);
    }

    else if (arr[mid] < arr[mid - 1])

    {
        return findPeak(arr, st, mid - 1);
    }

    else
        return mid;
}

int main(int argc, char const *argv[])
{
    int arr[] = {4, 2, 3, 1};
    int n = 4;
    cout << peakElement(arr, n);
    return 0;
}

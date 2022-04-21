#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> vec);

vector<int> bubbleSort(vector<int> vec)
{
    bool flag;
    for (int i = 0; i < vec.size(); i++)
    {
        flag = false;
        for (int j = 0; j < vec.size() - i - 1; j++)
        {

            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
    return vec;
}

int main(int argc, char const *argv[])
{

    return 0;
}

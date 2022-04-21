#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> vec);
void print(vector<int> vec);

void bubbleSort(vector<int> vec)
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
    print(vec);
    // return vec;
}
void print(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}
int main(int argc, char const *argv[])
{
    vector<int> vec = {4,
                       2,
                       3,
                       7,
                       23};

    bubbleSort(vec);
    return 0;
}

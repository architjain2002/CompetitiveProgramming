#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int> vec);
void print(vector<int> vec);

void selectionSort(vector<int> vec)
{
    int min;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[min])
            {
                min = j;
            }
        }
        swap(vec[i], vec[min]);
    }
    print(vec);
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

    selectionSort(vec);

    return 0;
}

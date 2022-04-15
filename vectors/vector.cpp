#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v1;

    for (int i = 0; i < 5; i++)
    {
        int inp;
        cin >> inp;
        v1.push_back(inp); // push_back() method is used to insert elements from the end of the vector.
    }

    for (int i = 0; i < v1.size(); i++) // size() is used to get the lenght of the vector.
    {
        cout << v1[i] << " "; // v1[i]  we can access the elements using [].
    }

    for (auto i = v1.begin(); i != v1.end(); ++i) // begin method returns the pointer to the first element in the vector.
                                                  // end method return the pointer to the last element in the vector.
    {
        cout << *i << " ";
    }

    return 0;
}

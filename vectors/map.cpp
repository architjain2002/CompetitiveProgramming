#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, string> m1;
    m1["r1"] = "hi";
    m1["r2"] = "bye";
    m1["r3"] = "world";
    cout << m1["r1"] << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m.insert({"fun", 1});
    m.emplace("days", 25);
    m.emplace("good_going", 1000);

    for (auto val : m)
    {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}
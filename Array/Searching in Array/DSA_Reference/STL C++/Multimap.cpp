#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<string, int> mp;
    mp.emplace("day", 25);
    mp.emplace("age", 20);
    mp.emplace("age", 20);
    mp.emplace("age", 20);
    mp.emplace("age", 20);

    mp.erase(mp.find("age"));

    for(auto val : mp)
    {
        cout << val.first << " " << val.second << endl;
    }


    return 0;
}
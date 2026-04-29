#include <bits/stdc++.h>
using namespace std;

int main()
{
    // key and value
    map<string, int> m;
    // it will print in sorted order like = A,B,C, and so on.
    //! sort in acending order
    m["date"] = 24;
    m["month"] = 10;
    m["age"] = 20;
    m["year"] = 2024;
    m.insert({"number", 323});
    m.erase("date");

    for (auto val : m)
    {
        cout << val.first << " " << val.second << endl;
    }

    cout << "count of age : " << m.count("age") << endl;

    if (m.find("age") != m.end())
    {
        cout << "Found ";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}
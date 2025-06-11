#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int>::iterator it;

    for (it = arr.begin(); it != arr.end(); it++)
    {
        cout << *(it) << " ";
    }

    // ? you can also iterate like this
    cout << endl;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    // ? Backword
    for (auto it = arr.rbegin(); it != arr.rend(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
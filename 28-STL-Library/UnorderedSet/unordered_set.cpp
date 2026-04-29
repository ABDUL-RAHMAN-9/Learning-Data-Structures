#include <bits/stdc++.h>
using namespace std;

// ! IT doesnot exist the lower bound and upper bond
int main()
{
    unordered_set<int> mp;
    mp.insert(1);
    mp.insert(2);
    mp.insert(3);
    mp.insert(4);
    mp.insert(5);

    mp.insert(1);
    mp.insert(4);


    for (int val : mp)
    {
        cout << val << " "; // it will print in un - sorted order
    }
    cout << endl;

    cout << "size : " << mp.size(); // it will be 7 for all

    return 0;
}
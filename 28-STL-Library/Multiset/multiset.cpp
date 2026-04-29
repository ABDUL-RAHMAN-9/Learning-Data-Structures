#include <bits/stdc++.h>
using namespace std;


// ! IT doesnot exist the lower bound and upper bond
int main()
{
    multiset<int> mp;
    mp.insert(1);
    mp.insert(2);
    mp.insert(3);
    mp.insert(4);
    mp.insert(5);

    mp.insert(1);
    mp.insert(4);


    // now let see the diff in set and multiset

    for(int val : mp)
    {
        cout << val << " "; // it will print in sorted order
    }
    cout << endl;

    cout << "size : " << mp.size(); // it will be 7

    return 0;
}
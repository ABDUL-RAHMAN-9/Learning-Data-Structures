#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // if we try to insert same value it will ignore
    s.insert(1);
    s.insert(1);

    // if we get the size also it will give one the original one not the seocnd same valeus size
    cout << "size :" << s.size() << endl;

    for (int val : s)
    
        cout << val << " ";
    }

    cout << endl;

    // lower bound =  low values in it. // or //! should not be less than key
    // upper bound = higher vlaue than lower value. // ! grether than key

    // example : 1,2,3,4,5,
    // key = 4;
    // output = lower.. = 4
    // output = upper.. = 5 // more than lower

    cout << "lower bond : " << *(s.lower_bound(4)) << endl;
    cout << "Uppere bond : " << *(s.upper_bound(4)) << endl;

    return 0;
}
// C++ Program to show how to use std::lower_bound()
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr1 = {10, 15, 20, 25, 30, 25};
    vector<int> arr2 = {10, 15, 20, 20, 25, 30, 35};
    vector<int> arr3 = {10, 15, 25, 30, 25};

    // it os only use for the 1st occurrence
    int val = 25;

    // using lower_bound() to check if val exists
    // in arr1, single occurrence,
    cout << lower_bound(arr1.begin(), arr1.end(), val) - arr1.begin();
    cout << endl;

    // using lower_bound() to check if val exists
    // in arr2, multiple occurrence ,
    cout << lower_bound(arr2.begin(), arr2.end(), val) - arr2.begin();
    cout << endl;

    // using lower_bound() to check if val exists
    // in arr3, no occurrence ,
    // ( index of next higher)
    cout << lower_bound(arr3.begin(), arr3.end(), val) - arr3.begin();
    cout << endl;
    return 0;
}
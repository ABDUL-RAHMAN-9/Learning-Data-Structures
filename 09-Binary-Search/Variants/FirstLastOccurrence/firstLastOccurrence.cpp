#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 20, 20, 30, 40};

    int x = 20;

    auto lowerBound = lower_bound(nums.begin(), nums.end(), x); // idx  = 1
    auto upperBound = upper_bound(nums.begin(), nums.end(), x); // idx =  4

    // Print the actual values at those positions

    cout << "Lower bound of " << x << " is at index: " << lowerBound - nums.begin() << endl;
    cout << "Upper bound of " << x << " is at index: " << upperBound - nums.begin() << endl;

    if (lowerBound != nums.end())
    {
        cout << "Lower Bound value is: " << *lowerBound << " at index : " << lowerBound - nums.begin() << endl;
    }
    else
    {
        cout << "Lower Bound points to end (not found)" << endl;
    }

    if (upperBound != nums.end())
        cout << "Upper Bound value is: " << *upperBound << " at index : " << upperBound - nums.begin() << endl;
    else
        cout << "Upper Bound points to end (not found)" << endl;

    return 0;
}
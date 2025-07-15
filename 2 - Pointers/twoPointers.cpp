#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
        return 0;

    int i = 0; // slow pointer

    for (int j = 1; j < nums.size(); j++)
    { // fast pointer
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1; // New length of unique elements
}

int main()
{
    vector<int> nums = {1, 2, 3, 3, 2, 4, 5};

    // Step 1: Sort the array to bring duplicates together
    sort(nums.begin(), nums.end());

    // Step 2: Remove duplicates and get the new size
    int newSize = removeDuplicates(nums);

    // Step 3: Print only the unique part of the array
    for (int i = 0; i < newSize; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}

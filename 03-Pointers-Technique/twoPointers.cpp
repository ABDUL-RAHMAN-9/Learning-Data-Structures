// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int removeDuplicates(vector<int> &nums)
// {
//     if (nums.empty())
//         return 0;

//     int i = 0; // slow pointer

//     for (int j = 1; j < nums.size(); j++)
//     { // fast pointer
//         if (nums[j] != nums[i])
//         {
//             i++;
//             nums[i] = nums[j];
//         }
//     }

//     return i + 1; // New length of unique elements
// }

// int main()
// {
//     vector<int> nums = {1, 2, 3, 3, 2, 4, 5};

//     // Step 1: Sort the array to bring duplicates together
//     sort(nums.begin(), nums.end());

//     // Step 2: Remove duplicates and get the new size
//     int newSize = removeDuplicates(nums);

//     // Step 3: Print only the unique part of the array
//     for (int i = 0; i < newSize; i++)
//     {
//         cout << nums[i] << " ";
//     }

//     return 0;
// }

// ! Rearrange Array Elements by Sign
#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> pos; // store all positive numbers
    vector<int> neg; // store all negative numbers
    vector<int> ans; // final rearranged array

    // Separate numbers into positives and negatives
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            pos.push_back(nums[i]);
        }
        else
        {
            neg.push_back(nums[i]);
        }
    }

    int p = 0, q = 0; // counters for pos[] and neg[]
    // Fill ans alternately: pos at even, neg at odd indices
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans.push_back(pos[p++]); // place positive
        }
        else
        {
            ans.push_back(neg[q++]); // place negative
        }
    }

    return ans;
}
void print(vector<int> &nums)
{
    cout << "[";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
        if (i != nums.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    cout << "Before rearranging: ";
    print(nums);

    vector<int> ans = rearrangeArray(nums);

    cout << "After rearranging : ";
    print(ans);

    return 0;
}
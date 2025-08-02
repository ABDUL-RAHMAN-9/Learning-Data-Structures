// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> computePrefixSum(const vector<int> &arr)
// {
//     int n = arr.size();
//     vector<int> prefix(n);
//     prefix[0] = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         prefix[i] = prefix[i - 1] + arr[i];
//     }
//     return prefix;
// }

// int main()
// {
//     vector<int> arr = {2, 4, 1, 3, 6};
//     vector<int> prefix = computePrefixSum(arr);

//     for (int val : prefix)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }


// ! Compute Prefix Sum Array

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> computePrefixSum(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> prefix(n);

//     prefix[0] = nums[0]; // first element is same

//     for (int i = 1; i < n; i++)
//     {
//         prefix[i] = prefix[i - 1] + nums[i];
//     }
//     return prefix;
// }

// void display(const vector<int> &nums)
// {
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i];
//         if (i != nums.size() - 1)
//         {
//             cout << ", ";
//         }
//     }
//     cout << endl;
// }
// int main()
// {
//     vector<int> nums = {1, 2, 3, 4, 5};
//     cout << "Before compute : ";
//     display(nums);

//     nums = computePrefixSum(nums);
//     cout << "After compute : ";
//     display(nums);

//     return 0;
// }
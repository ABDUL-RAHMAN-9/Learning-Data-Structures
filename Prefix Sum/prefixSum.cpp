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
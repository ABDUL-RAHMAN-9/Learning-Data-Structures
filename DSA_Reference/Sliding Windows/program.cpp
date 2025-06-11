// ? Using Nested loop
//! finding maximum sum of a subarray of size k
//* O( n * k)

// #include <bits/stdc++.h>
// using namespace std;
// int maxSum(int arr[], int n , int k)
// {
//     int max_sum = INT_MIN;

//     for (int i = 0; i < n - k + 1; i++)
//     {
//         int curr = 0;
//         for (int j = 0; j < k; j++)
//         {
//             curr = curr + arr[i + j];
//         }
//         max_sum = max(curr, max_sum);
//     }
//     return max_sum;

// }
// int main()
// {
//     int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
//     int k = 4;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Max Sum value: " << maxSum(arr, n, k);

//     return 0;
// }

//! finding maximum sum of a subarray of size k
//? Complexcity : O(log(N))

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> maxSlidingWindow(vector<int> &arr, int k)
// {
//     vector<int> ans;

//     priority_queue<pair<int, int>> heap;

//     for (int i = 0; i < k; i++)
//     {
//         heap.push({arr[i], i});  // value and index

//         ans.push_back(heap.top().first);

//         for (int i = k; i < arr.size(); i++)

//             heap.push({arr[i], i});

//         while (heap.top().second <= i - k)

//             heap.pop();

//         ans.push_back(heap.top().first);
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {2, 3, 7, 9, 5, 1, 6, 4, 3};
//     int k = 3; // window
//     vector<int> res = maxSlidingWindow(arr, k);

//     for (auto answer : res)
//     {
//         cout << answer << " ";
//     }

//     return 0;
// }

// ! Subarrry with given sum

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> arraysum(vector<int> &arr, int sum)
// {
//     int s = 0, e = 0;
//     vector<int> res;
//     int curr = 0;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         curr += arr[i];

//         if (curr >= sum)
//         {
//             e = i;

//             // While current sum is more
//             // remove, starting elements of
//             // current window

//             while (curr > sum && s < e)
//             {
//                 curr -= arr[s];
//                 ++s;
//             }
//             if (curr == sum)
//             {
//                 res.push_back(s + 1);
//                 res.push_back(e + 1);
//                 return res;
//             }
//         }
//     }
//     return {-1};
// }

// int main()
// {

//     vector<int> arr = {15, 2, 4, 8, 9, 5, 10, 23};
//     int sum = 23;

//     vector<int> res = arraysum(arr, sum);

//     cout << "sum is present between : ";
//     for (auto value : res)
//     {
//         cout << value << " ";
//     }

//     return 0;
// }




// ? MAXSUM
// #include <bits/stdc++.h>
// using namespace std;

// int MAXSUM(vector<int> arr, int k, int n)
// {
//     int maxsum = INT_MIN;
//     for (int i = 0; i < n - k + 1; i++)
//     {
//         int currentSum = 0;

//         for (int j = 0; j < k; j++)
//         {

//             currentSum = currentSum + arr[i + j];

//             maxsum = max(maxsum, currentSum);
//         }
//     }
//     return maxsum;
// }

// int main()
// {

//     vector<int> arr = {1, 4, 2, 10, 2, 3, 1, 0, 20};
//     int k = 4;

//     int n = arr.size();

//     cout << "max sum : " << MAXSUM(arr, k, n);

//     return 0;
// }





// ? 26-oct-2024

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int row, column;

//     cout << "enter row : ";
//     cin >> row;
//     cout << "enter column : ";
//     cin >> column;

//     int arr[row][column];

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cout << endl;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ! Search in 2D matrix
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int arr[3][3] = {{1, 2, 3},
//                      {4, 5, 6},
//                      {7, 8, 9}};

//     bool flag = false;
//     int target = 5;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 cout << i << " " << j;
//                 flag = true;
//             }
//         }
//     }
//     cout << endl;

//     if (flag)
//     {
//         cout << "We found it";
//     }
//     else
//     {
//         cout << "NOt found";
//     }

//     return 0;
// }

//? vector Matrix

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<vector<int>> arr = {{1, 2, 3},
//                                {4, 5, 6},
//                                {7, 8, 9}};

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr[i].size(); j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ? Searching in a matrix

// #include <bits/stdc++.h>
// using namespace std;

// bool serachvalue(vector<vector<int>> &arr, int key)
// {
//     int n = arr.size();
//     int m = arr[0].size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == key)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     int key = 8;
//     vector<vector<int>> arr = {{0, 6, 8, 9, 11},
//                                {20, 22, 28, 29, 31},
//                                {36, 38, 50, 61, 63},
//                                {64, 66, 100, 122, 128}};

//     if (serachvalue(arr, key))
//     {
//         cout << "It is presnet ";
//     }
//     else
//     {
//         cout << "Not present";
//     }

//     return 0;
// }

// ? Using bubble sort : sorting the rows in matrix

// #include <bits/stdc++.h>
// using namespace std;

// void SortMatrix(int m[][4], int r, int c)
// {
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             for (int k = 0; k < c - j - 1; k++)
//             {
//                 if (m[i][k] > m[i][k + 1])
//                 {
//                     swap(m[i][k], m[i][k + 1]);
//                 }
//             }
//         }
//     }
// }

// void Display(int m[][4], int r, int c)
// {
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout << m[i][j] << "  ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int m[][4] = {{4, 2, 3, 1},
//                   {7, 6, 8, 5},
//                   {10, 11, 9, 12},
//                   {14, 13, 16, 15}};

//     int r = sizeof(m[0]) / sizeof(m[0][0]);
//     int c = sizeof(m) / sizeof(m[0]);

//     SortMatrix(m, r, c);
//     Display(m, r, c);

//     return 0;
// }

// ? 8.11-24

// ! Subarray
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};

//     cout << "SubArray : " << endl;

//     for (int st = 0; st < n; st++)
//     {
//         for (int end = st; end < n; end++)
//         {
//             for (int i = st; i <= end; i++)
//             {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// !  Max sum

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 6;
//     int arr[] = {-2, 1, 2, 3, 4, 5}; // get only poistive values for maxsum
//     int maxsum = INT8_MIN;

//     for (int st = 0; st < n; st++)
//     {
//         int currsum = 0;
//         for (int end = st; end < n; end++)
//         {
//             currsum += arr[end];
//             maxsum = max(currsum, maxsum);
//         }
//     }
//     cout << "Max Sum :" << maxsum << endl;

//     return 0;
// }

// ? Pair sum

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> pairSum(vector<int> nums, int target)
// {
//     vector<int> ans;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
// }

// int main()
// {
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 13;

//     vector<int> ans = pairSum(nums, target);
//     cout << "ans : " << ans[0] << " and " << ans[1];

//     return 0;
// }

//! Pair sum brute force apprance  : O(N)

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> pairSum(vector<int> nums, int target)
// {
//     vector<int> ans;
//     int n = nums.size();

//     int st = 0, end = n - 1;

//     while (st < end)
//     {
//         int pairsum = nums[st] + nums[end];

//         if (pairsum > target)
//         {
//             end--;
//         }
//         else if (pairsum < target)
//         {
//             st++;
//         }
//         else
//         {
//             ans.push_back(st);
//             ans.push_back(end);
//             return ans;
//         }
//     }
// }

// int main()
// {

//     vector<int> nums = {2, 7, 11, 15};
//     int target = 13;

//     vector<int> ans = pairSum(nums, target);
//     cout << "ans : " << ans[0] << " & " << ans[1] << " idx have the target value " << target;
//     return 0;
// }

// ? 17-nov-2024
// ! Sum in the range
// * exp: 2 + 3 + 4 + 5 + 6 = 20 // Brute force approache
// #include <bits/stdc++.h>
// using namespace std;

// int sumInRange(int x, int y)
// {
//     int ans = 0;
//     for (int i = x; i <= y; i++)
//     {
//         ans = ans + i;
//     }
//     return ans;
// }

// int main()
// {
//     cout << "sum in the range of 2 to 6 is :" << sumInRange(2, 6);

//     return 0;
// }

// * Optimized Approach
// #include <bits/stdc++.h>
// using namespace std;

// int sumInRange(int x, int y)
// {
//     int n = (y - x + 1); // 6 - 2 + 1 = 5
//     int a = x;           // 2
//                 // 5 *(2 * 2 + ( 5 - 1) * 1)) / 2
//                 //
//     int result = (n * (2 * a + (n - 1) * 1)) / 2;
//     return result;
// }

// int main()
// {
//     cout << "Ans :" << sumInRange(2, 6);

//     return 0;
// }


// !
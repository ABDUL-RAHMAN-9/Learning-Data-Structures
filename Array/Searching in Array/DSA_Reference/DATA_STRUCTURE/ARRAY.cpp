// ? Array start form Today / 30 - sept -24

// ! Search in rotated array

// #include <bits/stdc++.h>
// using namespace std;

// int rotatedArray_Problem(vector<int> &arr, int target)
// {
//     int start = 0, end = arr.size() - 1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }

//         if (arr[start] <= arr[mid]) // left iteration
//         {
//             if (arr[start] <= target && target <= arr[mid]) // 4 < 0 && 0 < 7
//             {
//                 end = mid - 1;
//             }
//             else
//             {
//                 start = mid + 1;
//             }
//         }
//         else
//         { // 7 < 0 && 0 < 2
//             if (arr[mid] <= target && target <= arr[end])
//             {
//                 start = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {4, 5, 6, 7, 0, 1, 2}; // idx = 4
//     int target = 0;

//     cout << "Target index : " << rotatedArray_Problem(arr, target);

//     return 0;
// }

// ? Larget value in array // O(n)

// #include <bits/stdc++.h>
// using namespace std;
// largestValueInArray(vector<int> &arr, int n)
// {
//     int largetValue = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] > largetValue)
//         {
//             largetValue = arr[i];
//         }

//     }
//     return largetValue;
// }

// int main()
// {
//     vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
//     int n = arr.size();
//     cout << largestValueInArray(arr, n);

//     return 0;
// }

// //! Seocnd largest vlaue in array
// #include <bits/stdc++.h>
// using namespace std;
// int second_largest_value(vector<int> &arr, int n)
// {
//     int largetValue = arr[0];
//     int seocnd_large = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > largetValue)
//         {
//             largetValue = arr[i];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > seocnd_large && arr[i] != largetValue)
//         {
//             seocnd_large = arr[i];
//         }
//     }
//     return seocnd_large;
// }

// int main()
// {
//     vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
//     int n = arr.size();
//     cout << "second_largest_value: "<< second_largest_value(arr, n);

//         return 0;
// }

// ? Remove duplicate from a sorted array

// ? Two Pointer Three sum
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, target;
//     cout << "Number of array: ";
//     cin >> n;
//     cout << "Give target : ";
//     cin >> target;

//     vector<int> arr(n);

//     for (auto &i : arr)
//     {
//         cin >> i;
//     }
//     bool found = false;

//     sort(arr.begin(), arr.end());

//     for (int i = 0; i < n; i++)
//     {
//         int low = 0;
//         int high = n - 1;
//         while (low < high)
//         {
//             //  target = 24
//             // 12,3,6,9,34,25
//             int current = arr[i] + arr[low] + arr[high];

//             if (current == target)
//             {
//                 found = true;
//             }

//             if (current < target)
//             {
//                 low++;
//             }
//             else
//             {
//                 high--;
//             }
//         }
//     }
//     cout << "answer is : ";
//     if (found)
//     {
//         cout << "True";
//     }
//     else
//     {
//         cout << "false";
//     }

//     return 0;
// }

// ? Reversed array

// #include <bits/stdc++.h>
// using namespace std;
// void func(int arr[], int n, int i)
// {
//     if (i >= n / 2)
//     {
//         return;
//     }
//     swap(arr[i], arr[n - i - 1]);
//     func(arr, n, i + 1);
// }

// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     func(arr, n, 0);
//     cout << "Print Values: ";

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// ! Rotate array by one
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//         int n;
//         cout << "enter n:";
//         cin >> n;

//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         int temp = arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             arr[i - 1] = arr[i];    // 0 = 1 until it become last value
//         }
//         arr[n - 1] = temp;      //then 0th value is in the last value  insert

//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }

//         return 0;
// }

// ? Sort the array adjacent
// #include <bits/stdc++.h>
// using namespace std;

// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void waveSort(int arr[], int n)
// {
//     sort(arr, arr + n);

//     for (int i = 0; i < n - 1; i += 2)
//     {
//         swap(&arr[i], &arr[i + 1]);
//     }
// }

// int main()
// {
//     int arr[] = {8, 6, 3, 1, 4, 7, 5, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "after sort : ";
//     sort(arr, arr + n);

//     print(arr, n);
//     cout << endl;
//     cout << "after Wave sort: ";

//     waveSort(arr, n);
//     print(arr, n);

//     return 0;
// }





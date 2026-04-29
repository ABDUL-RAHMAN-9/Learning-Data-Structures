

// #include <iostream>
// using namespace std;

// // Time Complexity: O(log N)
// // Auxiliary Space : O(1)

// int binarySearch(int arr[], int low, int high, int x)
// {

//     if (high >= low)
//     {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == x)
//         {
//             return mid;
//         }
//         if (arr[mid] > x)
//         {
//             return binarySearch(arr, low, mid - 1, x);
//         }
//         else
//         {
//             return binarySearch(arr, mid + 1, high, x);
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {2, 3, 4, 10, 40};
//     int x = 10;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int result = binarySearch(arr, 0, n - 1, x);

//     if (result != -1)
//     {
//         cout << "Element is present at index: " << result;
//     }
//     else
//     {
//         cout << "Element Not Found";
//     }

//     return 0;
// }
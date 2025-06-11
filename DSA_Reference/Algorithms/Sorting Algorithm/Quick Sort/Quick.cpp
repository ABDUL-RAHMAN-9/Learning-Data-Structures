// ? 30 -spet-24
// ! Quick Sort / O(N ^2)
// #include <bits/stdc++.h>
// using namespace std;

// int partition(vector<int> &arr, int l, int h)
// {
//     int pivot = arr[h]; // last element value
//     int i = l - 1;      // 0 - 1 = -1;

//     for (int j = l; j <= h - 1; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }

//     swap(arr[i + 1], arr[h]); // pivot value on its correct poistion
//     return i + 1;             // return idx
// }

// void quickSort(vector<int> &arr, int l, int h)
// {
//     if (l < h)
//     { // pi is the partition return index of pivot
//         int pi = partition(arr, l, h);
//         // Recursion calls for smaller elements
//         // and greater or equals elements
//         quickSort(arr, l, pi - 1);
//         quickSort(arr, pi + 1, h);
//     }
// }

// void print(vector<int> &arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     vector<int> arr = {8, 5, 7, 6, 2, 1, 3, 4};
//     int n = arr.size();
//     cout << "Quick sort :";
//     int l = 0;
//     int h = n - 1;

//     quickSort(arr, l, h);
//     print(arr,n);

//     return 0;
// }

// ?




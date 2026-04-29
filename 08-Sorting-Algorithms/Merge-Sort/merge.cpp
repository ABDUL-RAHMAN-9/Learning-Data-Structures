// ? Merge Sort /  O(nlogn)

// #include <bits/stdc++.h>
// using namespace std;

// void merge(int arr[], int l, int mid, int r)
// {
//     int n1 = mid - l + 1; // start from 0 ,   to mid !   //    left half  : no. of left sub array /
//     int n2 = r - mid;     // start from mid , to end !//  right half : no. of right sub array

//     // temperotry array a ,b
//     int a[n1]; // store left half
//     int b[n2]; // store right half

//     // Travese from :  left to mid &  mid to right
//     for (int i = 0; i < n1; i++) // left to mid
//     {
//         a[i] = arr[l + i];
//     }
//     for (int i = 0; i < n2; i++) // mid to right
//     {
//         b[i] = arr[mid + 1 + i];
//     }

//     int i = 0;
//     int j = 0;
//     int k = l; // which store values

//     while (i < n1 && j < n2)
//     {
//         if (a[i] < b[j])
//         {
//             arr[k] = a[i];
//             k++, i++;
//         }
//         else
//         {
//             arr[k] = b[j];
//             k++, j++;
//         }
//     }

//     // for last element iteration to store
//     while (i < n1)
//     {
//         arr[k] = a[i];
//         k++, i++;
//     }
//     while (j < n2)
//     {
//         arr[k] = b[j];
//         k++, j++;
//     }
// }

// void mergeSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int mid = (l + r) / 2;
//         mergeSort(arr, l, mid);     // left to mid
//         mergeSort(arr, mid + 1, r); // mid to right

//         merge(arr, l, mid, r);
//     }
// }

// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << "  ";
//     }
// }

// int main()
// {
//     int arr[] = {7, 5, 6, 3, 4, 2, 1, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Using merge sort : ";
//     mergeSort(arr, 0, n - 1);
//     print(arr, n);

//     return 0;
// }
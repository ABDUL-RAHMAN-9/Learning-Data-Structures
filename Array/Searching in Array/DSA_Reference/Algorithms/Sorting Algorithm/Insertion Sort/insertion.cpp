// ! insertion sort /    =       O(n ^ 2)

// #include <bits/stdc++.h>
// using namespace std;
// void insertionSort(int arr[], int n)
// {

//     for (int i = 1; i < n; i++)
//     {
//         int key = arr[i]; // first idx  = 1
//         int j = i - 1;    //  idx = 0
//         while(j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j]; // on 1st idx = 0th idx value
//             j = j - 1;      // 1-1 = 0
//         }
//         arr[j + 1] = key;   // 0th idx = 1idx
//     }
// }

// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[] = {55, 33, 22, 44, 11, 66};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     insertionSort(arr, n);
//     print(arr, n);

//     return 0;
// }



// ? Logic of insetion sort 

// public:
// void insert(int arr[], int i)
// {
//     // code here
//     int j = i;
//     while (j > 0 && arr[j - 1] > arr[j]) // check last idx to 1st value and then swap
//     {
//         int temp = arr[j - 1];
//         arr[j - 1] = arr[j];
//         arr[j] = temp;
//         j--;
//     }
// }

// public:
// // Function to sort the array using insertion sort algorithm.
// void insertionSort(int arr[], int n)
// {
//     // code here
//     for (int i = 0; i < n; i++)
//     {
//         insert(arr, i);
//     }
// }
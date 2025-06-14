// ? Secldction sort  / O(n2) // for to loops

// #include <bits/stdc++.h>
// using namespace std;

// void selectionSort(vector<int> &arr)
// {
//     int n = arr.size();

//     for (int i = 0; i < n - 1; i++)
//     {

//         int min_idx = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[min_idx])           // 25 < 64
//             {
//                 min_idx = j;                     // 64 = j; now minidx have value = 25
//             }
//         }
//         if (min_idx != i) // 25 != 64
//         {
//             swap(arr[i], arr[min_idx]);           // now when it swap 25 and 64
//         }
//     }
// }

// void printvalues(vector<int> &arr)
// {
//     for (int &values : arr)
//     {
//         cout << values << " ";
//     }
// }
// int main()
// {
//     vector<int> arr = {64, 25, 12, 22, 11};
//     cout << "Before sort :";
//     printvalues(arr);
//     cout << endl;
//     cout << "after sort: ";
//     selectionSort(arr);

//     printvalues(arr);

//     return 0;
// }

// !

// #include <bits/stdc++.h>
// using namespace std;

// void selectionsort(vector<int> &arr)
// {
//     int n = arr.size();

//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//         }
//         {
//             swap(arr[i], arr[min]);
//         }
//     }
// }
// void print(vector<int> &arr)
// {
//     for (int &values : arr)
//     {
//         cout << values << " ";
//     }
// }

// int main()
// {

//     vector<int> arr = {5,3,6,4,2,1};
//     selectionsort(arr);
//     print(arr);

//     return 0;
// }
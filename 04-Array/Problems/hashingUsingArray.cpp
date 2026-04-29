// ?  hashing
// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     map<int, int> m;
//     m[8] = 2;
//     cout << m[8] <<endl;

//     return 0;
// }

//! Program to implement direct index mapping with negative values allowed.
// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 1000

// bool hashing[MAX + 1][2];

// bool serachValue(int x)
// {
//     if (x >= 0)
//     {
//         if (hashing[x][0] == 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     x = abs(x);
//     if (hashing[x][1] == 1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// void insert_vlaue(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] >= 0)
//         {
//             hashing[arr[i]][0] = 1;
//         }
//         else
//         {
//             hashing[abs(arr[i])][1] = 1;
//         }
//     }
// }

// int main()
// {
//     int arr[] = {-1, 3, -4, -6, -9, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     insert_vlaue(arr, n);
//     int x = -9;
//     if(serachValue(x) == 1)
//     {
//         cout << "Present";
//     }
//     else{
//         cout << "Not present";
//     }

//     return 0;
// }






// ? Linear Search  O(n)
// #include <bits/stdc++.h>
// using namespace std;

// int Linaersearch(int arr[], int k, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == k)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int k = 6;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int ans = Linaersearch(arr, k, n);
//     if (ans != -1)
//     {
//         cout << "index at : " << ans << endl;
//     }

//     else{
//         cout << "Not found!" << endl;
//     }
//     return 0;
// }

// ?    Sentinel Search algo
// #include <bits/stdc++.h>
// using namespace std;
// void sentinelSearch(int arr[], int n, int key)
// {
//     int last = arr[n - 1];
//     arr[n - 1] = key;
//     int i = 0;
//     while (arr[i] != key)
//     {
//         i++;
//         arr[i - 1] = last;

//     }
//         if ((i < n - 1) || arr[n - 1] == key)
//         {
//             cout << key << " found at index :" << i << endl;
//         }
//         else{
//             cout << "Element not found!";
//         }

// }

// int main()
// {
//     int arr[] = {10, 20, 180, 30, 60, 50, 110, 100, 70};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 110;
//     sentinelSearch(arr, n, key);

//     return 0;
// }

// ? Binary Search algo   / O(log(n))   / Only Sorted Array

// #include <bits/stdc++.h>
// using namespace std;
// int binarySerach(int arr[], int low, int high, int key)
// {
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         if (arr[mid] < key)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 5;
//     int iterator = 0;
//     int low = 0;
//     int high = n - 1;

//     int ans = binarySerach(arr, low, high, key);
//     if (ans == -1)
//     {
//         cout << "key NOt Present" << endl;
//     }
//     else
//     {
//         cout << key << " present in array." << endl;
//     }
//     return 0;
// }

// ? Meta binary Tree
// #include <bits/stdc++.h>
// using namespace std;
// int metasearch(vector<int> arr, int key)
// {
//     int n = arr.size();
//     int log = log2(n - 1) + 1;

//     int pos = 0;
//     for (int i = log; i >= 0;i--)
//     {
//         if(arr[pos] == key)
//         {
//             return pos;
//         }

//         int new_pos = pos | (1 << i);

//         if((new_pos  < n ) && (arr[new_pos] <= key))
//             pos = new_pos;
//     }
//     return ((arr[pos] == key) ? pos : -1);
// }

// int main()
// {
//     vector<int> arr = {-2, 10, 100, 250, 32315};
//     cout << metasearch(arr, 10);

//     return 0;
// }

// ? Ternary Search / Sorted array /* it divide in 3 parts
// ! O(2*log3n)
// #include <bits/stdc++.h>
// using namespace std;

// int ternarySearch(int arr[], int left, int right, int key)
// {
//     if (left <= right)
//     {
//         int mid1, mid2;
//         mid1 = left + (right - left) / 3;
//         mid2 = right - (right - left) / 3;

//         if (arr[mid1] == key)
//         {
//             return mid1;
//         }
//         if (arr[mid2] == key)
//         {
//             return mid2;
//         }
//         //* if key lies betn left and mid1
//         if (key < arr[mid1])
//         {
//             return ternarySearch(arr, left , mid1 -1, key);
//         }
//         //* The key lies in between mid2 and r

//         if (key > arr[mid2])
//         {
//             return ternarySearch(arr, mid2 +1, right , key);
//         }
//         //* The key lies in between mid1 and mid2

//         else
//         {
//             return ternarySearch(arr, mid1 + 1, mid2 - 1, key);
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int right = sizeof(arr) / sizeof(arr[0]);
//     int left = 0;
//     int key = 8;

//     int ans = ternarySearch(arr, left, right - 1, key);
//     if (ans == -1)
//     {
//         cout << "it is not present ";
//     }
//     else
//     {
//         cout << key << " presnt at : " << ans << endl;
//     }
//     return 0;
// }

// ? Ternary Search Another example
// #include <bits/stdc++.h>
// using namespace std;

// int ternarySearch(int arr[], int left, int right, int key)
// {
//     while (left <= right)
//     {

//         int mid1 = left + (right - left) / 3;  // 0 + 10 - 0 / 3 = 3.3
//         int mid2 = right - (right - left) / 3; // 10 - 10 - 0 / 3 = 6.6

//         if (arr[mid1] == key)
//         {
//             return mid1;
//         }

//         if (arr[mid2] == key)
//         {
//             return mid2;
//         }

//         if (key < arr[mid1])
//         {
//             right = mid1 - 1;
//         }
//         else if (key > arr[mid2])
//         {

//             left = mid2 + 1;
//         }
//         else
//         {
//             left = mid1 + 1;
//             right = mid2 - 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int left = 0;
//     int right = n - 1;
//     int key = 6;
//     int ans = ternarySearch(arr, left, right, key);
//     if (ans == -1)
//     {
//         cout << "element is not found in array";
//     }
//     else
//     {
//         cout << key << " found at :" << ans << endl;
//     }

//     return 0;
// }

// ? Jump Search algo /sorted arrays
// ! O(?n)
// #include <bits/stdc++.h>
// using namespace std;
// int jumpSearch(int arr[] , int x, int n )
// {
//     int steps = sqrt(n);

//     int prev = 0;
// while(arr[min(steps , n) -1] < x)
// {
//     prev = steps;
//     steps += sqrt(n);
//     if(prev >= n)
//     {
//         return -1;
//     }

// }
//     while(arr[prev]  < x)
//     {
//         prev++;
//     }
//     if(prev == min(steps , n))
//     {
//         return -1;
//     }

//     while(arr[prev] == x)
//     {
//         return prev;
//     }
// }

//     int
//     main()
// {
//     int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21,
//                  34, 55, 89, 144, 233, 377, 610};
//     int x = 55;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int ans = jumpSearch(arr, x, n);
//     if (ans == -1)
//     {
//         cout << "Not present " << endl;
//     }
//     else
//     {
//         cout << x << " is present at : " << ans << endl;
//     }

//     return 0;
// }

// ? Interpolation search

// #include <bits/stdc++.h>
// using namespace std;

// int interpolationSearch(int arr[], int low, int high, int x)
// {
//     int pos;
//     if (low <= high && x >= arr[low] && x <= arr[high])
//     {
//         pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]));

//         if (arr[pos] == x)
//         {
//             return pos;
//         }
//         if (arr[pos] < x) // If x is larger, x is in right sub array
//         {
//             return interpolationSearch(arr, pos + 1, high, x);
//         }
//         if (arr[pos] > x)
//         {
//             return interpolationSearch(arr, low, pos - 1, x);
//         }
//     }
//     return -1;
// }

// int main()
// {

//     int arr[] = {10, 12, 13, 16, 18, 19, 20, 21,
//                  22, 23, 24, 33, 35, 42, 47};

//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 18;
//     int low = 0;
//     int high = n - 1;
//     int ans = interpolationSearch(arr, low, high, x);

//     if (ans != -1)
//     {
//         cout << x << " is presnt at :" << ans;
//     }
//     else
//     {
//         cout << "not found";
//     }

//     return 0;
// }

// ? Exponential Search / O(log(n))
// #include <bits/stdc++.h>
// using namespace std;

// int binarySearch(int arr[], int, int, int);
// int exponentialSearch(int arr[], int n, int x)

// {
//     if (arr[0] == x)
//     {
//         return 0;
//     }
//     int i = 1;
//     while (i < n && arr[i] <= x)
//     {
//         i = i * 2;
//     }
//     return binarySearch(arr, i / 2, min(i, n - 1), x);
// }
// int binarySearch(int arr[], int left, int right, int x)
// {
//     if (left <= right)
//     {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == x)
//         {
//             return mid;
//         }
//         // If element is smaller than mid, then it
//         // can only be present n left subarray
//         if (arr[mid] > x)
//         {
//             return binarySearch(arr, left, mid - 1, x);
//         }
//         if (arr[mid] < x)
//         {
//             return binarySearch(arr, mid + 1, right, x);
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {2, 3, 4, 10, 40};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 10;

//     int ans = exponentialSearch(arr, n, x);
//     if (ans != -1)
//     {
//         cout << x << " is presnt at :" << ans;
//     }
//     else
//     {
//         cout << "not found";
//     }

//     return 0;
// }

// ? Fibonacci Search

// #include <bits/stdc++.h>
// using namespace std;
// int fibonacciSearch(int arr[], int n, int x)
// {
//     if (n == 0)
//     {
//         return -1;
//     }
//     int fib1 = 0, fib2 = 1, fib3 = fib1 + fib2;
//     while (fib3 < n)
//     {
//         fib1 = fib2;
//         fib2 = fib3;
//         fib3 = fib1 + fib2;
//     }

//     int offset = -1;
//     while (fib3 > 1)
//     {
//         int i = min(offset + fib2, n - 1);
//         if (arr[i] < x)
//         {
//             fib3 = fib2;
//             fib2 = fib1;
//             fib1 = fib3 - fib2;
//             offset = i;
//         }

//         else if(arr[i]  > x)
//         {
//             fib3 = fib1;
//             fib2 = fib2 - fib1;
//             fib1 = fib3 - fib2;
//         }
//         else{
//             return i;
//         }
//     }
//     if(fib2 == 1 && arr[offset + 1] == x)
//     {
//         return offset + 1;

//     }
//     else{
//         return -1;
//     }
// }

// int main()
// {
//     int arr[] = {10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100, 235};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 100;
//     int ans = fibonacciSearch(arr, n, x);
//     if (ans >= 0)
//     {
//         cout << "Found at index: " << ans << endl;
//     }
//     else
//     {
//         cout << "NOt presnet in array!" << endl;
//     }
//     return 0;
// }

// ? Binary Search Short hand/ upper , lower bond
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr = {10, 20, 30, 40, 50, 60};
//     int ans = binary_search(arr.begin(), arr.end(), 40);
//     if (ans != 0)
//     {
//         cout << "it exist" << endl;
//     }
//     else
//     {
//         cout << "it doesnot exist" << endl;
//     }

//     return 0;
// }

// ? Upper bond and lower bond
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr = {10, 20, 30, 40, 50, 60};

//    cout <<  lower_bound(arr.begin(), arr.end(), 40) -arr.begin();
//    cout << endl;
//    cout << upper_bound(arr.begin(), arr.end(), 20) - arr.begin();

//    return 0;
// }

// ! ===============================================================

// ?! Finding the first repaeting element in array
// #include <bits/stdc++.h>
// using namespace std;

// int firstRepeatingElement(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 return i;
//             }
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {10, 5, 3, 4, 3, 5, 6};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int index = firstRepeatingElement(arr, n);
//     if (index != -1)
//     {
//         cout << "First repeting element is :" << arr[index] << endl;
//     }
//     else
//     {
//         cout << "No repeating element found !" << endl;
//     }
//     return 0;
// }

// ? Find the three[3] largest Distinct elements in array
// #include <bits/stdc++.h>
// using namespace std;

// void threeLargestElement(int arr[], int n)
// {
//     if (n < 3)
//     {
//         return;
//     }

//     int first, second, third;
//     first = second = third = INT_MIN; //   minumun values which are in -values
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > first)
//         {
//             third = second;
//             second = first;
//             first = arr[i];
//         }
//         else if (arr[i] > second && arr[i] != first)
//         {
//             third = second;
//             second = arr[i];
//         }
//         else if (arr[i] > third && arr[i] != first && arr[i] != second)
//         {
//             third = arr[i];
//         }
//     }

//     cout << "Largest values are :" << first << " " << second << " " << third;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     threeLargestElement(arr, n);

//     return 0;
// }

// ? Find missing and repating element in array ? / O(N)
// #include <bits/stdc++.h>
// using namespace std;

// void findtwonumber(vector<int> &arr)
// {
//     int n = arr.size();
//     vector<bool> visited(n + 1, false);
//     int repeating = -1;
//     int missing = -1;

//     for (int i = 0; i < n; i++)
//     {
//         if (visited[arr[i]])
//         {
//             repeating = arr[i];
//         }
//         else
//         {
//             visited[arr[i]] = true;
//         }
//     }

//     for (int i = 1; i <= n;i++)
//     {
//         if(!visited[i])
//         {
//             missing = i;
//             break;
//         }
//     }

//         cout << "repating : " << repeating << endl;
//         cout << "missing : " << missing << endl;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 5, 6, 7 , 2}; // missing = 4
//     findtwonumber(arr);

//     return 0;
// }

// ?
// #include <bits/stdc++.h>
// using namespace std;

// void repetedNUmber(vector<int> &arr)
// {
//     int n = arr.size();
//     int s = (n * (n + 1) / 2);                 // 5 * (5 + 1) / 2 = 15
//     int ssq = (n * (n + 1) * (2 * n + 1)) / 6; //  = 55
//     int missing = 0;
//     int repeating = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         s = s - arr[i];
//         ssq = ssq - arr[i] * arr[i];
//     }
//     missing = (s + ssq / s) / 2;
//     repeating = missing - s;

//     cout << "Repeating : " << repeating << endl;
//     cout << "Missing " << missing;
// }
// int main()
// {
//     vector<int> arr = {1, 3, 4, 5, 6};
//     repetedNUmber(arr);

//     return 0;
// }

// ? Count 1st in sorted array

// #include <bits/stdc++.h>
// using namespace std;

// int countOneInArray(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n;i++)
//     {
//         if(arr[i] == 1)
//         {
//             count++;
//         }
//     }
//     return count;
// }
// int main()
// {
//     int arr[] = {1,1,0,1,0,0,0};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int ans = countOneInArray(arr, n);
//     cout << ans << endl;

//     return 0;
// }

// ? Count 1’s in a sorted binary array using Binary search recursively: / (o)log(n)
// #include <bits/stdc++.h>
// using namespace std;

// int countOneInArray(bool arr[], int low, int high) // use bool for array
// {
//     if (low <= high)
//     {
//         int mid = low + (high - low) / 2;

//         if ((arr[mid] == high || arr[mid + 1] == 0) && (arr[mid] == 1))
//         {
//             return mid + 1;
//         }
//         if (arr[mid] == 1)
//         {
//             return countOneInArray(arr, mid + 1, high);
//         }
//         else
//         {
//             return countOneInArray(arr, low, mid - 1);
//         }
//     }
//     return 0;
// }
// int main()
// {
//     bool arr[] = {1, 1, 1, 1, 0, 0, 0};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int low = 0;
//     int high = n - 1;
//     int ans = countOneInArray(arr, low, high);
//     cout << ans << endl;

//     return 0;
// }

// ? Two sum pair close to zero

// #include <bits/stdc++.h>
// using namespace std;

// int minabsSumPair(vector<int> &arr)
// {
//     int res = arr[0] + arr[1];
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; i < n; i++)
//         {
//             int sum = arr[i] + arr[j];
//             if (abs(sum) < abs(res))
//             {
//                 res = sum;
//             }
//         }
//     }
//     return res;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     cout << minabsSumPair(arr);

//     return 0;
// }

// ?
//? 25 - 6 -24
//! 1: Prime or not
// #include <iostream>
// using namespace std;
// int main()
// {
//     int user_enter, i;
//     cout << "Enter the Number: ";
//     cin >> user_enter;
//     for (i = 2; i < user_enter; ++i)
//     {
//         if (user_enter % i == 0)
//         {
//             cout << "Not a prime Number.";
//             break;
//         }
//     }
//     if (i == user_enter)
//     {
//         cout << "Prime.";
//     }

//     return 0;
// }

//! 2 : Inverted Pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     int rows;
//     cout << "Enter the rows:";
//     cin >> rows;
//     for (int i = 1; i <= rows; ++i)
//     {
//         for (int j = 1; j <= rows + 1 - i; ++j)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int rows;
//     cout << "Enter the rows:";
//     cin >> rows;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//             {
//                 cout << " 1";
//             }
//             else
//             {
//                 cout << " 0";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

//  ? Binary Search
// #include <iostream>
// using namespace std;
// int Binary(int arr[], int start, int end, int n, int key)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int mid = (start + end) / 2;

//         if (arr[mid] == key)
//         {
//             return mid;
//         } //
//         else if (arr[mid] > key)
//         {
//             end = end - 1;
//         }
//         else
//         {
//             start = start + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int array[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = 7;
//     int start = 0;
//     int end = n - 1;
//     int key = 6;

//     int result = Binary(array, start, end, n, key);
//     cout << "Element Found at Index :" << result << endl;
//     cout << "Position of Key is :" << result + 1;
//     return 0;
// }

// ? IN Sorting
//* We are seeing the Selection Sort
// #include <iostream>
// using namespace std;
// int SelectionSort(int arr[] , int n )
// {
//     for(int i = 0; i < n - 1 ; i++)
//     {
//         for(int j = i + 1;  j < n; j++)
//         {
//             if(arr[i] > arr[j]) // if the 1st index is > than 2nd index then swap
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }

//         }
//     }
//     return -1;
// }
// void Print(int arr[] , int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main ()
// {
//     int array[] = {7, 3, 4, 5, 6, 2, 1, 8};
//     int n = 8;

//     SelectionSort(array, n);
//     cout << "Using Selection Sort :";
//     Print(array, n);
//     return 0;
// }

// ? Bubble Sort
// #include <iostream>
// using namespace std;
// int BubbleSort(int arr[] , int n)
// {
//     int count = 1;
//     while(count < n)
//     {
//         for (int i = 0; i < n - count; i++)
//         {
//             if(arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i + 1];
//                 arr[i + 1] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//         count++;
//     }
// }
// void Print(int arr[] , int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[] = {9, 7, 5, 3, 2, 1};
//     int n = 6;
//     BubbleSort(arr, n);
//     cout << "Using Bubble Sort:";
//     Print(arr, n);

//     return 0;
// }

// ? Insertion Sort

// #include <iostream>
// using namespace std;
// void InsertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {  // 1
//         int current = arr[i];
//         int j = i - 1;  // 0
//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }
// }
// void Print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[] = {5, 3, 6, 4, 2, 1};
//     int n = 6;
//     InsertionSort(arr, n);
//     Print(arr, n);

//     return 0;
// }

//? Divide and Conquer in the Merge Sort
// #include <iostream>
// using namespace std;
// void Merge(int arr[], int l, int mid, int h)
// {
//     int n1 = mid - l + 1; // 4
//     int n2 = h - mid;     // 3
//     int a[n1];
//     int b[n2]; // temp arrays

//     for (int i = 0; i < n1; i++)
//     {
//         a[i] = arr[l + i]; // here we store l to mid
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         b[i] = arr[mid + 1 + i]; // and her mid + 1  to end
//     }

//     int i = 0;
//     int j = 0;
//     int k = l;
//     while (i < n1 && j < n2)
//     { // !Checking one by one
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

//     while (i < n1)
//     {
//         arr[k] = a[i]; // here we store the merge array
//         k++, i++;
//     }
//     while (i < n2)
//     {
//         arr[k] = a[i];
//         k++, j++;
//     }
// }

// void MergeSort(int arr[], int l, int h)
// {
//     if (l < h)
//     {
//         int mid = (l + h) / 2;
//         MergeSort(arr, 0, mid);
//         MergeSort(arr, mid + 1, h);
//         Merge(arr, l, mid, h);
//     }
// }

// void Print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[] = {7, 6, 2, 3, 1, 5, 4};
//     int n = 6;
//     int l = 0;
//     int h = n - 1;
//     cout << "Before Merge: ";
//     Print(arr, n);
//     cout << endl;

//     MergeSort(arr, l, h);
//     cout << "After Merge: ";
//     Print(arr, n);

//     return 0;
// }

// ? Sub Array
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number:";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int count = 0;
//     cout << "Printing Sub Array:" << endl;

//     for (int i = 0; i < n; i++)
//     {
//         count = 0;
//         for (int j = i; j < n; j++)
//         {
//             count += arr[j];

//             cout << count << " ";

//         }
//     }

//     return 0;
// }

// ?

// ? Start form here today day : 07-sept-2024
// ! Traversal
// * Q: 1

// #include <iostream>
// using namespace std;
// int main()
// {

//     return 0;
// }

// !Un-sortend array
// ! Seraching in array
// * Q: 2
// ? Time complexcity : 0(N)
// #include <iostream>
// using namespace std;
// int SearchElement(int arr[], int n, int key)
// {
//     for (int i = 0; i <= n; ++i)
//     {
//         if (arr[i] == key)
//         {
//             return i;

//             return -1;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {7, 6, 5, 4, 3, 2, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 7;
//     int find = SearchElement(arr, n, key);
//     if (find == -1)
//     {
//         cout << "Element not found !";
//     }
//     else
//     {
//         cout << "Element Found at index : " << find << endl;
//     }

//     return 0;
// }

// * Q 3

// * 1. Insert at the end:
// !Un-sortend array
// #include <iostream>
// using namespace std;
// int InsertAtTheEnd(int arr[], int n, int key, int capacity)
// {
//     if (n >= capacity)

//         return n;

//     arr[n] = key;
//     return (n + 1);
// }
// int main()
// {
//     // We must need to give array size some greather n. for insert at end.
//     int array[20] = {6, 5, 4, 3, 2, 7, 1, 5};
//     int key = 24;
//     int capacity = sizeof(array) / sizeof(array[0]);
//     int n = 8;

//     cout << "Before Insert: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;

//     n = InsertAtTheEnd(array, n, key, capacity);

//     cout << "After Insert : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }

//     return 0;
// }

// ? 2. Insert at any position
// * O(N)
// !Un-sortend array
// #include <iostream>
// using namespace std;
// void insertAtAnyPosition(int arr[], int n, int x, int pos)
// {
//     // 5-1 = 4 , 4>= 2  ,4--
//     for (int i = n - 1; i >= pos; i--)

//         arr[i + 1] = arr[i];

//     arr[pos] = x;
// }
// int main()
// {
//     int arr[10] = {1, 8, 3, 4, 5, 6};
//     int n = 6;
//     int x = 20;
//     int pos = 2;

//     cout << " Before inserting :";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     insertAtAnyPosition(arr, n, x, pos);
//     n++;
//     cout << "After inserting : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// ? Delete Operation:
// * O (1)
// !Un-sortend array
// #include <iostream>
// using namespace std;
// int FindElement(int arr[], int n, int key);
// int DeleteElement(int arr[], int n, int key)
// {
//     int pos = FindElement(arr, n, key);

//     if (pos == -1)
//     {
//         return n;
//     }
//     for (int i = pos; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];

//     }
//     return n - 1;
// }
// int FindElement(int arr[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {4, 2, 3, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 3;

//     cout << "Before deleting the element :";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     n = DeleteElement(arr, n, key);
//     cout << "After deleting the element : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// ? NOw in Sorted array - we are proforming such operation

// #include <iostream>
// using namespace std;

// int BinarySearch(int arr[], int low, int high, int key)
// {
//     if (high < low)
//     {
//         return -1;
//     }
//     int mid = (low + high) / 2;
//     if (key == arr[mid])
//     {
//         return mid;
//     }
//     if (key > arr[mid])
//     {
//          return BinarySearch(arr, mid + 1, high, key);
//     }
//     return BinarySearch(arr, low, mid - 1, key);
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 7;
//     cout << "Index of Key value is : " << BinarySearch(arr, 0, n - 1, key);

//     return 0;
// }

// ! 14-sept-24
// * Linear search
// #include <iostream>
// using namespace std;
// int LinearSerach(int arr[], int n, int find)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == find)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int find = 5;
//     cout << "Index at :" << LinearSerach(arr, n, find);

//     return 0;
// }

//? ChangeValue

// #include <iostream>
// using namespace std;
// int ChangeValue(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = 2 * arr[i];
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int val = ChangeValue(arr, n);
//     cout << "Elemets by changeing values:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// ! Reverse an array using +  Two pointer approache
// #include <iostream>
// using namespace std;
// int ReverseArray(int arr[], int n)
// {
//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int arr[] = {5, 4, 3, 2, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     ReverseArray(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// ! 1 using INT16_MAX : smallest value in array
// #include <iostream>
// using namespace std;
// int main()
// {
//     // *  INT16_MAX = largest value
//     int arr[] = {5, 3, 7, 6, 5, -2, 4, 11, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int smallest = INT16_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//         }
//     }

//     cout << "Smallest value is : " << smallest << endl;
//     return 0;
// }

// ! 1 using min : smallest value in array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {5, 3, 7, 6, 5, -2, 4, 11, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int smallest = INT16_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         // using min : it give you smallest value.
//         smallest = min(arr[i], smallest);
//     }
//     cout << "smallest value using min :" << smallest << endl;

//     return 0;
// }

// ! Largest value : using INTMIN and MAX
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {5, 3, 7, 6, 5, -2, 4, 11, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     // INT16_MIN : smallest value
//     int largest = INT16_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         largest = max(arr[i], largest);
//     }
//     cout << "largest value : " << largest << endl;

//     return 0;
// }

// * Largest and smallest values
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {5, 3, 7, 6, 5, -2, 4, 11, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int smallest = INT16_MAX;
//     int largest = INT16_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         smallest = min(arr[i], smallest); // min : smallest value
//         largest = max(arr[i], largest);   // max : largest value
//     }

//     cout << "Smallest value  :" << smallest << endl;
//     cout << "Largest value  :" << largest << endl;

//         return 0;
// }

//! Swap min ans max number in array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {5, 3, 7, 6, 5, -2, 4, 11, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int smallest = INT16_MAX;
//     int largest = INT16_MIN;

//     for (int i = 0; i < n; i++)
//     {

//         if (arr[i] < smallest &&  arr[i] < largest)
//         {
//             smallest = min(arr[i], smallest);
//             largest = max(arr[i], largest);
//         }
//     }
//     cout << "smlleset: " << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "largest: " << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vec;
//     for (int i = 0; i < 5; i++)
//     {
//         int n;
//         cout << "Enter Num :";
//         cin >> n;

//         vec.push_back(n);
//     }

//     cout << "Displaying the values :" << endl;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i] << endl;
//     }
//     return 0;
// }


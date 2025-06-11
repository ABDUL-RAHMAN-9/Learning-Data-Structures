// #include <iostream>
// using namespace std;

// int findElement(int arr[], int n, int key);
// int deleteElement(int arr[], int n, int key)
// {

//     int position = findElement(arr, n, key);
//     if (position == -1)
//     {
//         cout << "Element not found";
//         return n;
//     }
//     // first go to that position and then skip that poistion in that.
//     for (int i = position; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     return n - 1;
// }

// int findElement(int arr[], int n, int key)
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
//     int arr[] = {10, 20, 30, 100, 40, 50};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int i, key = 100;

//     cout << "Array before deletion\n";
//     for (i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     // Function call
//     n = deleteElement(arr, n, key);

//     cout << "\n\nArray after deletion\n";
//     for (i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }
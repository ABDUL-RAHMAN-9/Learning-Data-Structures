

// !Monotonic Increasing Stack

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     int arr[] = {2, 1, 5, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     stack<int> s;

//     for (int i = 0; i < n; i++)
//     {
//         while (!s.empty() && s.top() > arr[i])
//         {
//             s.pop();
//         }
//         s.push(arr[i]); // <-- push the current index
//     }
//     while (!s.empty())
//     {
//         cout << arr[s.top()] << " ";
//         s.pop();
//     }
//     return 0;
// }

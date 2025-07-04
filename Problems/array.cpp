//! reverse array using swap
// #include <iostream>
// #include <vector>
// using namespace std;
// void display(vector<int> &vec)
// {
//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// void reverseArray(vector<int> &vec)
// {
//     int start = 0, end = vec.size() - 1;
//     while (start < end)
//     {
//         swap(vec[start], vec[end]);
//         start++;
//         end--;
//     }
// }

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     cout << "Original vector: ";
//     display(vec);

//     reverseArray(vec);
//     cout << "Sorted vector: ";
//     display(vec);

//     return 0;
// }

// ! Prefix Sum in array

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> findPrefixSum(vector<int> &arr)
{
    int n = arr.size();
    vector<int> prefixSum(n);

    prefixSum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    return prefixSum;
}

int main()
{
    vector<int> arr = {10, 20, 10, 5, 15};

    cout << "before: ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    vector<int> prefixSum = findPrefixSum(arr);
    cout << endl;
    cout << "After: ";
    for (auto i : prefixSum)
    {
        cout << i << " ";
    }

    return 0;
}



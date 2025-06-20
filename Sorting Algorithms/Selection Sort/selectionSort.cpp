// #include <iostream>
// #include <vector>
// using namespace std;

// // * Time Complexity: O(n2) ,as there are two nested loops:
// void selectionSort(vector<int> &vec)
// {
//     int n = vec.size();

//     for (int i = 0; i < n; i++)
//     {
//         // Assume the current position holds
//         // the minimum element
//         int min_index = i;

//         // Iterate through the unsorted portion
//         // to find the actual minimum
//         for (int j = i + 1; j < n; j++)
//         {
//             if (vec[j] < vec[min_index])
//             {
//                 // Update min_idx if a smaller
//                 // element is found
//                 min_index = j;
//             }
//         }
//         // Move minimum element to its
//         // correct position
//         swap(vec[i], vec[min_index]);
//     }
// }
// void display(vector<int> &vec)
// {
//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int> vec = {64, 25, 12, 22, 11};

//     cout << "Original array: ";
//     display(vec);

//     cout << "Sorted array: ";

//     selectionSort(vec);
//     display(vec);

//     return 0;
// }

// ! Practice
#include <iostream>
#include <vector>
using namespace std;

// * Time Complexity: O(n2) ,as there are two nested loops:
void selectionSort(vector<int> &vec)
{
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        int smallIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (vec[j] < vec[smallIdx])
            {
                smallIdx = j;
            }
        }
        swap(vec[i], vec[smallIdx]);
    }
}
void display(vector<int> &vec)
{
    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    display(vec);

    cout << "Sorted array: ";

    selectionSort(vec);
    display(vec);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
// * Worst case: O(n2), If the list is in reverse order

void display(vector<int> &vec)
{
    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}

void insertionSort(vector<int> &vec)
{
    int n = vec.size();
    for (int i = 1; i < n; i++)
    {
        int key = vec[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
       greater than key, to one position ahead
       of their current position */

        while (j >= 0 && vec[j] > key) // if ture then
        {
            vec[j + 1] = vec[j]; // 1 -> 0 = value
            j = j - 1;
        }
        vec[j + 1] = key;
    }
}

int main()
{
    vector<int> vec = {12, 11, 13, 5, 6};

    cout << "Original array: ";
    display(vec);

    cout << "Sorted array: ";

    insertionSort(vec);
    display(vec);

    return 0;
}
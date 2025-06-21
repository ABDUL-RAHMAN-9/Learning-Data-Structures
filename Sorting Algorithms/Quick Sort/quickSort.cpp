#include <iostream>
#include <vector>
using namespace std;

//? Time Complexity:- O(n log n)

void display(vector<int> &arr)
{
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}

int partition(vector<int> &arr, int st, int end)
{
    int pivot = arr[end]; // pivot is now last index
    int idx = st - 1;
    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    // get the pivit on their index
    swap(arr[end], arr[idx]);
    return idx;
}
void quickSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pivitIdx = partition(arr, st, end);
        quickSort(arr, st, pivitIdx - 1);  // left half
        quickSort(arr, pivitIdx + 1, end); // right half
    }
}

int main()
{
    vector<int> arr = {2, 3, 1, 5, 6, 4};

    cout << "Original array: ";
    display(arr);

    cout << "Sorted array: ";
    // calling
    quickSort(arr, 0, arr.size() - 1);
    display(arr);

    return 0;
}
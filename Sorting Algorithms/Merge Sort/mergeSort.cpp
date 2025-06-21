#include <iostream>
#include <vector>
using namespace std;

// ? Time Complexity:- O(n log n)

void display(vector<int> &arr)
{
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}
void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    // push remiaining elements
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + st] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        mergeSort(arr, st, mid);      // right half
        mergeSort(arr, mid + 1, end); // left half
        merge(arr, st, mid, end);
    }
}

int main()
{
    vector<int> arr = {2, 3, 1, 5, 6, 4};

    cout << "Original array: ";
    display(arr);

    cout << "Sorted array: ";
    mergeSort(arr, 0, arr.size() - 1);
    display(arr);

    return 0;
}
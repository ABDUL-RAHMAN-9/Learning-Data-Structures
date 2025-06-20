#include <iostream>
#include <vector>
using namespace std;

// *

void display(vector<int> &vec)
{
    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}

void mergeSort(vector<int> &vec)
{
}

int main()
{
    vector<int> vec = {12, 11, 13, 5, 6, 4};

    cout << "Original array: ";
    display(vec);

    cout << "Sorted array: ";

    mergeSort(vec);
    display(vec);

    return 0;
}
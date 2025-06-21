//! reverse array using swap
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &vec)
{
    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}

void reverseArray(vector<int> &vec)
{
    int start = 0, end = vec.size() - 1;
    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Original vector: ";
    display(vec);

    reverseArray(vec);
    cout << "Sorted vector: ";
    display(vec);

    return 0;
}
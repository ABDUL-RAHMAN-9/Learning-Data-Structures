// ! Date : 19-june-2025

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {4, 2, 5, 1, 3};
    int n = vec.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }

    for (auto val : vec)
    {
        cout << val << " ";
    }

    return 0;
}

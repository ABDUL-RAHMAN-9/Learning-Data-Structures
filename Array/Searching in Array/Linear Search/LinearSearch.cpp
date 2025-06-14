// ! it only use in Sorted Array
#include <iostream>
#include <vector>
using namespace std;

int serach(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 4, 10, 40};
    int x = 10;
    int ans = serach(arr, x);
    if (ans)
    {
        cout << "Index on " << ans;
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}
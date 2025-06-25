#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int val = st; val <= end; val++)
            {
                cout << arr[val];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
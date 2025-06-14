

//! For array sort bluild in function  = arr( arr + n)
// ?                                 name( name staring point + ending point)

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     // formula : arr(arr + n);

//     int arr[] = {3, 2, 5, 1, 4};

//     sort(arr, arr + 5);

//     cout << "sorted manner : ";

//     for (int val : arr)
//     {
//         cout << val << " ";
//     }
//     return 0;
// }

// ? for Vector =

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> vec = {5, 3, 4, 1, 2};

//     sort(vec.begin(), vec.end());

//     cout << "for vector sort : ";
//     for (int val : vec)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

// ! For decending order sort we use formula = arr(arr + n , greater <int>());

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> vec = {5, 3, 4, 1, 2};

//     sort(vec.begin(), vec.end() , greater<int> ());

//     cout << "Descending order : ";
//     for (int val : vec)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

// ! for pair

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//      // sorting accure accouding to first key values
//     vector<pair<int, int>> vec = {{2, 1}, {5, 1}, {4, 2}, {6, 3}};

//     sort(vec.begin(), vec.end());

//     for(auto val : vec)
//     {
//         cout << val.first << " " << val.second << endl;
//     }

//     return 0;
// }

//! for pair on the bases of seocnd key vlaues

// #include <bits/stdc++.h>
// using namespace std;

// bool comparator(pair<int, int> p1, pair<int, int> p2)
// {
//     if (p1.second < p2.second)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {
//     // sorting accure accouding to first key values
//     vector<pair<int, int>> vec = {{2, 4}, {5, 1}, {4, 2}, {6, 3}};

//     sort(vec.begin(), vec.end(), comparator);

//     for (auto val : vec)
//     {
//         cout << val.first << " " << val.second << endl;
//     }

//     return 0;
// }

// ?

// #include <bits/stdc++.h>
// using namespace std;

// bool comparator(pair<int, int> p1, pair<int, int> p2)
// {
//     if (p1.second < p2.second) return true;
//     if (p1.second > p2.second) return false;

//     if(p1.first < p2.first)
//         return true;
//     else
//         return false;
// }

// int main()
// {
//     // sorting accure accouding to first key values
//     vector<pair<int, int>> vec = {{3, 1}, {7, 1}, {2, 1}, {5, 2}};

//     sort(vec.begin(), vec.end(), comparator);

//     for (auto val : vec)
//     {
//         cout << val.first << " " << val.second << endl;
//     }

//     return 0;
// }

// ! Reverse algorithm

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1,2,3,4,5};

//     reverse(vec.begin(), vec.end());

//     for(int i : vec)
//     {
//         cout << i << " ";
//     }

//     cout << endl;
//     // for specifce reverse index
//     // like only 3,4

//     reverse(vec.begin() + 1, vec.begin() + 3);
//     for(int j : vec)
//     {
//         cout << j << " ";
//     }

//     return 0;
// }

// ! Next prematuation
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s = "abc";

//     next_permutation(s.begin(), s.end());
//     cout << s << endl;

//     return 0;
// }

// ? max and min
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cout << max(3, 5) << " " << min(2, 5);

    cout << endl;
    vector<int> vec = {1, 2, 3, 4};

    cout << "max value in vector is : " << *(max_element(vec.begin(), vec.end()));
    cout << endl;
    cout << "min value in vector is : " << *(min_element(vec.begin(), vec.end()));

    return 0;
}

//
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4};

//     cout << binary_search(vec.begin(), vec.end(), 3); // return true if 3 is present in it

//     return 0;
// }


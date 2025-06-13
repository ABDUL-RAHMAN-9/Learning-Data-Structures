// #include <bits/stdc++.h>
// using namespace std;
// void printVector(vector<int> &vec)
// {
//     for (auto value : vec)
//     {
//         cout << value << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int> vector1 = {1, 2, 3, 4, 5};
//     vector<int> vector2(5, 9); // creates a vector of size 5 where each element initialized to 9.

//     printVector(vector1);
//     printVector(vector2);

//     return 0;
// }

// ! Insert Elements in vector

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<char> vec = {'A', 'B', 'C'};

//     vec.push_back('E'); // at last

//     vec.insert(vec.begin() + 1, 'M'); // it insert on the 1 index

//     for (auto value : vec)
//     {
//         cout << value << " ";
//     }

//     return 0;
// }

//! Access or Update Elements

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<char> v = {'a', 'c', 'f', 'd', 'z'};

//     // Accessing and printing values
//     cout << v[3] << " ";
//     cout << v.at(2) << " ";

//     // Updating values using indexes 3 and 2
//     v[3] = 'D';
//     v.at(2) = 'F';

//     cout << v[3] << " ";
//     cout << v.at(2);
//     cout << endl;

//     for(auto val : v)
//     {
//         cout << val << ", ";
//     }
//     return 0;
// }

// ! Delete Elements
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<char> v = {'a', 'c', 'f', 'd', 'z'};

//     // Deleting last element 'z'
//     v.pop_back();

//     // Deleting element 'a'
//     v.erase(find(v.begin(), v.end(), 'a'));

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     return 0;
// }

// ! From Another Vector
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> vec1 = {1, 2, 3, 4};
//     vector<int> vec2(vec1.begin(), vec1.end());

//     for (auto val : vec2)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

//? C++ Program to initialize the std::vector
// using std::fill() method
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v(5);

//     // Initialize vector v with 11
//     fill(v.begin(), v.end(), 2);

//     for (auto i : v)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

// C++ Program to initializ the std::vector
// using std::iota()

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v(5);

//     // Using std::iota() to initialize vector v
//     // with 11
//     iota(v.begin(), v.end(), 100);

//     for (auto i : v)
//         cout << i << " ";
//     return 0;
// }

// ? ========== Commonly Used Methods ===========
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     // Printing last element using vector end
//     cout << *(--vec.end());

//     return 0;
// }

//  ! Examples of Vector end()   = Iterator Over a Vector

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     for (auto it = vec.begin(); it != vec.end(); it++)
//     {
//         cout << *it << " ";
//     }

//         return 0;
// }

// ! Access Nth Last Element of Vector

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     int n = 2;
//     // access 2nd last element
//     cout << *(vec.end() - n);

//     return 0;
// }

// ! Apply Sort Algorithm on Vector

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> vec = {5, 2, 4, 1, 3, 6};
//     sort(vec.begin(), vec.end());
//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }


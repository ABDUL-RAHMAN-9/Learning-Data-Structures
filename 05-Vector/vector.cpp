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

// ! Vector empty() and front()

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
// vector<int> vec = {1, 2, 3, 4, 5};

//     if(!vec.empty())
//     {
//         cout << vec.front();
//     }
//     else
//     {
//         cout << "vector is empty";
//     }

//    return 0;
// }

// ! vector operator
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     cout << vec[2] << endl;
//     vec[2] = 100;
//     for(auto val: vec)
//     {
//         cout << val << " ";
//     }

//     return 0;

// }

// ! Vector front() in C++ STL
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     // changeing the value
//     vec.front() = 100;
//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

// ! vector push_back

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     vec.push_back(100);
//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }
//     return 0;
// }

//  ! for string
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<string> vec = {"Good", "Day"};

//     vec.push_back("Guys");
//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

// ! Vector insert()
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     // at the giveing position
//     vec.insert(vec.begin() + 3, 100);

//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

// ! insert the 2nd vector in 1st one
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     vector<int> vec2 = {7, 8, 9, 10};

//     vec.insert(vec.begin() + 4, vec2.begin(), vec2.end());

//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

// !  emplace
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     vec.emplace(vec.begin() + 1, 100);
//     vec.emplace(vec.end(), 200);
//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

// ! Vector assign() in C++ STL
//? used to assign the new values to the given vector by replacing old ones.

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec;

//     // size , all elements
//     vec.assign(5, 20);
//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

// ! Assign New Values to Vector from Initializer List

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v{5, 7, 8, 6, 9};

//     // Assining values using initializer list
//     v.assign({1, 2, 3});

//     for (auto i : v)
//         cout << i << " ";
//     return 0;
// }

// !  Assign Values to Vector from Another Container

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec1 = {1, 2, 3, 4, 5};
//     vector<int> vec2;
//     int arr[] = {10, 20, 30, 40};

//     vec2.assign(arr, arr + 2);
//     vec1.assign(vec2.begin(), vec2.end());

//     for (auto val1 : vec1)
//     {
//         cout << val1 << " ";
//     }
//     cout << endl;
//     for (auto val2 : vec2)
//     {
//         cout << val2 << " ";
//     }

//     return 0;
// }

// ! Vector erase() in C++ STL

// ? It removes an element of a specific position
// ? or range of elements from the vector.
// #include <iostream>
// #include <vector>
// using namespace std;

// void eraseOneSingleElement(vector<int> &vec) // pass by reference
// {
//     if (vec.size() > 1)
//     {
//         // Remove single element
//         vec.erase(vec.begin() + 1); // erase = 2
//     }
//     else
//     {
//         cout << "Vector size is not greater than 1\n";
//     }
// }

// void eraseLastElement(vector<int> &vec) // pass by reference
// {
//     if (!vec.empty())
//     {
//         // Remove last element
//         vec.erase(vec.end() - 1); // erase = 10
//     }
//     else
//     {
//         cout << "Vector is empty\n";
//     }
// }

// void eraseInTheRangeOfElement(vector<int> &vec) // pass by reference
// {
//     // Remove elements in the range [3,6)
//     if (vec.size() > 6)
//     {
//         vec.erase(vec.begin() + 3, vec.begin() + 6); // 4,5,6,
//     }
//     else
//     {
//         cout << "Vector size is not greater than 6\n";
//     }
// }

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     cout << "Elements after erase in the vector: ";
//     eraseOneSingleElement(vec);
//     eraseLastElement(vec);
//     eraseInTheRangeOfElement(vec);

//     for (auto val : vec)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

// ! iterator

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     vector<int>::iterator it;
//     for (it = vec.begin(); it != vec.end(); it++)
//     {
//         cout << *(it) << " ";
//     }

//     cout << endl;
//     cout << "Reversed Iterator:" << endl;
//     vector<int>::reverse_iterator itr;
//     for (itr = vec.rbegin(); itr != vec.rend(); itr++)
//     {
//         cout << *(itr) << " ";
//     }
//     return 0;
// }

// !

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;
// bool comparator(pair<int, int> p1, pair<int, int> p2)
// {
//     if (p1.second < p2.second)
//         return true;
//     if (p1.second > p2.second)
//         return false;

//     if (p1.first < p2.first)
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
//     vector<pair<int, int>> vec = {{8, 1}, {3, 1}, {1, 4}};

//     vec.push_back({6, 1});
//     vec.emplace_back(10, 9);
//     cout << "Sorted ordr:" << endl;

//     sort(vec.begin(), vec.end(), comparator);

//     for (pair<int, int> val : vec)
//     {
//         cout << val.first << ": " << val.second << endl;
//     }

//     cout << endl;
//     cout << "Reversed ordr:" << endl;
//     reverse(vec.begin(), vec.end());

//     for (pair<int, int> val : vec)
//     {
//         cout << val.first << ": " << val.second << endl;
//     }

//     return 0;
// }

// ! Leetcode : 496. Next Greater Element I

// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
//     {
//         vector<int> ans; // to store the result for nums1 elements

//         // Loop through each element in nums1
//         for (int num : nums1)
//         {
//             int j = 0;

//             // Step 1: Find the position of 'num' inside nums2
//             while (j < nums2.size() && nums2[j] != num)
//             {
//                 j++;
//             }

//             int nextGreater = -1; // default is -1 if no greater element is found

//             // Step 2: From the found position, check the next elements in nums2
//             for (int k = j + 1; k < nums2.size(); k++)
//             {
//                 if (nums2[k] > num)
//                 {
//                     nextGreater = nums2[k]; // found next greater
//                     break;                  // stop after finding the first greater element
//                 }
//             }

//             // Step 3: Push result for this number
//             ans.push_back(nextGreater);
//         }

//         return ans; // final result
//     }
// };

// int main()
// {
//     // Input values
//     vector<int> nums1 = {4, 1, 2};
//     vector<int> nums2 = {1, 3, 4, 2};

//     Solution sol;
//     vector<int> result = sol.nextGreaterElement(nums1, nums2);

//     // Output with good understanding
//     cout << "Input: nums1 = [4,1,2], nums2 = [1,3,4,2]" << endl;
//     cout << "Output: [";
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i];
//         if (i < result.size() - 1)
//             cout << ",";
//     }
//     cout << "]" << endl;

//     // Explanation
// cout << "\nExplanation:" << endl;
// cout << "For 4 -> no greater element to its right in nums2 -> -1" << endl;
// cout << "For 1 -> next greater element in nums2 is 3 -> 3" << endl;
// cout << "For 2 -> no greater element to its right -> -1" << endl;

//     return 0;
// }

// ! Previous Greater element

// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     vector<int> PreviousGreaterElement(vector<int> &nums1, vector<int> &nums2)
//     {
//         vector<int> ans; // to store the result for each element of nums1

//         // Loop through each element in nums1
//         for (int num : nums1)
//         {
//             // Step 1: Find the index of 'num' inside nums2
//             int j = 0;
//             while (j < nums2.size() && nums2[j] != num)
//             {
//                 j++;
//             }

//             // Step 2: Look left of 'j' to find previous greater
//             int prevGreater = -1;            // default = -1 (no greater found)
//             for (int k = j - 1; k >= 0; k--) // check towards left
//             {
//                 if (nums2[k] > num)
//                 {
//                     prevGreater = nums2[k];
//                     break; // stop once found
//                 }
//             }

//             // Step 3: Save result
//             ans.push_back(prevGreater);
//         }
//         return ans;
//     }
// };

// int main()
// {
//     // Input values
//     vector<int> nums1 = {4, 1, 2};
//     vector<int> nums2 = {1, 3, 4, 2};

//     Solution sol;
//     vector<int> result = sol.PreviousGreaterElement(nums1, nums2);

//     // Output
//     cout << "Input: nums1 = [4,1,2], nums2 = [1,3,4,2]" << endl;
//     cout << "Output: [";
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i];
//         if (i < result.size() - 1)
//             cout << ",";
//     }
//     cout << "]" << endl;

//     // Explanation for each element
//     cout << "\nExplanation:" << endl;
//     cout << "For 4 -> no greater element on the left in nums2 -> -1" << endl;
//     cout << "For 1 -> no greater element on the left in nums2 -> -1" << endl;
//     cout << "For 2 -> previous greater in nums2 is 4 -> 4" << endl;

//     return 0;
// }



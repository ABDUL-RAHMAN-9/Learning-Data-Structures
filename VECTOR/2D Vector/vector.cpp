// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<vector<int>> vec = {
//         {1, 2, 3, 4, 5},
//         {6, 7, 8, 9, 10}};

//     for (int i = 0; i < vec.size(); i++)
//     {
//         for (int j = 0; j < vec[i].size(); j++)
//         {
//             cout << vec[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ! 2D vector
// #include <iostream>
// #include <vector>
// using namespace std;

// void displayVector(vector<vector<int>> &vec)
// {
//     for (auto i : vec)
//     {
//         for (auto j : i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// int main()
// {
//     // An empty 2D vector
//     vector<vector<int>> vec1;

//     // 2D vector with initial size and value
//     // where : 2 = row , 3 = col , 30 = valueInTheVector
//     vector<vector<int>> vec2(2, vector<int>(3, 30));

//     // A 2D vector initialized with initializer list
//     vector<vector<int>> vec3 = {
//         {1, 2, 3},
//         {4, 5, 6},
//     };

//     displayVector(vec1);
//     displayVector(vec2);
//     displayVector(vec3);

//     return 0;
// }

// ! Inserting in 2D vector
// #include <iostream>
// #include <vector>
// using namespace std;

// void Display(vector<vector<int>> &vec)
// {

//     for (int i = 0; i < vec.size(); i++)
//     {
//         for (int j = 0; j < vec[i].size(); j++)
//         {
//             cout << vec[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     vector<vector<int>> vec = {
//         {1, 2, 3},
//         {4, 5, 6},
//     };
//     cout << "Before Inserting: " << endl;

//     Display(vec);
//     // Insert a new row at the end
//     vec.push_back({7, 8, 9});
//     // Insert a new value at the specific postion
//     vec[1].insert(vec[1].begin() + 1, 100);

//     cout << "After Inserting: " << endl;
//     Display(vec);

//     return 0;
// }

// ! Update Elements from a 2D Vector
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<vector<int>> vec = {{1, 2, 3},
//                                {4, 5, 6}};

//     cout << vec[1][2] << endl;
//     cout << vec[0][1] << endl;
//     // update value
//     vec[0][1] = 9;
//     cout << vec[0][1] << endl;

//     return 0;
// }

// ! Deleting Elements from a 2D Vector

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<vector<int>> v = {{1, 2, 3},
//                              {4, 5, 6}};

//     cout << "Deleting Elements: ";

//     // Delete the second row
//     v.erase(v.begin() + 1);

//     // Delete second element in first row
//     v[0].erase(v[0].begin() + 1);

//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = 0; j < v[i].size(); j++)
//         {
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//  ! 2D vector size
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     // Creating a 2D vector
//     vector<vector<int>> vec = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};

//     int rows = vec.size();
//     int cols = vec[0].size();

//     cout << "rows : " << rows << " " << "cols : " << cols << endl;

//     return 0;
// }

// ! Sort a 2D vector
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void sortVector(vector<vector<int>> &vec)
// {
//     // Sort every row one by one
//     for (auto &i : vec)
//     {
//         sort(vec.begin(), vec.end());
//     }
// }

// void sortVectorByCol(vector<vector<int>> &vec)
// {
//     int n = vec.size(), m = vec[0].size();

//     // Creating new vector
//     vector<vector<int>> vec1(m, vector<int>(n));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             vec1[j][i] = vec[i][j];
//         }
//     }

//     // Sort every row one by one
//     for (auto &i : vec1)
//     {
//         sort(vec1.begin(), vec1.end());
//     }

//     // Copy back the sorted vector
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             vec[i][j] = vec1[j][i];
//         }
//     }
// }

// void display(vector<vector<int>> &vec)
// {
//     for (auto i : vec)
//     {
//         for (auto j : i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<vector<int>> vec = {
//         {9, 7, 8},
//         {3, 1, 2},
//         {6, 4, 5}};

//     cout << "Before Sorting: " << endl;
//     display(vec);

//     cout << "After Sorting: " << endl;
//     sortVector(vec);
//     sortVectorByCol(vec);

//     display(vec);

//     return 0;
// }

// ! By Rows and Columns

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void sortVector(vector<vector<int>> &vec)
// {
//     //  create 1D array
//     vector<int> vec2;

//     // Copy all elements to 1D vector
//     for (auto i : vec)
//     {
//         for (auto j : i)
//         {
//             vec2.push_back(j);
//         }
//     }

//     // Sort 1D vector
//     sort(vec2.begin(), vec2.end());

//     // //? Copy back the elements
//     // // int k = 0;
//     // // for (auto &i : vec)
//     // // {
//     // //     for (auto &j : i)
//     // //     {
//     // //         j = vec2[k++];
//     // //     }
//     // // }

//     int k = 0;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         for (int j = 0; j < vec[0].size(); j++)
//         {
//             vec[i][j] = vec2[k++];
//         }
//     }
// }

// void display(vector<vector<int>> &vec)
// {
//     for (auto i : vec)
//     {
//         for (auto j : i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<vector<int>> vec = {
//         {9, 7, 6},
//         {3, 5, 2},
//         {8, 4, 1}};

//     cout << "Before Sorting: " << endl;
//     display(vec);

//     cout << "After Sorting: " << endl;
//     sortVector(vec);
//     display(vec);

//     return 0;
// }

// // ! passing vector to a fucntion by value
// #include <iostream>
// #include <vector>
// using namespace std;

// void display(vector<int> vec)
// {
//     for (auto i : vec)
//         cout << i << " ";
//     cout << endl;
// }
// void foo(vector<int> vec)
// {
//     vec.push_back(100);
//     display(vec);
// }

// int main()
// {
//     // The vector inside the function got one more element
//     // while the original vector remained unchanged even after the function execution.
//     vector<int> vec = {1, 2, 3, 4, 5};
//     display(vec);
//     foo(vec);
//     display(vec);

//     return 0;
// }

// ! Pass Vector by Reference

// #include <iostream>
// #include <vector>
// using namespace std;

// void display(vector<int>& vec)
// {
//     for (auto i : vec)
//         cout << i << " ";
//     cout << endl;
// }
// void foo(vector<int>&vec)
// {
//     vec.push_back(100);
//     display(vec);
// }

// int main()
// {
//     // Explanation: The function modified the original vector as we can see in the output.
//     vector<int> vec = {1, 2, 3, 4, 5};
//     display(vec);
//     foo(vec);
//     display(vec);

//     return 0;
// }

// ! Pass Vector by Pointer
// #include <iostream>
// #include <vector>

// using namespace std;

// void foo(vector<int> *ptr)
// {

//     ptr->push_back(100);
//     for (int i = 0; i < ptr->size(); i++)
//     {
//         cout << ptr->at(i) << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     // Explanation: The function modified the original vector as we can see in the output.
//     vector<int> vec = {1, 2, 3, 4, 5};
//     foo(&vec);

//     return 0;
// }
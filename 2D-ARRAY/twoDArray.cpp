// //*     Date :- 09-july-25
// // ! 2D-ARRAY OR Matrix
// #include <iostream>
// using namespace std;

// void insertNewValue(int matrix[4][3], int row, int col, int newVal)
// {
//     if (row >= 0 && row < 4 && col >= 0 && col < 3)
//     {
//         matrix[row][col] = newVal;
//     }
//     else
//     {
//         cout << "Invalid row or column index for insertion!" << endl;
//     }
// }
// void print(int matrix[4][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << "\n";
//     }
// }

// int main()
// {

//     int matrix[4][3] = {//  here 4 = row & 3 = col

//                         {1, 2, 3},
//                         {4, 5, 6},
//                         {7, 8, 9},
//                         {10, 11, 12}};

//     int row = 4;
//     int col = 3;

//     cout << "Original Matrix:\n";
//     print(matrix, row, col);

//     int newValue = 25;
//     // Insert new value at (2,1)
//     insertNewValue(matrix, 2, 1, newValue);
//     cout << "\nMatrix After Inserting New Value:\n";
//     print(matrix, row, col);

//     return 0;
// }

// ! 2D -Vector
// #include <iostream>
// #include <vector>
// using namespace std;

// /*

// | Code               | Meaning                    | Value in Example |
// | ------------------ | -------------------------- | ---------------- |
// | `matrix.size()`    | Number of rows             | 4                |
// | `matrix[0].size()` | Number of columns in row 0 | 3                |

// */

// void insertNewValue(vector<vector<int>> &matrix, int row, int col, int newVal)
// {

//     if (row >= 0 && row < matrix.size() && col >= 0 && col < matrix[0].size())
//     {
//         matrix[row][col] = newVal;
//     }
//     else
//     {
//         cout << "Invalid row or column index for insertion!" << endl;
//     }
// }
// void print(vector<vector<int>> &matrix)
// {
//     for (const auto &row : matrix)
//     {
//         for (const auto &val : row)
//         {
//             cout << val << " ";
//         }
//         cout << "\n";
//     }
// }

// int main()
// {

//     vector<vector<int>> matrix = {//  here 4 = row & 3 = col

//                                   {1, 2, 3},
//                                   {4, 5, 6},
//                                   {7, 8, 9},
//                                   {10, 11, 12}};

//     cout << "Original Matrix:\n";
//     print(matrix);

//     int newValue = 25;
//     // Insert new value at (2,1)
//     insertNewValue(matrix, 2, 1, newValue); // 3rd row, 2nd col becomes 99
//     cout << "\nMatrix After Inserting New Value:\n";
//     print(matrix);

//     return 0;
// }

// ! getting input in 2D matrix
// #include <iostream>
// using namespace std;

// int main()
// {
//     int matrix[4][3];
//     int rows = 4;
//     int col = 3;

//     cout << "Enter Matrix elements : ";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "Your entered:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ! get index value in matrix using pair

// #include <iostream>
// using namespace std;

// bool serachValue(int matrix[][3], int row, int col, int key)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (matrix[i][j] == key)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// pair<int, int> checkValuePresent(int matrix[][3], int row, int col, int key)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (matrix[i][j] == key)
//             {
//                 return {i, j};
//             }
//         }
//     }
//     return {-1, -1};
// }

// int main()
// {
//     int matrix[4][3] = {

//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9},
//         {10, 11, 12}};
//     int row = 4, col = 3;
//     int key = 11;
//     int res = serachValue(matrix, row, col, key);

//     if (res)
//     {
//         cout << "Value is Present" << endl;
//     }
//     else
//     {
//         cout << "Not Present!" << endl;
//     }
//     //  Receive position as a pair
//     pair<int, int> pos = checkValuePresent(matrix, row, col, key);
//     if (pos.first != -1)
//     {
//         cout << "Value present at index: [" << pos.first << "]" << "[" << pos.second << "]" << endl;
//     }
//     else
//     {
//         cout << "Value not Found!";
//     }
//     return 0;
// }

// ! Maximum Row Sum

// #include <iostream>
// #include <climits>
// using namespace std;

// // Returns the maximum sum among all rows in the matrix
// int getMaxTRowSum(int matrix[][3], int rows, int cols)
// {
//     int maxRowSum = INT_MIN; // Initialize with lowest possible int

//     for (int i = 0; i < rows; i++)
//     {
//         int rowSum = 0; // Sum of current row
//         for (int j = 0; j < cols; j++)
//         {
//             rowSum += matrix[i][j]; // Add each element
//         }
//         maxRowSum = max(maxRowSum, rowSum); // Update max if needed
//     }

//     return maxRowSum;
// }

// int getMaxColumnSum(int matrix[][3], int rows, int cols)
// {
//     int maxColSum = INT_MIN;

//     for (int j = 0; j < cols; j++) //  loop over columns
//     {
//         int colSum = 0;
//         for (int i = 0; i < rows; i++) //  loop over rows
//         {
//             colSum += matrix[i][j]; //  correct indexing
//         }
//         maxColSum = max(maxColSum, colSum);
//     }
//     return maxColSum;
// }

// int main()
// {
//     int matrix[3][3] =
//         {{1, 2, 3},
//          {4, 5, 6},
//          {7, 8, 9}};

//     int rows = 3;
//     int cols = 3;

//     cout << "Max Row Sum: " << getMaxTRowSum(matrix, rows, cols) << endl;
//     cout << "Max Column Sum: " << getMaxColumnSum(matrix, rows, cols) << endl;

//     return 0;
// }

// // ! Diagonal Matrix sum
// //* Primary and Secondary

// #include <iostream>
// using namespace std;

// int diagonalSum(int matrix[][4], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {

//         sum += matrix[i][i]; // Adds the primary diagonal element at (i, i).

//         if (i != n - i - 1) // Avoids double counting middle element in odd n.
//         {
//             sum += matrix[i][n - i - 1];
//         }
//     }
//     return sum;
// }

// int main()
// {
//     int matrix[4][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}};

//     int n = 4;
//     cout << "Diagonal Matrix :" << diagonalSum(matrix, n) << endl;

//     return 0;
// }
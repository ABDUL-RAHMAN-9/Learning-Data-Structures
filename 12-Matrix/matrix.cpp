
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     vector<int> luckyNumbers(vector<vector<int>> &matrix)
//     {
//         vector<int> result;

//         //  row - min - smaller
//         //  col - max - larger

//         int m = matrix.size();    // row
//         int n = matrix[0].size(); // col

//         for (int row = 0; row < m; row++)
//         {
//             // Step 1: Find minimum in the current row
//             int minVal =
//                 matrix[row][0]; // assuming the 1st matrix elem is minimum.
//             int colIdx = 0;

//             for (int col = 1; col < n; col++)
//             {
//                 if (matrix[row][col] < minVal)
//                 {
//                     minVal = matrix[row][col]; // update minVal here
//                     colIdx = col;
//                 }
//             }

//             // Step 2: Check if minVal is the maximum in its column
//             bool isMaxInCol = true;
//             for (int r = 0; r < m; r++)
//             {
//                 if (matrix[r][colIdx] > minVal)
//                 {
//                     isMaxInCol = false;
//                     break;
//                 }
//             }

//             // Step 3: If both conditions satisfied, add to result
            // if (isMaxInCol)
//             {
//                 result.push_back(minVal);
//             }
//         }
//         return result;
//     }
// };

// int main()
// {
//     Solution sol;
//     vector<vector<int>> matrix = {
//         {3, 7, 8},
//         {9, 11, 13},
//         {15, 16, 17}};

//     vector<int> output = sol.luckyNumbers(matrix);

//     for (int num : output)
//     {
//         cout << "Output: " << num <<  " ";
//     }
//     cout << endl;

//     return 0;
// }
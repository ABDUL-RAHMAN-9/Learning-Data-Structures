// // ! recursion
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1; // Base case: factorial of 0 or 1 is 1
//     }
//     return n * factorial(n - 1);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num < 0)
//     {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     }
//     else
//     {
//         cout << "Factorial of " << num << " is: " << factorial(num) << endl;
//     }

//     return 0;
// }

// ! Printing form n to 1
// #include <iostream>
// using namespace std;
// void printNums(int n)
// {
//     if (n < 1)
//     {
//         return;
//     }
//     cout << n << " ";

//     printNums(n - 1);
// }

// int main()
// {
//     printNums(4);

//     return 0;
// }

// //! Sum on N Nums
// #include <iostream>
// using namespace std;

// int sumOfNums(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     return n + sumOfNums(n - 1);
// }

// int main()
// {
//     cout << sumOfNums(4);

//     return 0;
// }

// //! Check if array is shorted or not

// #include <iostream>
// #include <vector>

// using namespace std;

// bool isSorted(vector<int> &arr, int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return true;
//     }
//     return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};

//     cout << (isSorted(arr, arr.size()) ? "True" : "False");

//     return 0;
// }
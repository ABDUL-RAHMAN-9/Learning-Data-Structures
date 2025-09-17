/*
An Armstrong number is a number that is equal to the
sum of its digits each raised to the power of the number of digits.
*/

// #include <iostream>
// #include <string>
// using namespace std;

// bool isArmstrong(int n)
// {
//     int copyN = n;
//     int sumOfCubes = 0;

//     while (n != 0)
//     {
//         int dig = n % 10;
//         sumOfCubes += (dig * dig * dig);
//         n = n / 10;
//     }
//     return sumOfCubes == copyN;
// }

// int main()
// {
//     int n = 153;
//     if (isArmstrong(n))
//     {
//         cout << "Armstrong number";
//     }
//     else
//     {
//         cout << "This is NOT That one!";
//     }

//     return 0;
// }

// ! Factorial

// #include <iostream>
// using namespace std;

// int factorialOfN(int n)
// {
//     if (n == 1 || n == 0)
//     {
//         return 1;

//     }
//     return n * factorialOfN(n - 1);
// }
// int main()
// {
//     int n = 3;
//     int ans = factorialOfN(n);
//     cout << ans;

//     return 0;
// }

// ! digit extraction function for integers

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> getDigits(int &num)
// {

//     vector<int> ans;
//     while (num > 0)
//     {
//         int lastDigit = num % 10;
//         ans.push_back(lastDigit);
//         num = num / 10;
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

// int main()
// {
//     int n = 426;

//     vector<int> ans = getDigits(n);
//     cout << "Valus after seprating: ";
//     for (int val : ans)
//     {
//         cout << val << ", ";
//     }

//     return 0;
// }

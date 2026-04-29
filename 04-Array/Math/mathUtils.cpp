// ? Palindrome number =>    121 = 121  = same number when it reverse
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "numbers :";
//     cin >> n;

//     int reverse_num = 0;
//     int duplicate = n;

//     while (n > 0) // 121
//     {
//         int last_digit = n % 10; // give last digit like   = 1

//         reverse_num = reverse_num * 10 + last_digit; // every time revers_num = is 0 and it place the value of the last digit = 12
//         n = n / 10;                                  // it become remaining element like 1 becuase we get 1 and 2 [12.1]
//     }
//     if (duplicate == reverse_num)
//     {
//         cout << "true";
//     }
//     else
//     {
//         cout << "false";
//     }

//     return 0;
// }




// ! Print all divisors of a num 
// #include <bits/stdc++.h>
// using namespace std;

// void printDivisor(int n )
// {
//     for (int i = 1; i <=n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i;
//         }
//     }
// }
// int main()
// {

//     int n;
//     cout << "num :";
//     cin >> n;

//     printDivisor(n);

//     return 0;
}
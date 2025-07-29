// ! 28-July-2025

// ? 1. Print all Subsets of a String

// #include <iostream>
// #include <vector>
// using namespace std;

// void generateSubsets(string str, string curr, int idx, int &count)
// {
//     if (idx == str.length())
//     {
//         cout << "\"" << curr << "\"" << endl;
//         count++;
//         return;
//     }
//     generateSubsets(str, curr + str[idx], idx + 1, count);

//     generateSubsets(str, curr, idx + 1, count);
// }

// int main()
// {
//     string str = "ab";
//     int count = 0;
//     generateSubsets(str, "", 0, count);
//     cout << "\nTotal subsets: " << count << endl;

//     return 0;
// }
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

// ! print all permutations of the string "abc"

// #include <iostream>
// #include <string>
// using namespace std;

// void permutations(string &str, int left, int right)

// {
//     if (left == right)
//     {
//         cout << str << endl;
//         return;
//     }

//     for (int i = left; i <= right; i++)
//     {
//         swap(str[left], str[i]);
//         permutations(str, left + 1, right);
//         swap(str[left], str[i]);
//     }
// }

// int main()
// {
//     string str = "abc";
//     permutations(str, 0, str.length() - 1);

//     return 0;
// }

// ! Generate All Subsets of a String

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void generateSubsets(string &str, string current, int index, vector<string> &result)
{
    if (index == str.size())
    {
        result.push_back(current);
        return;
    }
    generateSubsets(str, current + str[index], index + 1, result);

    generateSubsets(str, current, index + 1, result);
}

int main()
{
    string str = "abc";
    vector<string> result;
    generateSubsets(str, "", 0, result);

    for (const string &subset : result)
    {
        cout << "\"" << subset << "\", ";
    }
    return 0;
}



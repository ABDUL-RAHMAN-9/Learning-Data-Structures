// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     unordered_map<int, string> um = {
//         {1, "key1"},
//         {2, "key2"},
//         {3, "key3"}};

//     cout << endl;
//     // Inserting Elements
//     um[4] = "key4";
//     um.insert({5, "key5"});

//     for (auto val : um)
//     {
//         cout << val.first << " : " << val.second << endl;
//     }

//     cout << endl;
//     cout << "Accessing Elements" << endl;
//     cout << um[2] << endl;
//     cout << um.at(3) << endl;

//     cout << "Updating Elements" << endl;
//     um[2] = "NewKey2";
//     um.at(3) = "NewKey3";
//     cout << endl;

//     cout << um[2] << endl;
//     cout << um.at(3) << endl;
//     cout << "Finding Elements" << endl;

//     auto it = um.find(2);
//     if (it != um.end())
//     {
//         cout << it->first << ": " << it->second;
//     }
//     else
//     {
//         cout << "Not Found";
//     }
//     cout << endl;

//     cout << "Traversing" << endl;
//     for (auto it = um.begin(); it != um.end(); it++)
//     {
//         cout << it->first << " : " << it->second << endl;
//     }
//     cout << endl;
//     cout << "Deleting Elements" << endl;
//     um.erase(2);
//     um.erase(um.begin());
//     for (auto it = um.begin(); it != um.end(); it++)
//     {
//         cout << it->first << " : " << it->second << endl;
//     }
//     cout << endl;

//     return 0;
// }

// ! First Unique Character in a String

// #include <iostream>
// #include <unordered_map>
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int firstUniqChar(string s)
// {
//     unordered_map<char, int> freq;

//     // Count occurrences of each character
//     for (char ch : s)
//     {
//         freq[ch]++;
//     }

//     // Find the first unique character

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (freq.count(s[i]) && freq[s[i]] == 1)
//         {
//             cout << "Index of first unique character: " << i << endl;
//             cout << "Explanation: '" << s[i] << "' is the first unique character at index " << i << "." << endl;

//             return i;
//         }
//     }
//     cout << "No unique character found." << endl;
//     return -1;
// }

// int main()
// {
//     string s = "loveleetcode";
//     firstUniqChar(s);

//     return 0;
// }

// ! Word Pattern

// #include <iostream>
// #include <unordered_map>
// #include <string>
// #include <vector>
// #include <sstream>
// #include <algorithm>

// using namespace std;

// bool wordPattern(string pattern, string str)
// {
//     istringstream iss(str);
//     vector<string> words;
//     string word;

//     // step 1 : split string s into words
//     while (iss >> word)
//     {
//         words.push_back(word);
//     }
//     if (pattern.length() != words.size())
//     {
//         return false; // If the number of words doesn't match the pattern length
//     }

//     unordered_map<char, string> mapCharToword;
//     unordered_map<string, char> mapWordToChar;

//     for (int i = 0; i < pattern.length(); i++)
//     {
//         char c = pattern[i];
//         string w = words[i];

//         // step 2 : check if the character is already mapped to a word
//         if (mapCharToword.find(c) != mapCharToword.end())
//         {
//             if (mapCharToword[c] != w)
//             {
//                 return false; // Mismatch in mapping
//             }
//         }
//         else
//         {
//             mapCharToword[c] = w; // Map character to word
//         }

//         // step 3 : check if the word is already mapped to a character
//         if (mapWordToChar.find(w) != mapWordToChar.end())
//         {
//             if (mapWordToChar[w] != c)
//             {
//                 return false; // Mismatch in mapping
//             }
//         }
//         else
//         {
//             mapWordToChar[w] = c; // Map word to character
//         }
//     }
//     return true; // All mappings are consistent
// }

// int main()
// {
//     string pattern = "abba";
//     string str = "dog cat cat dog";

//     if (wordPattern(pattern, str))
//     {
//         cout << "The string follows the pattern." << endl;
//     }
//     else
//     {
//         cout << "The string does not follow the pattern." << endl;
//     }

//     return 0;
// }
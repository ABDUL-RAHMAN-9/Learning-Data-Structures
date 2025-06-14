//? Accessing characters by index in a string.
//  #include <iostream>
// #include <string>
// using namespace std;
// char print_value(string str ,int k)
// {
//     //return the character at Kth index in the string
//     return str[k];
// }

// int main()
// {
//     int k = 4 ;
//     string value_str = "LOVeU";

//     cout << print_value(value_str, k);

//     return 0;
// }

// ? Inserting Character/String into an String.

// #include <iostream>
// #include <string>
// using namespace std;
// void Insert(string str , string ch , int k )
// {
//     str.insert(k, ch);
//     cout << str << endl;
// }

//     int main()
// {
//     string str ("This is yours.");
//     string ch = " World";
//     int k = 4;

//     cout << "Before :" << str << endl;

//     cout << "After :";
//     Insert(str, ch, k);

//     return 0;
// }

// ?Modifying character in String
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     // Get the string
//  string str = "Programming with you";

//     // Get the index
//     int index = 13;

//     // Get the character
//     char ch = 'T';

//     // Print the original string
// cout << "Original String = " << str <<endl;

//     str.replace(index, 1, 1, ch);

// cout << "Modified String = " << str << endl;

//     return 0;
// }

// ?Deletion of character in String
// #include <bits/stdc++.h>
// using namespace std;

// void Remove_char(char *char_array, char c)
// {
//     int j, n = strlen(char_array);
//     for (int i = j = 0; i < n; i++)
//     {
//         if (char_array[i] != c)
//         {
//             char_array[j++] = char_array[i];
//         }
//     }
//     char_array[j] = '\0';
// }

// int main()
// {
//     char char_array[] = "This_is_fun";

//     Remove_char(char_array, 'i');
//     cout << char_array;

//     return 0;
// }

// ?Concatenating strings (combining multiple strings into one).

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string statement1("This is how ");
//     string statement2("we met");
//     statement1 =  statement1 + statement2;
//     cout << statement1 << endl;

//     return 0;
// }

// ?Finding the length/size of a string

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str = "This is a string";

//     cout << str.size();

//     return 0;
// }

// ? Comparing Strings for Equality

// #include <iostream>
// #include <string>
// using namespace std;
// bool String_Compare(const string &str1, const string &str2)
// {
//     int l1 = str1.length();
//     int l2 = str2.length();

//     int l_min = min(l1, l2);
//     for (int i = 0; i < l_min; i++)
//     {
//         int str1_ch = static_cast<int>(str1[i]);
//         int str2_ch = static_cast<int>(str2[i]);

//         if (str1_ch != str2_ch)
//         {
//             return false;
//         }
//     }
//     if (l1 != l2)
//     {
//         return false;
//     }
//     else
//     {
//         return true;
//     }
// }
// int main()
// {
//     string s1 = "one";
//     string s2 = "game";
//     string s3 = "one";
//     string s4 = "mine";
//     cout << "Comparing s1 and s2 :";
//     cout << String_Compare(s1, s2) << endl;

//     cout << "Comparing s1 and s4 :";
//     cout << String_Compare(s1, s4) << endl;

//     cout << "Comparing s1 and s3 :";
//     cout << String_Compare(s1, s3) << endl;

//     return 0;
// }

// ? Program to print all substrings of a given string

// #include <bits/stdc++.h>
// using namespace std;
// void SubString(char str[] , int n)
// {
//     for (int len = 1; len <= n; len++)
//     {
//         for (int i = 0; i <= n - len; i++)
//         {
//             int j = i + len - 1;
//             for (int k = i; k <= j;k++)
//             {
//                 cout << str[k];
//             }
//             cout << endl;
//         }
//     }
// }

// int main()
// {
//     char str[] = "abc";
//     SubString(str, strlen(str));

//     return 0;
// }

// ?Method 2 (Using substr() function

// #include <bits/stdc++.h>
// using namespace std;
// void SubString(string str, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int len = 1; len <= n - i; len++)
//         {
//             cout << str.substr(i, len) << " ";
//         }
//     }
// }

// int main()
// {
//     string str = "abcd";
//     SubString(str, str.length());

//     return 0;
// }

// ? Method 3 (Generate a substring using the previous substring):

// #include <bits/stdc++.h>
// using namespace std;
// void SubStrings(string str, int k)
// {
//     for (int i = 0; i < k; i++)
//     {
//         char temp[k - i + 1];
//         int temp_index = 0;

//         for (int j = i; j < k; j++)
//         {
//             temp[temp_index++] = str[j];
//             temp[temp_index] = '\0';
//             cout << temp <<  " ";
//         }
//     }
// }

// int main()
// {
//     string str = "Code";
//     SubStrings(str, str.length());

//     return 0;
// }

// ? Method 4 (using three nested loops):

// #include <iostream>
// #include <string>
// using namespace std;
// void SubString(string str)
// {
//     int n = str.length();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << str[k];
//             }
//             cout << endl;
//         }
//     }
// }

// int main()
// {
//     string str = "abcd";
//     SubString(str);

//     return 0;
// }

// ? Palindrome Stirng

// #include <iostream>
// #include <string>
// using namespace std;
// bool Check_Palindrome(string STRING)
// {
//     int low = 0;
//     int high = STRING.size() - 1;

//     while (low < high)
//     {
//         if (STRING[low] != STRING[high])
//         {
//             return false;
//         }
//         low++;
//         high--;
//     }
//     return true;
// }

// int main()
// {
//     string s1 = "value";
//     string s2 = "ABBA";
//     cout << "palindrome  : " << Check_Palindrome(s1) << endl;
//     cout << "palindrome  : " << Check_Palindrome(s2) << endl;
//     return 0;
// }

// ? Check if a string is substring of another
// #include <bits/stdc++.h>
// using namespace std;
// int SubString(string s1, string s2)
// { // using find method to check if s1 is
//   // a substring of s2

//     if (s2.find(s1) != string::npos)
//     {
//         return s2.find(s1);
//     }
//     return -1;
// }

// int main()
// {
//     string s1 = "Win";
//     string s2 = "OneDayYouWin";
//     int ans = SubString(s1, s2);

//     if (ans == -1)
//     {
//         cout << "Sub String not Found";
//     }
//     else
//     {
//         cout << "Sub string Found at index :" << ans << endl;
//     }

//     return 0;
// }

// ? Program to count vowel in a string

// #include <iostream>
// #include <string>
// using namespace std;
// bool IsVowel(char ch)
// {
//     ch = toupper(ch);
//     return (ch == 'A' || ch == 'E' || ch == 'I' ||
//             ch == 'O' || ch == 'U');
// }
// int CountVowel(string str)
// {
//     int count = 0;
//     for (int i = 0; i < str.length();i++)
//     {
//         if (IsVowel(str[i])) // Check for vowel
//         {
//             ++count;
//         }
//     }
//     return count;
// }

// int main()
// {
//     string str = "OneDayIWillBeDone";
//     cout << "Your String is :" << str << endl;
//     cout << "Vowel Present is :" << CountVowel(str) << endl;

//     return 0;
// }

// ? String to Uppercase
// #include<iostream>
// #include <algorithm>
// #include<string>
// using namespace std;
// int main ()
// {
//     string words = "this is going to uppercase";
//     transform(words.begin(), words.end(), words.begin(),::toupper);
//     cout << words << " " ;
//     cout << endl;

//     string str = "THIS IS GOING TO LOWERCASE ";
//     transform(str.begin(), str.end(), str.begin(),::tolower);
//     cout << str << " ";

//     return 0;
// }

//  ! ------------------------------------------------ DSA FORM TODAY 4-10-2024 ----------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// bool reverse_string(string &s , int i )
// {
//     if(i >= s.size()  / 2)
//     {
//         return true;
//     }
//     if(s[i] != s[s.size() - i - 1] )
//     {
//         return false;
//     }
//     reverse_string(s, i + 1);
// }

// int main()
// {
//     string s = "madam";
//     cout << reverse_string(s,0);

//     return 0;
// }
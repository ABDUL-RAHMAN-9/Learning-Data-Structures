// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str = "Today 23-june-25";
//     cout << str;

//     return 0;
// }

// ! printing  ASCII Values of All Characters in a String
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     char str[] = "AbdulRahman";
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         cout << str[i] << " - " << int(str[i]) << endl;
//     }

//     return 0;
// }

// ! A to Z
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     char a;
//     for (a = 'A'; 'A' <= 'Z'; a++)
//     {
//         cout << a << "-";
//     }

//     return 0;
// }

// ! If you intended to use character array (char array):
// #include <iostream>
// using namespace std;

// int main()
// {
//     char str[100]; // Allocate enough space
//     cout << "Enter string: ";
//     cin.getline(str, 100); // Read line into char array
//     cout << "Data here: " << str << endl;

//     return 0;
// }

// ! If you intended an array of strings (like 10 lines of input):
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter string: ";
//     getline(cin, str); // Correct way to read a full line into a string
//     cout << "Data here: " << str << endl;

//     return 0;
// }

// ! If you intended an array of strings (like 10 lines of input):
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str[10];
//     cout << "Enter :";

//     for (int i = 0; i < 10; i++)
//     {
//         cout << "string" << (i + 1) << ":";
//         getline(cin, str[i]);
//     }
//     cout << endl;
//     cout << "data here:" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << str[i] << " ";
//     }

//     return 0;
// }

// !
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     string str1 = "Hello";
//     string str2 = "World";

//     cout << str1.length() << endl;
//     str1.pop_back();
//     str1.push_back('A');

//     cout << str1;

//     return 0;
// }

// ! Printing using loop
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str = "hello World";
//     for (int i = 0; i < str.length(); i++)
//     {
//         cout << str[i]<<" ";
//     }
//     cout << endl;

//     for(char ch : str)
//     {
//         cout << ch << " ";
//     }

//     return 0;
// }

// ! reverse array

// #include <iostream>
// #include <string>
// using namespace std;

// void reverseString(string &str)
// {
//     int st = 0, end = str.length() - 1;
//     while (st < end)
//     {
//         swap(str[st], str[end]);
//         st++;
//         end--;
//     }
// }

// int main()
// {
//     string str = "HELLO";
//     reverseString(str);
//     cout << str << " ";
//     return 0;
// }

// ! Problem check if palandrome
// #include <iostream>
// #include <string>
// using namespace std;

// bool checkPalindrome(string &s1)
// {
//     int st = 0, end = s1.length() - 1;

//     while (st < end)
//     {
//         if (s1[st] != s1[end])
//         {
//             return false;
//         }
//         st++;
//         end--;
//     }
//     return true;
// }

// int main()
// {
//     string s1 = "abba";
//     cout << (checkPalindrome(s1) ? "true" : "false");

//     return 0;
// }

// ! Substring Reverse Pattern

// #include <iostream>
// #include <string>
// using namespace std;

// void printPattern(char s[], int n)
// {
//     cout << s << endl;

//     int i = 0, j = n - 2;
//     while (i < j)
//     {
//         char c = s[i];
//         s[i] = s[j];
//         s[j] = c;
//         i++;
//         j--;
//     }

//     i = 0;
//     j = n - 2;
//     while (j - i > 1)
//     {
//         s[i] = s[j] = '*';
//         cout << s << endl;
//         i++;
//         j--;
//     }
// }

// int main()
// {
//     char ch[] = "Roman";
//     int n = sizeof(ch) / sizeof(ch[0]);

//     printPattern(ch, n);

//     return 0;
// }

// // ! Insert a character in String at a Given Position

// #include <iostream>
// #include <string>
// using namespace std;

// string insertChar(string &str, char value, int pos)
// {
//     str.insert(str.begin() + pos, value);
// }

// void display(string &str)
// {
//     for (auto val : str)
//     {
//         cout << val;
//     }
// }

// int main()
// {
//     string str = "String";

//     cout << "Before insertion: ";
//     display(str);
//     cout << endl;

//     cout << "After insertion: ";
//     insertChar(str, 'A', 3);
//     display(str);

//     return 0;
// }
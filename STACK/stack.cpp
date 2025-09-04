

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<int> s;
//     s.push(4);
//     s.push(3);
//     s.push(2);
//     s.push(1);

//     cout << s.top() << endl;
//     cout << s.size() << endl;

//     while (!s.empty())
//     {
//         cout << s.top() << endl;
//         s.pop();
//     }

//     return 0;
// }

// ! Implementing stack using vector
// #include <iostream>
// #include <vector>
// using namespace std;
// class Stack
// {
//     vector<int> vec;

// public:
//     void push(int val)
//     {
//         vec.push_back(val);
//     }

//     void pop()
//     {
//         vec.pop_back();
//     }
//     int top()
//     {
//         return vec[vec.size() - 1];
//     }

//     bool empty()
//     {
//         return vec.size() == 0;
//     }
// };
// int main()
// {
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     cout << "Displaying Stack values: " << endl;

//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }

//     return 0;
// }

// ! Stack using Linked List
// #include <iostream>
// #include <list>
// using namespace std;

// class Stack
// {
//     list<int> ll;

// public:
//     void push(int val)
//     {
//         ll.push_front(val);
//     }

//     void pop()
//     {
//         ll.pop_front();
//     }

//     int top()
//     {
//         return ll.front();
//     }
//     bool empty()
//     {
//         return ll.size() == 0;
//     }
// };

// int main()
// {
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     cout << "Implementing stack using Linked List: " << endl;
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }

//     return 0;
// }

// ! Valid Parentheses

// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;
// class Solution
// {
// public:
//     bool isValid(string str)
//     {
//         stack<char> s;

//         for (char ch : str)
//         {
//             if (ch == '{' || ch == '(' || ch == '[')
//             {
//                 s.push(ch); // push opening bracket
//             }
//             else
//             {
//                 if (s.empty())
//                     return false; // no match available

//                 char top = s.top();
//                 if ((top == '{' && ch == '}') ||
//                     (top == '[' && ch == ']') ||
//                     (top == '(' && ch == ')'))
//                 {
//                     s.pop(); // matched, pop it
//                 }
//                 else
//                 {
//                     return false; // mismatch
//                 }
//             }
//         }
//         return s.empty(); // valid only if no unmatched brackets remain
//     }
// };

// int main()
// {
//     Solution sol;

//     string input = "([()]{}])";
//     cout << "Output: " << boolalpha << sol.isValid(input);

//     return 0;
// }


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

//! Build an Array With Stack Operations
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// class Solution
// {
// public:
//     vector<string> buildArray(vector<int> &target, int n)
//     {
//         vector<string> operations;
//         int stream = 1;
//         int i = 0;

//         while (stream <= n && i < target.size())
//         {
//             if (stream == target[i])
//             {
//                 operations.push_back("Push");
//                 i++;
//             }
//             else
//             {
//                 operations.push_back("Push");
//                 operations.push_back("Pop");
//             }
//             stream++;
//         }
//         return operations;
//     }
// };

// int main()
// {
//     Solution sol;
//     vector<int> target = {1, 3};
//     int n = 3;

//     vector<string> result = sol.buildArray(target, n);

//     cout << "[";
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i];
//         if (i != result.size() - 1)
//         {
//             cout << ", ";
//         }
//     }

//     cout << "]" << endl;
//     return 0;
// }

// ! Stock Span Problem
// ? Problem statement
/*
Prices: [100, 80, 60, 70, 60, 75, 85]

Answer (Span): [1, 1, 1, 2, 1, 4, 6]

Meaning:-

Day 1 (100): No previous day → Span = 1

Day 2 (80): Previous price (100) is greater → Span = 1

Day 3 (60): Previous (80,100) are greater → Span = 1

Day 4 (70): Previous day (60) is smaller → Span = 2

Day 5 (60): All previous are higher → Span = 1

Day 6 (75): Previous (60,70,60) are smaller → Span = 4

Day 7 (85): Previous (75,60,70,60,80) are smaller → Span = 6
*/

// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// int main()
// {
//     // Input: stock prices over days
//     vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
//     int n = prices.size();

//     vector<int> span(n, 0); // stores the result
//     stack<int> s;           // stores indices of prices

//     // Process each day's price
//     for (int i = 0; i < n; i++)
//     {
//         // Remove all smaller or equal prices from stack
//         while (!s.empty() && prices[s.top()] <= prices[i])
//         {
//             s.pop();
//         }

//         // If no higher price before → span = i + 1
//         if (s.empty())
//         {
//             span[i] = i + 1;
//         }
//         else
//         {
//             // Else span = difference between today and last higher price
//             span[i] = i - s.top();
//         }

//         // Push current day index onto stack
//         s.push(i);
//     }

//     // Output the results clearly
//     cout << "Stock Prices: ";
//     for (int p : prices)
//         cout << p << " ";
//     cout << "\nStock Span:   ";
//     for (int sp : span)
//         cout << sp << " ";
//     cout << endl;

//     return 0;
// }

//! Delete Middle Element of a Stack
// #include <iostream>
// #include <stack>
// using namespace std;

// class Solution
// {
// public:
//     // Recursive function to delete middle element
//     void deleteMid(stack<int> &s, int current, int midIndex)
//     {
//         if (s.empty())
//             return;

//         // If current element is middle, pop it
//         if (current == midIndex - 1)
//         {
//             s.pop();
//             return;
//         }

//         // Pop top element and recurse
//         int topElement = s.top();
//         s.pop();

//         deleteMid(s, current + 1, midIndex);

//         // Push back the elements after middle is removed
//         s.push(topElement);
//     }

//     // Helper function to start recursion
//     void deleteMid(stack<int> &s)
//     {
//         int n = s.size();
//         int midIndex = (n + 1) / 2; // 1-based index from bottom
//         deleteMid(s, 0, midIndex);
//     }
// };

// // Utility function to print stack (top → bottom)
// void printStack(stack<int> s)
// {
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }

// int main()
// {
//     Solution sol;
//     stack<int> s;

//     // Push elements into stack
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     cout << "Original stack (top → bottom): ";
//     printStack(s);

//     // Delete middle element
//     sol.deleteMid(s);

//     cout << "After deleting middle element (top → bottom): ";
//     printStack(s);

//     return 0;
// }

//! Program to find the Previous Smaller Element for each element in an array

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// // Function to compute previous smaller elements
// vector<int> findPreviousSmaller(const vector<int> &arr)
// {
//     int n = arr.size();
//     vector<int> result(n, 0);
//     stack<int> st; // stack to store potential candidates

//     for (int i = 0; i < n; i++)
//     {
//         // Remove elements from stack that are >= current element
//         while (!st.empty() && st.top() >= arr[i])
//         {
//             st.pop();
//         }

//         // If stack becomes empty → no smaller element on left
//         if (st.empty())
//         {
//             result[i] = -1;
//         }
//         else
//         {
//             result[i] = st.top(); // previous smaller element found
//         }

//         // Push current element into stack
//         st.push(arr[i]);
//     }

//     return result;
// }

// int main()
// {
//     vector<int> arr = {3, 1, 0, 8, 6};

//     vector<int> result = findPreviousSmaller(arr);

//     cout << "Previous Smaller Elements: ";
//     for (int val : result)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

// ! Online Stock Span

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// class StockSpanner
// {
//     stack<pair<int, int>> s; // stack stores {price, span}

// public:
//     StockSpanner() {}

//     int next(int price)
//     {
//         int span = 1; // every price has at least a span of 1 (itself)

//         // if stack top has a price <= current price,
//         // it means current price "dominates" those days,
//         // so we add their spans.
//         while (!s.empty() && s.top().first <= price)
//         {
//             span += s.top().second;
//             s.pop();
//         }

//         // store current price with its span
//         s.push({price, span});
//         return span;
//     }
// };

// int main()
// {
//     StockSpanner spanner;

//     // Example stock prices
//     vector<int> prices = {100, 80, 60, 70, 60, 75, 85};

//     cout << "Stock Span Problem Simulation\n";
//     cout << "---------------------------------\n";

//     for (int price : prices)
//     {
//         int span = spanner.next(price);
//         cout << "Price: " << price
//              << " -> Span: " << span
//              << " (days including today with price <= " << price << ")\n";
//     }

//     return 0;
// }

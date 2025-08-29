

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